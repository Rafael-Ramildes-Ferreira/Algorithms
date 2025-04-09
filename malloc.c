/******************************************************************************/
/* Tests the time taken by the malloc calls in the execution of merge sort    */
/******************************************************************************/
#include <benchmark/benchmark.h>
#include <stdlib.h>

void BM_malloc_forloop(benchmark::State& state)
{
	void *foo;
	for(auto _ : state){
		for(int i = 0; i < state.range(0); i++){
			foo = malloc(state.range(1));
			benchmark::DoNotOptimize(foo);
			free(foo);
		}
	}
}

/**
 * @brief Abbreviates every call to one single call
 * @note 	That is not the same, in terms of time, as calling multiple times.
 * 			It takes constant time like this
 */
void BM_malloc_singlecall(benchmark::State& state)
{
	void *foo;
	for(auto _ : state){
		foo = malloc(state.range(0)*state.range(1));
		benchmark::DoNotOptimize(foo);
		free(foo);
	}
}

/**
 * @brief 	Setups the benchmark based on data from the algorithm benchmark
 * 			(see Benchmarking.md).
 */
BENCHMARK(BM_malloc_forloop)
	->Args({10,2})
	->Args({126,5})
	->Args({254,5})
	->Args({356,6})
	->Args({510,6})
	->Args({510,7})
	->Args({694,7})
	->Args({892,6})
	->Args({1022,7})
	->Args({1022,7})
	->Name("Malloc in mine algorithm");
BENCHMARK(BM_malloc_forloop)
	->Args({18,1})
	->Args({216,3})
	->Args({414,3})
	->Args({612,4})
	->Args({810,4})
	->Args({1008,4})
	->Args({1206,4})
	->Args({1404,4})
	->Args({1602,4})
	->Args({1800,4})
	->Name("Malloc in the Book algorithm");
BENCHMARK_MAIN();