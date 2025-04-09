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
n : list[int] = [i for i in range(10+int((list_size-10)/10),list_size+9,int((list_size-10)/10))]


plt.figure()
plt.plot(n,book_insertion_sort_execution_time)
plt.show()

plt.figure()
plt.plot(n,book_merge_sort_execution_time)
plt.show()