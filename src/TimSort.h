#include "InsertionSort.h"
#include "Sort.h"
#include "MergeSort.h"

#ifndef INC_22S_PA02_CULLENW_TIMSORT_H
#define INC_22S_PA02_CULLENW_TIMSORT_H


class TimSort: public Sort {
public:
    void sort(int[], int);
    static void merge(int[], int, int, int);

private:
    static const int RUN = 32;
    static int min(int, int);

    InsertionSort insertionSort;
    MergeSort mergeSort;
};


#endif //INC_22S_PA02_CULLENW_TIMSORT_H
