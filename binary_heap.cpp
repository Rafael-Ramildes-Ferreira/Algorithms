#include <cstring>
#include <iostream>
#include <initializer_list>



/*########################### CLASS IMPLEMENTATION ###########################*/
/**
 * @class BinaryHeap
 * @brief Declares a Binary Heap for a generic type T
 * @param T Element type
 */
template<typename T>
class BinaryHeap {
private:
	T *_values;
public:
	/* Constructors */
	BinaryHeap(T *values, unsigned int size);
	BinaryHeap(std::initializer_list<T> list);

	/* Specific methods */
	T get_parent(int index);
	T get_left_child(int index);
	T get_right_child(int index);
	int get_parent_index(int index);
	int get_left_child_index(int index);
	int get_right_child_index(int index);
	void heapify(int index);
	void build_heap();

	/* for loop helpers */
	T *begin();
	T *end();
	
	/* Public attributes */
	long unsigned int heap_size;

	/* Operators overide */
	T& operator[](int index);
};


/* Constructors ***************************************************************/
template<typename T>
BinaryHeap<T>::BinaryHeap(T *values, unsigned int size) : _values(values), heap_size(size)
{
	this->build_heap();
}

template<typename T>
BinaryHeap<T>::BinaryHeap(std::initializer_list<T> list) : heap_size(list.size())
{
	this->_values = new T[heap_size];	// Saves in the heap
	int i = 0;
	for (const T &val : list) {
		_values[i++] = val;
	}
	this->build_heap();
}


/* Specific methods ***********************************************************/
template<typename T>
T BinaryHeap<T>::get_parent(int index)
{
	return (*this)[index/2];
}

template<typename T>
T BinaryHeap<T>::get_left_child(int index)
{
	return (*this)[2*index];
}

template<typename T>
T BinaryHeap<T>::get_right_child(int index)
{
	return (*this)[2*index + 1];
}

template<typename T>
int BinaryHeap<T>::get_parent_index(int index)
{
	return index/2;
}

template<typename T>
int BinaryHeap<T>::get_left_child_index(int index)
{
	return 2*index;
}

template<typename T>
int BinaryHeap<T>::get_right_child_index(int index)
{
	return 2*index + 1;
}

template<typename T>
void BinaryHeap<T>::heapify(int index)
{
	int l = this->get_left_child_index(index);
	int r = this->get_right_child_index(index);
	int largest = index;

	if(l <= this->heap_size){
		if((*this)[l] > (*this)[index]){
			largest = l;
		}

		if(r <= this->heap_size){
			if((*this)[r] > (*this)[largest]){
				largest = r;
			}
		}

		if(largest != index){
			T old = (*this)[index];
			(*this)[index] = (*this)[largest];
			(*this)[largest] = old;
			this->heapify(largest);
		}
	}
}

template<typename T>
void BinaryHeap<T>::build_heap()
{
	for(int i = this->heap_size/2; i > 0; i--){
		this->heapify(i);
	}
}


/* for loop helpers ***********************************************************/
template<typename T>
T *BinaryHeap<T>::begin()
{
	return this->_values;
}

template<typename T>
T *BinaryHeap<T>::end()
{
	return this->_values + this->heap_size;
}


/* Operators overide **********************************************************/
template<typename T>
T& BinaryHeap<T>::operator[](int index)
{
	return this->_values[index-1];
}


/*########################## SORTING IMPLEMENTATION ##########################*/


template<typename T>
void heap_sort(T *array, unsigned int size)
{
	BinaryHeap heap(array,size);
	for(int i = heap.heap_size; i > 0; i--){
		// Exchange 
		T aux = heap[1];
		heap[1] = heap[i];
		heap[i] = aux;

		heap.heap_size -= 1;
		heap.heapify(1);
	}
}


int main()
{
	// Example usage of BinaryHeap class
	BinaryHeap heap = {42, 7, 19, 3, 25, 14, 88, 1, 56, 30};
	std::cout << "[";
	for(int i = 0; i < 10; i++){
		std::cout << heap[i+1] << ", ";
	}
	std::cout << "]" << std::endl;

	
	// Example usage of heap_sort function
	// int list[] = {1,4,6,2,4};
	int list[] = {42, 7, 19, 3, 25, 14, 88, 1, 56, 30};
	heap_sort(list,10);
	std::cout << "[";
	for(int i = 0; i < 10; i++){
		std::cout << list[i] << ", ";
	}
	std::cout << "]" << std::endl;
	return 0;
}