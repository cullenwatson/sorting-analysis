#include "QuickSort.h"
#include <iostream>
using namespace std;
int swap(int& i, int& j);

void QuickSort::sort(int list[], int left, int right){
    if(left < right){
        int p = partition(list, left, right);
        sort(list, left, p - 1);
        sort(list, p+1, right);
    }
}
int QuickSort::partition(int list[], int left, int right){
    int i = left - 1;
    int j = left;

    // find random pivot
    srand(time(NULL));
    int randPivot = left + rand()%(right-left+1);

    // swap random pivot with rightmost element
    int temp = list[randPivot];
    list[randPivot] = list[right];
    list[right] = temp;

    while(j < right){
        if(list[j] < list[right]){
            i++;
            swap(list[i], list[j]);
        }
        j++;
    }
    swap(list[i+1], list[right]);
    return i + 1;

}
int swap(int& i, int& j){
    int temp = i;
    i = j;
    j = temp;
}