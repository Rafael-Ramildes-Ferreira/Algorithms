""" 
# Plots the graph of execution time by size of the array

It is done to observe how the execution time grows with the growth of the array size.
Google's benchmark shows O(n), and it seems reasanable based on this observation.
The size of the array is problably not getting big enough for the O(n^2) or O(n Log n) to be seen
"""

import matplotlib.pyplot as plt

list_size = 1000

book_insertion_sort_execution_time : list[int] = [
	33.9,
	435,
	837,
	1267,
	1681,
	2375,
	2476,
	2797,
	3258,
	3814
]

insertion_sort_execution_time : list[int] = [
	60.9,
	1133,
	2388,
	3503,
	4723,
	5649,
	6733,
	7807,
	8901,
	10511
]

book_merge_sort_execution_time : list[int] = [
	538,
	6382,
	14878,
	18908,
	31335,
	37715,
	58541,
	83224,
	62167,
	79170
]

merge_sort_execution_time : list[int] = [
	322,
	5011,
	10806,
	15200,
	20726,
	26855,
	33037,
	39133,
	54446,
	49663
]
n : list[int] = [i for i in range(10+int((list_size-10)/10),list_size+9,int((list_size-10)/10))]


plt.figure()
plt.plot(n,book_insertion_sort_execution_time,'.')
plt.plot(n,insertion_sort_execution_time,'.')
# plt.ylabel("CPU time [ns]")
# plt.xlabel("Array size")
# plt.legend(["Book implementation","My implementation"])
# plt.title("Insertion Sort Execution time")

# plt.figure()
plt.plot(n,book_merge_sort_execution_time,'.')
plt.plot(n,merge_sort_execution_time,'.')
plt.ylabel("CPU time [ns]")
plt.xlabel("Array size")
plt.legend(["Insertion sort Book implementation","Insertion sort My implementation","Merge sort Book implementation","Merge sort My implementation"])
plt.title("Insertion and Merge Sort Execution time")

plt.show()