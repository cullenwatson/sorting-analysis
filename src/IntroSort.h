/*
 * guidance found at https://www.techiedelight.com/introsort-algorithm/
 * https://www.programiz.com/dsa/heap-sort
 */

#include "InsertionSort.h"
#include "QuickSort.h"
#include <cmath>

#ifndef INC_22S_PA02_CULLENW_INTROSORT_H
#define INC_22S_PA02_CULLENW_INTROSORT_H

template<typename T>
class IntroSort {
public:
    void sort(T a[], int size){
        int depth = 2*log(size);
        introSort(a, 0, size - 1, depth);
    }
public:
    void introSort(T *a, int l, int r, int depth) {

        // use insertion sort for sizes smaller than 16
        if ((r - l) < 16)
            insertionSort.insertionSort(a, l, r);
            // use heapsort if depth is 0 (log2(n)*2)
        else if (depth == 0)
            heapSort(a, r+1);
            // if neither cond is satified, sort with quicksort
        else
            quickSort.quickSort(a, l, r);

    }


private:
    InsertionSort<T> insertionSort;
    QuickSort<T> quickSort;

    void heapify(T a[], int n, int i) {
        // use equations to find children
        int max = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;

        if (l < n && a[l] > a[max])
            max = l;
        if (r < n && a[r] > a[max])
            max = r;

        // swap elements and recurse
        if (max != i) {
            IntroSort::swap(a[i], a[max]);
            heapify(a, n, max);
        }
    }
    void heapSort(T a[], int n) {
        // first build the heap
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(a, n, i);

        // sort
        for (int i = n - 1; i >= 0; i--) {
            swap(a[0], a[i]);

            // heapify with root
            heapify(a, i, 0);
        }
    }
    static void swap(T& i, T& j){
        T temp = i;
        i = j;
        j = temp;
    }
};


#endif //INC_22S_PA02_CULLENW_INTROSORT_H
