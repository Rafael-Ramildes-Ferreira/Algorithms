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
BM_MergeSort/10              449 ns          449 ns      1197393               2           10          26
BM_MergeSort/109           10805 ns        10805 ns        58570               5          126         654
BM_MergeSort/208           22131 ns        22131 ns        36999               5          254      1.456k
BM_MergeSort/307           28088 ns        28088 ns        29391               6          356      2.302k
BM_MergeSort/406           57418 ns        57418 ns        10000               6          510      3.248k
BM_MergeSort/505           49977 ns        49977 ns        10062               7          510       4.04k
BM_MergeSort/604           70024 ns        70024 ns        10930               7          694      5.108k
BM_MergeSort/703           92729 ns        92730 ns         6717               6          892      6.197k
BM_MergeSort/802          123083 ns       123083 ns         6181               7       1.022k      7.218k
BM_MergeSort/901           67729 ns        67729 ns         9150               7       1.022k      8.109k
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
BM_MergeSort_BigO         104.30 N        104.30 N    
BM_MergeSort_RMS              34 %            34 %    
---------------------------------------------------------------------------------------------------------
Benchmark                      Time             CPU   Iterations malloc avr size malloc calls malloc size
---------------------------------------------------------------------------------------------------------
BM_BookMergeSort/10          950 ns          949 ns       603401               1           18          34
BM_BookMergeSort/109       16820 ns        16820 ns        49206               3          216         744
BM_BookMergeSort/208       33463 ns        33463 ns        17680               3          414      1.616k
BM_BookMergeSort/307       52794 ns        52794 ns        16539               4          612      2.558k
BM_BookMergeSort/406       70155 ns        70155 ns        10625               4          810      3.548k
BM_BookMergeSort/505      106113 ns       106114 ns         7348               4       1.008k      4.538k
BM_BookMergeSort/604      102769 ns       102769 ns         6603               4       1.206k       5.62k
BM_BookMergeSort/703      107058 ns       107059 ns         8319               4       1.404k      6.709k
BM_BookMergeSort/802      124372 ns       124373 ns         8347               4       1.602k      7.798k
BM_BookMergeSort/901      177802 ns       177801 ns         6139               4         1.8k      8.887k
----------------------------------------------------------------
Benchmark                      Time             CPU   Iterations
----------------------------------------------------------------
BM_BookMergeSort_BigO     170.71 N        170.71 N    
BM_BookMergeSort_RMS          13 %            13 %   


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
Load Average: 0.48, 0.33, 0.29
-------------------------------------------------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations malloc avr size malloc calls malloc size
-------------------------------------------------------------------------------------------------------------
BM_InsertionSort/10              109 ns          109 ns      5631804               0            0           0
BM_InsertionSort/109            2461 ns         2460 ns       265145               0            0           0
BM_InsertionSort/208            4052 ns         4052 ns       164189               0            0           0
BM_InsertionSort/307            6294 ns         6294 ns        87806               0            0           0
BM_InsertionSort/406            7183 ns         7183 ns        89404               0            0           0
BM_InsertionSort/505           10234 ns        10234 ns        63813               0            0           0
BM_InsertionSort/604           14478 ns        14478 ns        48564               0            0           0
BM_InsertionSort/703           14357 ns        14357 ns        38826               0            0           0
BM_InsertionSort/802           15422 ns        15421 ns        57968               0            0           0
BM_InsertionSort/901           15206 ns        15205 ns        41929               0            0           0
--------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations
--------------------------------------------------------------------
BM_InsertionSort_BigO          19.65 N         19.65 N    
BM_InsertionSort_RMS              12 %            12 %    
-------------------------------------------------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations malloc avr size malloc calls malloc size
-------------------------------------------------------------------------------------------------------------
BM_BookInsertionSort/10          118 ns          118 ns      5728324               0            0           0
BM_BookInsertionSort/109        2081 ns         2081 ns       346322               0            0           0
BM_BookInsertionSort/208        4199 ns         4199 ns       128520               0            0           0
BM_BookInsertionSort/307        5103 ns         5103 ns       102295               0            0           0
BM_BookInsertionSort/406        7679 ns         7679 ns        78345               0            0           0
BM_BookInsertionSort/505       10362 ns        10362 ns        63585               0            0           0
BM_BookInsertionSort/604       10086 ns        10086 ns        53810               0            0           0
BM_BookInsertionSort/703       11334 ns        11335 ns        47483               0            0           0
BM_BookInsertionSort/802       14843 ns        14838 ns        54188               0            0           0
BM_BookInsertionSort/901       17928 ns        17928 ns        44366               0            0           0
--------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations
--------------------------------------------------------------------
BM_BookInsertionSort_BigO      18.20 N         18.20 N    
BM_BookInsertionSort_RMS           9 %             9 %   


# Malloc benchmark

## N up to 1000

Running ./bin/malloc
Run on (8 X 2419.2 MHz CPU s)
CPU Caches:
  L1 Data 48 KiB (x4)
  L1 Instruction 32 KiB (x4)
  L2 Unified 1280 KiB (x4)
  L3 Unified 8192 KiB (x1)
Load Average: 0.10, 0.26, 0.27
------------------------------------------------------------------------------
Benchmark                                    Time             CPU   Iterations
------------------------------------------------------------------------------
Malloc in mine algorithm/10/2              414 ns          414 ns      2283725
Malloc in mine algorithm/126/5            4285 ns         4285 ns       124816
Malloc in mine algorithm/254/5            8882 ns         8881 ns        92662
Malloc in mine algorithm/356/6           10585 ns        10585 ns        63838
Malloc in mine algorithm/510/6           13943 ns        13943 ns        50351
Malloc in mine algorithm/510/7           14501 ns        14501 ns        41672
Malloc in mine algorithm/694/7           19149 ns        19148 ns        37572
Malloc in mine algorithm/892/6           21672 ns        21672 ns        27440
Malloc in mine algorithm/1022/7          29252 ns        29252 ns        24413
Malloc in mine algorithm/1022/7          32755 ns        32755 ns        21990
Malloc in the Book algorithm/18/1          532 ns          532 ns      1273146
Malloc in the Book algorithm/216/3        6221 ns         6221 ns       110597
Malloc in the Book algorithm/414/3       11843 ns        11843 ns        65436
Malloc in the Book algorithm/612/4       15782 ns        15782 ns        41677
Malloc in the Book algorithm/810/4       24674 ns        24674 ns        30166
Malloc in the Book algorithm/1008/4      40948 ns        40948 ns        17173
Malloc in the Book algorithm/1206/4      51404 ns        51404 ns        10000
Malloc in the Book algorithm/1404/4      52748 ns        52748 ns        10000
Malloc in the Book algorithm/1602/4      56297 ns        56297 ns        11428
Malloc in the Book algorithm/1800/4      63219 ns        63214 ns         9219