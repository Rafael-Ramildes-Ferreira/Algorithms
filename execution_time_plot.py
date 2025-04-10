""" 
# Plots the graph of execution time by size of the array

It is done to observe how the execution time grows with the growth of the array size.
Google's benchmark shows O(n), and it seems reasanable based on this observation.
The size of the array is problably not getting big enough for the O(n^2) or O(n Log n) to be seen
"""

import matplotlib.pyplot as plt

list_size = 1000

book_insertion_sort_execution_time : list[int] = [
	118,
	2081,
	4199,
	5103,
	7679,
	10362,
	10086,
	11335,
	14838,
	17928
]

insertion_sort_execution_time : list[int] = [
	449,
	10805,
	22131,
	28088,
	57418,
	49977,
	70024,
	92730,
	123083,
	67729
]

book_merge_sort_execution_time : list[int] = [
	949,
	16820,
	33463,
	52794,
	70155,
	106114,
	102769,
	107059,
	124373,
	177801
]

merge_sort_execution_time : list[int] = [
	109,
	2460,
	4052,
	6294,
	7183,
	10234,
	14478,
	14357,
	15421,
	15205
]
n : list[int] = [i for i in range(10+int((list_size-10)/10),list_size+9,int((list_size-10)/10))]


plt.figure()
plt.plot(n,book_insertion_sort_execution_time,'.')
plt.plot(n,insertion_sort_execution_time,'.')
plt.ylabel("CPU time [ns]")
plt.xlabel("Array size")
plt.legend(["Book implementation","My implementation"])
plt.title("Insertion Sort Execution time")

plt.figure()
plt.plot(n,book_merge_sort_execution_time,'.')
plt.plot(n,merge_sort_execution_time,'.')
plt.ylabel("CPU time [ns]")
plt.xlabel("Array size")
plt.legend(["Book implementation","My implementation"])
plt.title("Merge Sort Execution time")

plt.show()