#include <iostream>
#include <cmath>
#include "Sort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "ShellSort.h"
#include "IntroSort.h"
#include "TimSort.h"
using namespace std;

void sortArrays(Sort*);
int main(int argc, char** argv) {


    sortArrays(new TimSort());

    return 0;
}

void sortArrays(Sort* driver){
    const int SIZE = 20;
    int* unsorted = new int[SIZE];

    for(int i=0, j=SIZE; i<SIZE; i++, j--)
        unsorted[i] = j;

    cout << "UNSORTED\n";
    for(int i=0; i<SIZE; i++)
        cout << unsorted[i] << endl;

    // (QUICK/MERGE) driver->sort(unsorted, 0, SIZE-1);
    // (INSERTION/SHELL) driver->sort(unsorted, SIZE);
    //driver->sort(unsorted, 0, SIZE - 1);


   // int depth = log(SIZE) * 2;
//    IntroSort introSort;
//    introSort.sort(unsorted,0,SIZE-1,0);

    // tim sort
    driver->sort(unsorted, SIZE);


    // sorted
    cout << "\nSORTED\n";
    for(int i=0; i<SIZE; i++)
        cout << unsorted[i] << endl;
}


