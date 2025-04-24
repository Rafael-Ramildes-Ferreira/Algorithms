#include <cstring>
#include <iostream>



/*########################### CLASS IMPLEMENTATION ###########################*/
/**
 * @class BinaryHeap
 * @brief Declares a Binary Heap for a generic type T
 * @param T Element type
 * @param S Maximum size
 */
template<typename T, unsigned int S>
class BinaryHeap {
private:
	T *_values;
public:
	/* Constructors */
	BinaryHeap();
	BinaryHeap(T *values, unsigned int size);
	BinaryHeap(T *values);

	/* Especific methods */
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
	unsigned int heap_size;

	/* Operators overide */
	T& operator[](int index);
};


/* Constructors ***************************************************************/
template<typename T, unsigned int S>
BinaryHeap<T,S>::BinaryHeap()
{
	this->heap_size = 0;
}

template<typename T, unsigned int S>
BinaryHeap<T,S>::BinaryHeap(T *values, unsigned int size)
{
	this->heap_size = size;
	this->_values = (int*) malloc(S*sizeof(T));
	memcpy(this->_values, values, size*sizeof(T));
	this->build_heap();
}

template<typename T, unsigned int S>
BinaryHeap<T,S>::BinaryHeap(T *values) : _values(values)
{
	// Assumes the maximum size
	this->heap_size = S;
	this->build_heap();
}


/* Especific methods **********************************************************/
template<typename T, unsigned int S>
T BinaryHeap<T,S>::get_parent(int index)
{
	return (*this)[index/2];
}

template<typename T, unsigned int S>
T BinaryHeap<T,S>::get_left_child(int index)
{
	return (*this)[2*index];
}

template<typename T, unsigned int S>
T BinaryHeap<T,S>::get_right_child(int index)
{
	return (*this)[2*index + 1];
}

template<typename T, unsigned int S>
int BinaryHeap<T,S>::get_parent_index(int index)
{
	return index/2;
}

template<typename T, unsigned int S>
int BinaryHeap<T,S>::get_left_child_index(int index)
{
	return 2*index;
}

template<typename T, unsigned int S>
int BinaryHeap<T,S>::get_right_child_index(int index)
{
	return 2*index + 1;
}

template<typename T, unsigned int S>
void BinaryHeap<T,S>::heapify(int index)
{
	int l = this->get_left_child_index(index);
	int r = this->get_right_child_index(index);
	int largest = index;

	if(l <= S){
		if(l <= this->heap_size && (*this)[l] > (*this)[index]){
			largest = l;
		}

		if(r <= S){
			if(r <= this->heap_size && (*this)[r] > (*this)[largest]){
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

template<typename T, unsigned int S>
void BinaryHeap<T,S>::build_heap()
{
	for(int i = this->heap_size/2; i > 0; i--){
		this->heapify(i);
	}
}


/* for loop helpers ***********************************************************/
template<typename T, unsigned int S>
T *BinaryHeap<T,S>::begin()
{
	return this->_values;
}

template<typename T, unsigned int S>
T *BinaryHeap<T,S>::end()
{
	return this->_values + this->heap_size;
}


/* Operators overide **********************************************************/
template<typename T, unsigned int S>
T& BinaryHeap<T,S>::operator[](int index)
{
	return this->_values[index-1];
}


/*########################## SORTING IMPLEMENTATION ##########################*/


template<typename T, unsigned int N>
void heap_sort(T *array)
{
	BinaryHeap<T,N> heap(array);
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
	// int list[] = {1,4,6,2,4};
	int list[] = {42, 7, 19, 3, 25, 14, 88, 1, 56, 30};
	heap_sort<int,10>(list);
	std::cout << "[";
	for(int i = 0; i < 10; i++){
		std::cout << list[i] << ", ";
	}
	std::cout << "]" << std::endl;

	// BinaryHeap<int,5> foo = list;
	// auto foo = BinaryHeap<int,10>(list, 5);
	// std::cout << foo[0] << std::endl;
	// std::cout << foo[1] << std::endl;
	// std::cout << foo[2] << std::endl;
	// std::cout << foo[3] << std::endl;
	// std::cout << foo[4] << std::endl;

	// std::cout << "[";
	// for(auto i: foo){
	// 	std::cout << i << ", ";
	// }
	// std::cout << "]" << std::endl;
	return 0;
}