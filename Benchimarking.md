# Merge sort

## N up to 200

Running ./bin/merge
Run on (8 X 2419.2 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 1280 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.53, 0.45, 0.32
--------------------------------------------------------------------------------------------------------
Benchmark                     Time             CPU   Iterations malloc avr size malloc calls malloc size
--------------------------------------------------------------------------------------------------------
BM_MergeSort/10             410 ns          410 ns      1335236               2           10          26
BM_MergeSort/29            1394 ns         1394 ns       628837               3           30         116
BM_MergeSort/48            2931 ns         2931 ns       244318               3           62         240
BM_MergeSort/67            3720 ns         3720 ns       184710               5           68         344
BM_MergeSort/86            6297 ns         6297 ns       114001               4          106         496
BM_MergeSort/105           6540 ns         6540 ns       106770               5          126         630
BM_MergeSort/124           7231 ns         7231 ns        80356               5          126         744
BM_MergeSort/143           9871 ns         9871 ns        59225               5          156         903
BM_MergeSort/162          12355 ns        12354 ns        66058               5          194      1.074k
BM_MergeSort/181          12135 ns        12135 ns        51662               5          232      1.245k
---------------------------------------------------------------
Benchmark                     Time             CPU   Iterations
---------------------------------------------------------------
BM_MergeSort_BigO         68.49 N         68.49 N    
BM_MergeSort_RMS             10 %            10 %    
--------------------------------------------------------------------------------------------------------
Benchmark                     Time             CPU   Iterations malloc avr size malloc calls malloc size
--------------------------------------------------------------------------------------------------------
BM_BookMergeSort/10         700 ns          700 ns       971871               1           18          34
BM_BookMergeSort/29        2360 ns         2360 ns       275621               2           56         142
BM_BookMergeSort/48        4301 ns         4301 ns       157431               2           94         272
BM_BookMergeSort/67        6055 ns         6055 ns       120535               3          132         408
BM_BookMergeSort/86        7958 ns         7958 ns        83785               3          170         560
BM_BookMergeSort/105      10114 ns        10114 ns        74930               3          208         712
BM_BookMergeSort/124      10679 ns        10679 ns        55847               3          246         864
BM_BookMergeSort/143      12477 ns        12466 ns        51664               3          284      1.031k
BM_BookMergeSort/162      17898 ns        17898 ns        35789               3          322      1.202k
BM_BookMergeSort/181      19895 ns        19894 ns        40167               3          360      1.373k
---------------------------------------------------------------
Benchmark                     Time             CPU   Iterations
---------------------------------------------------------------
BM_BookMergeSort_BigO      96.26 N         96.25 N    
BM_BookMergeSort_RMS         13 %            13 %     

## N up to 1000

 ./bin/merge
Run on (8 X 2419.2 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 1280 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.31, 0.24, 0.25
---------------------------------------------------------------------------------------------------------
Benchmark                      Time             CPU   Iterations malloc avr size malloc calls malloc size
---------------------------------------------------------------------------------------------------------
BM_MergeSort/10              322 ns          322 ns      2352960               2           10          26
BM_MergeSort/109            5011 ns         5011 ns       116561               5          126         654
BM_MergeSort/208           10806 ns        10806 ns        60899               5          254      1.456k
BM_MergeSort/307           15200 ns        15200 ns        40550               6          356      2.302k
BM_MergeSort/406           20726 ns        20726 ns        29754               6          510      3.248k
BM_MergeSort/505           26855 ns        26855 ns        25179               7          510       4.04k
BM_MergeSort/604           33037 ns        33037 ns        25735               7          694      5.108k
BM_MergeSort/703           39133 ns        39133 ns        15372               6          892      6.197k
BM_MergeSort/802           54446 ns        54446 ns        10908               7       1.022k      7.218k
BM_MergeSort/901           49664 ns        49663 ns        13669               7       1.022k      8.109k
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
BM_MergeSort_BigO          55.27 N         55.27 N    
BM_MergeSort_RMS              13 %            13 %    
---------------------------------------------------------------------------------------------------------
Benchmark                      Time             CPU   Iterations malloc avr size malloc calls malloc size
---------------------------------------------------------------------------------------------------------
BM_BookMergeSort/10          538 ns          538 ns      1029276               1           18          34
BM_BookMergeSort/109        6383 ns         6382 ns        88683               3          216         744
BM_BookMergeSort/208       14878 ns        14878 ns        42546               3          414      1.616k
BM_BookMergeSort/307       18908 ns        18908 ns        29827               4          612      2.558k
BM_BookMergeSort/406       31335 ns        31335 ns        20708               4          810      3.548k
BM_BookMergeSort/505       37715 ns        37715 ns        19317               4       1.008k      4.538k
BM_BookMergeSort/604       58541 ns        58541 ns        10000               4       1.206k       5.62k
BM_BookMergeSort/703       83226 ns        83224 ns         6562               4       1.404k      6.709k
BM_BookMergeSort/802       62167 ns        62167 ns         8840               4       1.602k      7.798k
BM_BookMergeSort/901       79171 ns        79170 ns         8187               4         1.8k      8.887k
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
BM_BookMergeSort_BigO      86.84 N         86.84 N    
BM_BookMergeSort_RMS          19 %            19 %   


# Insertion sort

## N up to 200

Running ./bin/insertion
Run on (8 X 2419.2 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 1280 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.23, 0.45, 0.29
------------------------------------------------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations malloc avr size malloc calls malloc size
------------------------------------------------------------------------------------------------------------
BM_InsertionSort/10            81.8 ns         81.8 ns      8537929               0            0           0
BM_InsertionSort/29             331 ns          331 ns      1778653               0            0           0
BM_InsertionSort/48             637 ns          637 ns      1129052               0            0           0
BM_InsertionSort/67             911 ns          911 ns       718992               0            0           0
BM_InsertionSort/86            1301 ns         1301 ns       629543               0            0           0
BM_InsertionSort/105           1360 ns         1360 ns       441076               0            0           0
BM_InsertionSort/124           1772 ns         1772 ns       413954               0            0           0
BM_InsertionSort/143           1957 ns         1957 ns       268060               0            0           0
BM_InsertionSort/162           2418 ns         2418 ns       237350               0            0           0
BM_InsertionSort/181           3356 ns         3356 ns       251954               0            0           0
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
BM_InsertionSort_BigO         15.13 N         15.13 N    
BM_InsertionSort_RMS             14 %            14 %    
------------------------------------------------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations malloc avr size malloc calls malloc size
------------------------------------------------------------------------------------------------------------
BM_BookInsertionSort/10        82.6 ns         82.6 ns      9020177               0            0           0
BM_BookInsertionSort/29         317 ns          317 ns      2006591               0            0           0
BM_BookInsertionSort/48         614 ns          614 ns       909429               0            0           0
BM_BookInsertionSort/67         819 ns          819 ns       774325               0            0           0
BM_BookInsertionSort/86        1306 ns         1306 ns       557848               0            0           0
BM_BookInsertionSort/105       1603 ns         1603 ns       474855               0            0           0
BM_BookInsertionSort/124       2095 ns         2095 ns       373879               0            0           0
BM_BookInsertionSort/143       2344 ns         2344 ns       260402               0            0           0
BM_BookInsertionSort/162       2496 ns         2496 ns       272088               0            0           0
BM_BookInsertionSort/181       3046 ns         3046 ns       257539               0            0           0
-------------------------------------------------------------------
Benchmark                         Time             CPU   Iterations
-------------------------------------------------------------------
BM_BookInsertionSort_BigO      15.40 N         15.40 N    
BM_BookInsertionSort_RMS         10 %            10 % 

## N up to 1000

Running ./bin/insertion
Run on (8 X 2419.2 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 1280 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.04, 0.10, 0.04
-------------------------------------------------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations malloc avr size malloc calls malloc size
-------------------------------------------------------------------------------------------------------------
BM_InsertionSort/10             60.9 ns         60.9 ns     10135033               0            0           0
BM_InsertionSort/109            1133 ns         1133 ns       582268               0            0           0
BM_InsertionSort/208            2388 ns         2388 ns       312531               0            0           0
BM_InsertionSort/307            3503 ns         3503 ns       195434               0            0           0
BM_InsertionSort/406            4723 ns         4723 ns       150321               0            0           0
BM_InsertionSort/505            5649 ns         5649 ns       120672               0            0           0
BM_InsertionSort/604            6733 ns         6733 ns       101842               0            0           0
BM_InsertionSort/703            7807 ns         7807 ns        85173               0            0           0
BM_InsertionSort/802            8902 ns         8901 ns        72274               0            0           0
BM_InsertionSort/901           10512 ns        10511 ns        68571               0            0           0
--------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations
--------------------------------------------------------------------
BM_InsertionSort_BigO          11.53 N         11.53 N    
BM_InsertionSort_RMS               4 %             4 %    
-------------------------------------------------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations malloc avr size malloc calls malloc size
-------------------------------------------------------------------------------------------------------------
BM_BookInsertionSort/10         33.9 ns         33.9 ns     19651408               0            0           0
BM_BookInsertionSort/109         435 ns          435 ns      1388602               0            0           0
BM_BookInsertionSort/208         837 ns          837 ns       709142               0            0           0
BM_BookInsertionSort/307        1267 ns         1267 ns       798883               0            0           0
BM_BookInsertionSort/406        1681 ns         1681 ns       366984               0            0           0
BM_BookInsertionSort/505        2375 ns         2375 ns       436065               0            0           0
BM_BookInsertionSort/604        2476 ns         2476 ns       295518               0            0           0
BM_BookInsertionSort/703        2797 ns         2797 ns       300326               0            0           0
BM_BookInsertionSort/802        3258 ns         3258 ns       188350               0            0           0
BM_BookInsertionSort/901        3814 ns         3814 ns       193509               0            0           0
--------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations
--------------------------------------------------------------------
BM_BookInsertionSort_BigO       4.20 N          4.20 N    
BM_BookInsertionSort_RMS           5 %             5 %   


# Malloc benchmark

## N up to 1000

Running ./bin/malloc
Run on (8 X 2419.2 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 1280 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.06, 0.11, 0.05
------------------------------------------------------------------------------
Benchmark                                    Time             CPU   Iterations
------------------------------------------------------------------------------
Malloc in mine algorithm/10/2              178 ns          178 ns      3704662
Malloc in mine algorithm/126/5            1956 ns         1956 ns       344462
Malloc in mine algorithm/254/5            3904 ns         3904 ns       188182
Malloc in mine algorithm/356/6            5707 ns         5707 ns        97173
Malloc in mine algorithm/510/6            8477 ns         8477 ns        81388
Malloc in mine algorithm/510/7            8206 ns         8206 ns        78108
Malloc in mine algorithm/694/7           10809 ns        10809 ns        67404
Malloc in mine algorithm/892/6           14087 ns        14087 ns        50117
Malloc in mine algorithm/1022/7          16482 ns        16481 ns        40997
Malloc in mine algorithm/1022/7          15552 ns        15553 ns        4356
------------------------------------------------------------------------------
Benchmark                                    Time             CPU   Iterations
------------------------------------------------------------------------------
Malloc in the Book algorithm/18/1          315 ns          315 ns      2252466
Malloc in the Book algorithm/216/3        3342 ns         3342 ns       200528
Malloc in the Book algorithm/414/3        6413 ns         6413 ns        96916
Malloc in the Book algorithm/612/4        9658 ns         9658 ns        69482
Malloc in the Book algorithm/810/4       12571 ns        12571 ns        60847
Malloc in the Book algorithm/1008/4      15371 ns        15371 ns        44046
Malloc in the Book algorithm/1206/4      18751 ns        18751 ns        34906
Malloc in the Book algorithm/1404/4      22342 ns        22342 ns        29915
Malloc in the Book algorithm/1602/4      25447 ns        25447 ns        26249
Malloc in the Book algorithm/1800/4      29004 ns        29004 ns        24817