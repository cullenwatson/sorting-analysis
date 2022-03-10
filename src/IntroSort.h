#include "Sort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

#ifndef INC_22S_PA02_CULLENW_INTROSORT_H
#define INC_22S_PA02_CULLENW_INTROSORT_H


class IntroSort {
public:
    void sort(int [], int, int, int);


private:
    InsertionSort insertionSort;
    QuickSort quickSort;

    void heapify(int[], int, int);
    void heapSort(int [], int);
    static void swap(int&, int&);
};


#endif //INC_22S_PA02_CULLENW_INTROSORT_H
