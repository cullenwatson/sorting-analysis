#ifndef INC_22S_PA02_CULLENW_QUICKSORT_H
#define INC_22S_PA02_CULLENW_QUICKSORT_H
#include "Sort.h"

class QuickSort: public Sort {
public:
    void sort(int[], int, int);
private:
    int static partition(int[], int, int);
};


#endif
