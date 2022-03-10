#include "InsertionSort.h"
#include <iostream>
using namespace std;

void InsertionSort::sort(int a[], int s){
    int temp, left, left2;

    for(left=0; left<s - 1; left++){
        left2 = left+1;
        temp = a[left2];

        while(left2>0 && temp < a[left2 - 1]){
            a[left2] = a[left2-1];
            left2--;
        }

        a[left2] = temp;
    }
}

