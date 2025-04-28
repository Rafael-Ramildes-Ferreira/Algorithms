#include <iostream>
#include <cassert>


/*########################### CLASS IMPLEMENTATION ###########################*/
template<typename T>
struct Node {
	T data;
	Node* left;
	Node* right;
	Node* p;

	Node(T value) : data(value), left(nullptr), right(nullptr) {}

    bool operator<(const Node& other) const {
        return this->data < other.data;
    }
    bool operator<=(const Node& other) const {
        return this->data <= other.data;
    }
    bool operator>(const Node& other) const {
        return this->data > other.data;
    }
    bool operator>=(const Node& other) const {
        return this->data >= other.data;
    }

    bool operator<(const T& other) const {
        return this->data < other;
    }
    bool operator<=(const T& other) const {
        return this->data <= other;
    }
    bool operator>(const T& other) const {
        return this->data > other;
    }
    bool operator>=(const T& other) const {
        return this->data >= other;
    }
    bool operator==(const T& other) const {
        return this->data == other;
    }
	std::ostream& operator<<(const Node& node) const {
		return node->data;
	}
};

template<typename T>
class BinarySearchTree {
public:
	BinarySearchTree() : root(nullptr) {}
	void insert(T value);
	void in_order_walk();
	void in_order_walk(Node<T>* x);
	Node<T>* search(T value);
	Node<T>* search(Node<T> *node, T value);
	Node<T>* minimum();
	Node<T>* maximum();
	static Node<T>* predecessor(Node<T> *node);
	static Node<T>* successor(Node<T> *node);

// private:
	Node<T>* root;
};



/*########################### METHOD IMPLEMENTATION ##########################*/
template<typename T>
void BinarySearchTree<T>::insert(T value) {
	Node<T> *node = this->root;

	if(this->root == nullptr) {
		this->root = new Node<T>(value);
		return;
	}

	while (node != nullptr) { // Basically an infinite loop
		if (*node > value) {
		
			if(node->left == nullptr) {
				node->left = new Node<T>(value);
				node->left->p = node;
				return;
			}
			node = node->left;
		
		} else if (*node < value) {

			if(node->right == nullptr) {
				node->right = new Node<T>(value);
				node->right->p = node;
				return;
			}
			node = node->right;
		}
	}
	
	// Never reached
	assert(false);
}

template<typename T>
void BinarySearchTree<T>::in_order_walk() {
	auto x = root;
	in_order_walk(x);
	std::cout << std::endl;
}

template<typename T>
void BinarySearchTree<T>::in_order_walk(Node<T>* x) {	
	if(x != nullptr) {
		in_order_walk(x->left);
		std::cout << x->data << " ";
		in_order_walk(x->right);
	}
}

template<typename T>
Node<T>* BinarySearchTree<T>::search(T value) {
	return this->search(root, value);
}

template<typename T>
Node<T>* BinarySearchTree<T>::search(Node<T> *node, T value) {	
	if (node == nullptr || *node == value) {
		return node;
	}
	
	if (*node > value) {
		return search(node->left, value);
	} else {
		return search(node->right, value);
	}
}

template<typename T>
Node<T>* BinarySearchTree<T>::minimum()
{
	if(root == nullptr) {
		return nullptr;
	}

	Node<T>* node = root;
	while(node->left != nullptr){
		node = node->left;
	}

	return node;
}

template<typename T>
Node<T>* BinarySearchTree<T>::maximum()
{
	if(root == nullptr) {
		return nullptr;
	}

	Node<T>* node = root;
	while(node->right != nullptr){
		node = node->right;
	}

	return node;
}

template<typename T>
Node<T>* BinarySearchTree<T>::predecessor(Node<T> *node)
{
	if(node == nullptr){
		return nullptr;
	}

	// return node->left->maximum();
	Node<T> *aux = node->left;
	if(aux != nullptr){
		while(aux->right != nullptr){
			aux = aux->right;
		}

		return aux;
	} else {
		Node<T> *parent = node->p;
		Node<T> *aux = node;
		while(parent != nullptr && parent->left == aux){
			aux = parent;
			parent = parent->p;
		}

		return parent;
	}

}

template<typename T>
Node<T>* BinarySearchTree<T>::successor(Node<T> *node)
{
	if(node == nullptr){
		return nullptr;
	}

	// return node->right->minimum();
	Node<T> *aux = node->right;
	if(aux != nullptr){
		while(aux->left != nullptr){
			aux = aux->left;
		}
		
		return aux;
	} else {
		Node<T> *parent = node->p;
		Node<T> *aux = node;
		while(parent != nullptr && parent->right == aux){
			aux = parent;
			parent = parent->p;
		}

		return parent;
	}
}

int main() {
	BinarySearchTree<int> bst;
	bst.insert(5);
	bst.insert(3);
	bst.insert(7);
	bst.insert(2);
	bst.insert(4);
	bst.insert(6);
	bst.insert(8);

	std::cout << "Inorder Traversal: ";
	bst.in_order_walk();

	std::cout << "Minimum: " << bst.minimum()->data << std::endl;
	std::cout << "Maximum: " << bst.maximum()->data << std::endl;

	std::cout << "Root successor: " << BinarySearchTree<int>::successor(bst.root)->data << std::endl;
	std::cout << "Root predecessor: " << BinarySearchTree<int>::predecessor(bst.root)->data << std::endl;


	int key = 4;
	if (bst.search(key)) {
		std::cout << key << " found in the BST." << std::endl;
	} else {
		std::cout << key << " not found in the BST." << std::endl;
	}

	return 0;
}