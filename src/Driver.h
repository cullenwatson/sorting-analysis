#include "InsertionSort.h"
#include "QuickSort.h"
#include "MergeSort.h"
#include "ShellSort.h"
#include "IntroSort.h"
#include "TimSort.h"

#ifndef INC_22S_PA02_CULLENW_DRIVER_H
#define INC_22S_PA02_CULLENW_DRIVER_H
template<typename T>
class Driver{
public:
    void insertionSort(T a[], int size){
        insertion_sort.sort(a, size);
    }
    void quickSort(T a[], int size){
        quick_sort.sort(a, size);
    }
    void mergeSort(T a[], int size){
        merge_sort.sort(a, size);
    }
    void shellSort(T a[], int size){
        shell_sort.sort(a, size);
    }
    void introSort(T a[], int size){
        intro_sort.sort(a, size);
    }
    void timSort(T a[], int size){
        tim_sort.sort(a, size);
    }
private:
    InsertionSort<T> insertion_sort;
    QuickSort<T> quick_sort;
    MergeSort<T> merge_sort;
    ShellSort<T> shell_sort;
    IntroSort<T> intro_sort;
    TimSort<T> tim_sort;
};
#endif //INC_22S_PA02_CULLENW_DRIVER_H
