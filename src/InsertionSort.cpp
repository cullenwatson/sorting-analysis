#include "InsertionSort.h"
#include <iostream>
using namespace std;

void InsertionSort::sort(int a[], int left, int right){
    int temp, left2;

    // iterate over whole array
    for(left=0; left<right; left++){
        left2 = left+1;
        temp = a[left2];

        // iterate over remaining portion of array for each element
        while(left2>0 && temp < a[left2 - 1]){
            a[left2] = a[left2-1];
            left2--;
        }

        a[left2] = temp;
    }
}

