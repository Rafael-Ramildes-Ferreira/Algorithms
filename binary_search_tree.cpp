#include <iostream>
#include <cassert>


/*########################### CLASS IMPLEMENTATION ###########################*/
template<typename T>
struct Node {
	T data;
	Node* left;
	Node* right;

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

private:
	Node<T>* root;
};



/*########################### METHOD IMPLEMENTATION ##########################*/
template<typename T>
void BinarySearchTree<T>::insert(T value) {
	Node<T> *node = root;

	if(root == nullptr) {
		root = new Node<T>(value);
		return;
	}

	while (node != nullptr) {
		if (*node > value) {
		
			if(node->left == nullptr) {
				node->left = new Node<T>(value);
				return;
			}
			node = node->left;
		
		} else if (*node < value) {

			if(node->right == nullptr) {
				node->right = new Node<T>(value);
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

int main() {
	BinarySearchTree<int> bst;
	bst.insert(50);
	bst.insert(30);
	bst.insert(70);
	bst.insert(20);
	bst.insert(40);
	bst.insert(60);
	bst.insert(80);

	std::cout << "Inorder Traversal: ";
	bst.in_order_walk();

	int key = 40;
	if (bst.search(key)) {
		std::cout << key << " found in the BST." << std::endl;
	} else {
		std::cout << key << " not found in the BST." << std::endl;
	}

	return 0;
}