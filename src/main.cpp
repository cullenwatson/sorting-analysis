#include <iostream>
#include "Algo.h"
using namespace std;

int main(int argc, char** argv) {

    int* unsorted = new int[3];

    for(int i=0, j=3; i<3; i++, j--)
        unsorted[i] = j;

    cout << "UNSORTED\n";
    for(int i=0; i<3; i++)
        cout << unsorted[i] << endl;

    Algo::quickSort(unsorted, 0, 2);

    // sorted
    cout << "\nSORTED\n";
    for(int i=0; i<3; i++)
        cout << unsorted[i] << endl;

    return 0;
}


