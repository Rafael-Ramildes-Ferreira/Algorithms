#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <memory>

#ifdef BENCHMARKING
#include <benchmark/benchmark.h>

#define list_size  1000
#define arg_num  1
int list_index = 0;
char list[arg_num][list_size] = {
	{78, 23, 91, 47, 12, 35, 66, 80, 55, 3, 95,  42,  67, 30, 15, 60, 5,  88, 99, 10,
	24,  70, 33, 51, 6,  82, 16, 98, 64, 13, 49, 77,  90, 22, 29, 43, 39, 8,  32, 54,
	25,  41, 97, 62, 1,  84, 50, 28, 21, 96, 46, 7,   74, 63, 87, 40, 17, 52, 11, 31,
	37,  45, 53, 86, 19, 73, 85, 92, 34, 68, 9,  26,  57, 2,  89, 79, 48, 18, 20, 61,
	93,  56, 81, 75, 59, 58, 14, 72, 94, 44, 38, 100, 4,  65, 71, 36, 27, 83, 76, 69,
// },
	
	// {
		17, 93, 54, 88, 29, 64, 45, 12, 78, 31, 49, 61, 83, 26, 96, 57, 8,  71, 99, 16,
	37,  74, 55, 41, 11, 22, 95, 32, 69, 36, 50, 85, 21, 92, 98, 42, 39, 19, 62, 70,
	4,	 67, 79, 25, 13, 1,  80, 97, 76, 30, 47, 53, 6,  43, 14, 91, 35, 56, 68, 48,
	81,  27, 90, 9,  3,  20, 84, 59, 24, 46, 82, 40, 52, 75, 87, 33, 7,  38, 89, 2,
	100, 28, 66, 5,  10, 23, 72, 34, 18, 44, 86, 77, 73, 15, 51, 94, 60, 63, 65, 58,
// },
	
	// {
	91,30, 42, 55, 88, 20, 10, 16, 60, 79, 36, 64, 73, 25, 12, 93, 6, 	18,	98,	86,
	22, 11, 45, 100,57, 82, 35, 28, 81, 77, 32, 97, 95, 70, 39, 54, 8, 	68,	48,	4,
	51, 2, 	34, 47, 99, 50, 3, 	19, 71, 17, 29, 26, 21, 85, 5, 	96, 67, 63,	9, 	14,
	46, 41, 44, 61, 53, 1, 	37, 56, 23, 92, 66, 90, 89, 59, 65, 33, 13, 75,	83,	7,
	49, 40, 80, 24, 27, 38, 31, 76, 15, 62, 52, 74, 72, 43, 94, 87, 78, 84,	58,	69,
// },

	// {
		25, 69, 37, 59, 44, 98, 20, 16, 81, 23, 50, 3,  1,  85, 77, 91, 100,11, 9,  72,
	28,  94, 83, 46, 32, 60, 40, 31, 68, 21, 33, 24, 49, 90, 70, 17, 79, 41, 35, 42,
	75,  15, 53, 57, 36, 29, 92, 7,  55, 48, 87, 97, 99, 12, 5,  64, 80, 43, 96, 14,
	62,  34, 18, 26, 51, 56, 2,  30, 13, 8,  76, 54, 19, 63, 10, 73, 47, 4,  39, 93,
	45,  6,  38, 74, 71, 27, 66, 84, 67, 95, 58, 22, 88, 52, 89, 86, 78, 82, 65, 61,
// },

	// {
	99, 22, 38, 45, 84, 72, 6,  81, 19, 43,  74, 27, 67, 50, 34, 41, 25, 64, 13, 39,
	56,  3,  80, 37, 10, 70, 53, 8,  23, 49,  87, 1,  90, 16, 20, 46, 91, 33, 60, 9,
	85,  26, 42, 31, 61, 21, 32, 58, 95, 100, 68, 97, 30, 66, 92, 4,  98, 7,  28, 62,
	14,  17, 5,  24, 29, 77, 35, 54, 89, 82,  71, 44, 2,  40, 12, 79, 59, 57, 15, 51,
	94,  18, 11, 96, 86, 48, 55, 63, 88, 83,  36, 93, 65, 47, 52, 75, 73, 69, 78, 76,
// },

	// {
		34, 71, 88, 56, 10, 67, 29, 9, 41, 98, 50, 6, 45, 92, 79, 22, 83, 27, 97, 12,
	48, 25, 37, 80, 5, 100, 31, 62, 72, 36, 94, 46, 63, 81, 13, 87, 26, 38, 17, 60,
	8, 74, 23, 95, 14, 49, 89, 53, 3, 64, 44, 40, 99, 2, 90, 16, 76, 20, 55, 39,
	28, 43, 68, 19, 85, 7, 21, 58, 47, 32, 82, 66, 11, 35, 77, 91, 96, 70, 33, 1,
	4, 30, 59, 78, 15, 42, 57, 86, 61, 24, 51, 65, 75, 18, 54, 52, 93, 73, 84, 69,
// },

	// {
	90, 43, 8, 14, 79, 37, 45, 68, 50, 5, 88, 29, 17, 99, 34, 72, 92, 57, 23, 60,
	53, 3, 41, 93, 28, 82, 49, 86, 55, 36, 6, 73, 26, 95, 1, 81, 20, 47, 9, 13,
	63, 96, 12, 75, 40, 100, 2, 54, 32, 18, 85, 70, 48, 22, 89, 66, 97, 15, 10, 25,
	62, 74, 64, 16, 35, 42, 30, 83, 27, 7, 52, 4, 80, 76, 19, 31, 67, 21, 91, 39,
	33, 24, 11, 87, 77, 51, 46, 59, 71, 78, 58, 56, 94, 44, 98, 61, 38, 84, 65, 69,
// },

	// {
		20, 92, 48, 78, 36, 15, 61, 4, 99, 35, 22, 65, 73, 9, 50, 88, 29, 53, 79, 42,
	19, 90, 18, 93, 5, 23, 13, 70, 87, 40, 33, 81, 1, 72, 11, 26, 58, 100, 7, 30,
	45, 63, 86, 80, 95, 68, 21, 16, 39, 25, 55, 97, 46, 37, 60, 57, 74, 89, 34, 24,
	66, 56, 96, 31, 3, 41, 64, 14, 27, 98, 6, 17, 51, 10, 94, 12, 77, 38, 85, 91,
	43, 76, 59, 8, 62, 52, 47, 75, 67, 32, 28, 82, 2, 71, 44, 83, 54, 49, 84, 69,
// },

	// {
	68, 23, 12, 51, 95, 86, 2, 5, 93, 8, 34, 41, 83, 14, 40, 30, 78, 50, 4, 99,
	64, 72, 31, 24, 39, 6, 1, 85, 55, 28, 75, 21, 38, 32, 98, 35, 96, 91, 66, 10,
	9, 44, 13, 47, 45, 90, 17, 84, 11, 53, 25, 36, 26, 7, 29, 74, 43, 77, 88, 60,
	80, 37, 71, 52, 92, 97, 46, 27, 48, 3, 70, 22, 20, 33, 76, 63, 16, 58, 79, 19,
	67, 81, 15, 42, 49, 18, 62, 94, 61, 54, 56, 87, 82, 59, 100, 65, 57, 73, 89, 69,
// },

	// {
		89, 36, 77, 91, 53, 9, 26, 21, 64, 85, 11, 49, 50, 45, 41, 32, 81, 19, 60, 74,
	98, 93, 37, 68, 6, 99, 31, 12, 16, 7, 2, 94, 20, 73, 39, 27, 55, 4, 10, 30,
	25, 80, 24, 48, 57, 34, 14, 75, 63, 22, 71, 56, 46, 66, 67, 43, 8, 97, 59, 76,
	95, 18, 35, 3, 13, 78, 29, 15, 87, 17, 83, 23, 28, 58, 52, 42, 54, 47, 70, 40,
	5, 1, 38, 79, 33, 88, 100, 86, 44, 51, 90, 61, 62, 96, 92, 72, 82, 69, 65, 84}
};


size_t malloc_size_sum = 0;
int num_malloc_calls = 0;
auto malloc_hook = [](size_t size){
	malloc_size_sum += size;
	num_malloc_calls++;
};

void *custom_malloc(size_t size) {
    void *p = malloc(size);
	malloc_hook(size);
    return p;
}
#define alg_malloc(size) custom_malloc(size)

#define AFTER_TEST \
	state.SetComplexityN(state.range(0)); \
	auto iter = state.iterations(); \
	state.counters["malloc size"] = malloc_size_sum / iter; \
	if(num_malloc_calls != 0){\
		state.counters["malloc avr size"] = malloc_size_sum / num_malloc_calls;\
	} else {\
		state.counters["malloc avr size"] = 0;\
	}\
	state.counters["malloc calls"] = num_malloc_calls / iter; \
	malloc_size_sum = 0; \
	num_malloc_calls = 0;

#else
#define alg_malloc(size) malloc(size)
#endif


void insert(char *list, int size, char to_insert){	// costs 4*n where n is `size`
	for(int i = size-1; i >= 0; i--){	// 2*(n) -- 2 because of the comparison and the decrement
		if(to_insert < list[i]){		// (n)
			list[i+1] = list[i];		// (n-1)
		}
		else{
			list[i+1] = to_insert;		// (1 or 0)
			return;
		}
	}
	list[0] = to_insert;				// (1 or 0)
}

void insertion_sort(char *list,int size){	// costs n + 4 + (n-2)*2 + 4*(n-2)(n-1)/2 = 2n^2 - 3n  + 4
	if(size == 2){						// (n-2 + 1)
		if(list[0] > list[1]){			// (1)
			char aux = list[0];			// (1 or 0)
			list[0] = list[1];			// (1 or 0)
			list[1] = aux;				// (1 or 0)
		}		
		return;							// (1)
	}
	else{
		insertion_sort(list, size - 1);	// (n-2)
		char aux = list[size-1];		// (n-2)
		insert(list, size - 1, aux);	// sum_{k=2}^{n}(4*k) = 4*(n-2)(n-1)/2
		return;
	}
}

void insertion_sort_book(char *list,int size){	// costs 2*n + 5*(n-1) + 2*(n-1)(n)/2 = n^2 + 6n - 5
	for(int i = 1; i < size; i++){		// 2*(n) -- 2 because of the comparison and the increment
		char key = list[i];				// (n-1)
		int j = i - 1;					// (n-1)
		while(j >= 0 && list[j] > key){	// 2*(n-1) -- 2 for both comparisons (I could also consider the &&)
			list[j+1] = list[j];		// sum_{k=1}^{n-1}(k) = (n-1)(n)/2
			j--;						// sum_{k=1}^{n-1}(k) = (n-1)(n)/2
		}
		list[j+1] = key;				// (n-1)
	}
}

#ifdef BENCHMARKING
static void BM_InsertionSort(benchmark::State& state)
{
	for (auto _ : state) {
		insertion_sort(list[list_index++%arg_num], state.range(0));
	}
	AFTER_TEST
}

static void BM_BookInsertionSort(benchmark::State& state)
{
	for (auto _ : state) {
		insertion_sort_book(list[list_index++%arg_num], state.range(0));
	}
	AFTER_TEST
}

BENCHMARK(BM_InsertionSort)
	->ReportAggregatesOnly(1)
	// ->DenseRange(0,arg_num-1,1);
	->ArgsProduct({
		// benchmark::CreateDenseRange(0,arg_num-1,1),
		benchmark::CreateDenseRange(10,list_size+9,(list_size-10)/10)
	})//;
	->Complexity(benchmark::oN);
	//->Repetitions(10);
BENCHMARK(BM_BookInsertionSort)
	->ReportAggregatesOnly(1)
	->DenseRange(10,list_size+9,(list_size-10)/10)
	->Complexity(benchmark::oN);
	//->Repetitions(10);
BENCHMARK_MAIN();
#else
int main(){
	char list[] = {2,4,1,5,10,8,3};
	char to_insert = 3;

	// insertion_sort(list,sizeof(list)/sizeof(char));
	insertion_sort_book(list,sizeof(list)/sizeof(char));

	printf("Sorted List = [\n\t");
	int index;
	for(index = 0; index < sizeof(list)/sizeof(char) - 1; index++)
		printf("%d, ",list[index]);
		if(index >= 10)
			printf("\n\t");
	printf("%d\n ]\n",list[index]);

	return 0;
}
#endif