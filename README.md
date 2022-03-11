<h1>Sorting</h1><
CS 3353 - Spring 2022 - Programming Assignment 02

<h2>Description</h2>
In this repo, I have implemented 6 sorting algorithms:

      ● insertion sort
      ● randomized quicksort
      ● merge sort
      ● shellsort
      ● introsort
      ● timsort
  
 <h2> Data Generation </h2>
After implementing the algorithms, I collected data on each of them with string and integer arrays. There were 5 categories of testing data sets:

      ● 100% sorted
      ● 60% sorted
      ● 100% randomized
      ● 80% randomized
      ● 60% randomized
      
Under each of these categories, I created 5 sizes of arrays for each. For the integers, I used sizes: 1k, 10k, 100k, 250k, 500k, 6000k. <br><br>
For the strings, I used smaller datasets of 10, 100, 250, 500, 750, 1000. The string datasets (available in rawstringdata.txt) were generated using a python script that utilized a random string generator, while the integer datasets were created during runtime with the use of for loops and the rand() function.
<br><br>

<h2> Analysis</h2>
The algos executed very quickly on the sorted arrays, except for the tim sort, which took 15 seconds on the 600k dataset for integers. As duplicates were introduced, the times decreased but the same trends were present just on a smaller scale. For example, for 60% sorted arrays, insertion sort and tim sort were the slowest by a factor of 20 or more. On the randomized arrays, insertion sort overtook tim sort to be the slowest algorithm, and I even noticed some outliers, where it would perform worse with a smaller dataset. For example, for the 60% randomized arrays (int), on 500k elements, my insertion sort took 114 secs and only 0.001 seconds on 600k. In terms, of integers vs strings, the strings performed better, as I did not notice the outliers / spikes in performance like I saw with integers for tim sort and insertion sort.<br><br>
As the datasets grew very large, it was easy to spot the O(n^2) algorithms due to the very long wait times, including quicksort and insertion sort. For strings, it was harder to notice this disparity, as I was using smaller datasets but you could see the slight trend forming with insertion sort. This matches the algorithms published upper bounds except for my introsort. It has a O(n log n) but my program would crash as the datasets became very large so I could not confirm. 
<br><br>
As for the winner, with my results, there was no clear winner, as shellsort and mergesort were a close tie. They each performed near instant sorts on all the datasets. This corroborates with their complexity being in  O(n log(n)). 
<br><br>
** note raw data and graphs are in the excel file
