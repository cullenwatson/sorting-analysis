#include "Algo.h"

int swap(int& i, int& j);

void Algo::quickSort(int list[], int left, int right){
    if(left < right){
        int p = partition(list, left, right);
        quickSort(list, left, p - 1);
        quickSort(list, p+1, right);
    }
}
int Algo::partition(int list[], int left, int right){
    int i = left - 1;
    int j = left;


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