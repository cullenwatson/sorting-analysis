/*
 * guidance found at https://www.programiz.com/dsa/shell-sort
 */

#include "ShellSort.h"

void ShellSort::sort(int a[], int size) {

    int i=0, j=0;

    // each iter have interval shrink by half
    for (int interval = size / 2; interval > 0; interval /= 2) {
        for (i = interval; i < size; i += 1) {
            int temp = a[i];

            for (j = i; j >= interval && a[j - interval] > temp; j -= interval)
                a[j] = a[j - interval];

            a[j] = temp;
        }
    }
}