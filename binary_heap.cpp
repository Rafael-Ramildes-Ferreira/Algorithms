#include <cstring>
#include <iostream>


template<typename T, unsigned int S>
class BinaryHeap {
private:
	T _values[S];
public:
	BinaryHeap();
	BinaryHeap(T *values, unsigned int size);
	T get_parent(int index);
	T get_left_child(int index);
	T get_right_child(int index);
	int get_parent_index(int index);
	int get_left_child_index(int index);
	int get_right_child_index(int index);
	void heapify(int index);

	T *begin();
	T *end();
	
	unsigned int size;

	T& operator[](int index);
};

template<typename T, unsigned int S>
BinaryHeap<T,S>::BinaryHeap()
{
	this->size = 0;
}

template<typename T, unsigned int S>
BinaryHeap<T,S>::BinaryHeap(T *values, unsigned int size)
{
	this->size = size;
	memcpy(this->_values, values, size*sizeof(T));
	this->heapify(0);
}

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
	return index + 1;
}

template<typename T, unsigned int S>
void BinaryHeap<T,S>::heapify(int index)
{
	int l = this->get_left_child_index(index);
	int r = this->get_right_child_index(index);
	int largest;

	if(l < S){
		if(l <= this->size && (*this)[l] > (*this)[index]){
			largest = l;
		} else {
			largest = index;
		}

		if(r < S){
			if(r <= this->size && (*this)[r] > (*this)[largest]){
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
T& BinaryHeap<T,S>::operator[](int index)
{
	return this->_values[index];
}

template<typename T, unsigned int S>
T *BinaryHeap<T,S>::begin()
{
	return this->_values;
}

template<typename T, unsigned int S>
T *BinaryHeap<T,S>::end()
{
	return this->_values + this->size;
}


int main()
{
	int list[] = {1,4,6,2,4};
	auto foo = BinaryHeap<int,10>(list, 5);
	std::cout << foo[0] << std::endl;
	std::cout << foo[1] << std::endl;
	std::cout << foo[2] << std::endl;
	std::cout << foo[3] << std::endl;
	std::cout << foo[4] << std::endl;
	std::cout << "[";
	for(auto i: foo){
		std::cout << i << ", ";
	}
	std::cout << "]" << std::endl;
	return 0;
}