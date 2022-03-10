#include "Sort.h"

#ifndef INC_22S_PA02_CULLENW_MERGESORT_H
#define INC_22S_PA02_CULLENW_MERGESORT_H


class MergeSort: public Sort {
public:
    void sort(int[], int, int);
private:
    void merge(int[], int, int, int);
};


#endif //INC_22S_PA02_CULLENW_MERGESORT_H
