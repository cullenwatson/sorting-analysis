/*
 * guidance found at https://www.javatpoint.com/tim-sort
 */
#include "TimSort.h"

// find min of two numbers
int TimSort::min(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

void TimSort::sort(int a[], int n) {

    // call insertion sort with run size 32
    for (int i = 0; i < n; i += RUN)

        insertionSort.sort(a, i, min((i + RUN - 1), (n - 1)));

    // then merge
    for (int size = RUN; size < n; size *=2) {
        for (int l = 0; l < n; l += 2 * size) {

            // find new index to perform mergesort on
            int mid = l + size - 1;
            int end = min((l + 2 * size - 1), (n - 1));

            // finally merge the subarray
            if (mid < end)
                mergeSort.sort(a, l, end);
        }
    }
}