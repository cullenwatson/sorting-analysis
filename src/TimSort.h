/*
 * guidance found at https://www.javatpoint.com/tim-sort
 */
#include "InsertionSort.h"
#include "MergeSort.h"

#ifndef INC_22S_PA02_CULLENW_TIMSORT_H
#define INC_22S_PA02_CULLENW_TIMSORT_H

template<typename T>
class TimSort{
public:
    void sort(T a[], int n) {

        // call insertion sort with run size 32
        for (int i = 0; i < n; i += RUN)

            insertionSort.insertionSort(a, i, min((i + RUN - 1), (n - 1)));

        // then merge
        for (int size = RUN; size < n; size *=2) {
            for (int l = 0; l < n; l += 2 * size) {

                // find new index to perform mergesort on
                int mid = l + size - 1;
                int end = min((l + 2 * size - 1), (n - 1));

                // finally merge the subarray
                if (mid < end)
                    mergeSort.mergeSort(a, l, end);
            }
        }
    }

private:
    static const int RUN = 32;
     int min(int a, int b) {
        if (a < b)
            return a;
        else
            return b;
    }

    InsertionSort<T> insertionSort;
    MergeSort<T> mergeSort;
};


#endif //INC_22S_PA02_CULLENW_TIMSORT_H
