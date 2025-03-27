# How to make benchmarks

Compile the code with the `BENCHMARKING` option:

```make <source_name> OPTIONS=BENCHMARKING```

Run the executable (you may pass google benchmark options):

```./bin/insertion --benchmark_counters_tabular=true```