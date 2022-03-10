#include "MergeSort.h"
void MergeSort::sort(int a[], int l, int r){
    if(l < r){
        int m = (l + r)/2;
        sort(a,l,m);
        sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
void MergeSort::merge(int a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;

    int lb[n1], rb[n2];

    int i = 0, j = 0;

    // copy values into buffer arrays
    while (i < n1){
        lb[i] = a[i];
        i++;
    }
    while (j < n2){
        rb[j] = a[j + m+ 1];
        j++;
    }
    i = 0;
    j = 0;
    int k = l;


    // do the conquer part (put back into ori array)
    while(i < n1 && j < n2){
        if(lb[i]<=rb[i]){
            a[k] = lb[i];
            i++;
        }else{
            a[k] = rb[j];
            j++;
        }
        k++;
    }


    // copy leftover values into array
    while(i < n1){
        a[k] = lb[i];
        i++;
        k++;
    }
    while(j < n2){
        a[k] = rb[j];
        j++;
        k++;
    }

}
