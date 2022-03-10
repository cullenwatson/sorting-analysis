#include <iostream>
#include <cmath>
#include "Driver.h"
#include <string>
using namespace std;

void sortArrays();
void outputArray(string a[], int size);
int main(int argc, char** argv) {

    sortArrays();

    return 0;
}

void sortArrays(){
    const int SIZE = 5;
    string array[SIZE] = {"z", "y", "x", "w","v"};

    cout << "UNSORTED\n";
    outputArray(array, SIZE);

    Driver<string> driver;
    driver.timSort(array, SIZE);

    // sorted
    cout << "\nSORTED\n";
    outputArray(array, SIZE);
}
void outputArray(string a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
}


