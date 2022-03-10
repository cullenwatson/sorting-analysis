#include <iostream>
#include "Sort.h"
#include "QuickSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
using namespace std;

void sortArrays();
int main(int argc, char** argv) {

    sortArrays();

    return 0;
}

void sortArrays(){
    const int SIZE = 10;
    int* unsorted = new int[SIZE];

    for(int i=0, j=SIZE; i<SIZE; i++, j--)
        unsorted[i] = j;

    cout << "UNSORTED\n";
    for(int i=0; i<SIZE; i++)
        cout << unsorted[i] << endl;

    //Sort* driver = new QuickSort();
    //driver->sort(unsorted, 0, SIZE-1);

    //Sort* driver = new InsertionSort();
    ///driver->sort(unsorted, SIZE);

    Sort* driver = new MergeSort();
    driver->sort(unsorted, 0, SIZE - 1);



    // sorted
    cout << "\nSORTED\n";
    for(int i=0; i<SIZE; i++)
        cout << unsorted[i] << endl;
}


