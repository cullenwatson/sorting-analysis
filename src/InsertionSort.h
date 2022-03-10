#ifndef INC_22S_PA02_CULLENW_INSERTIONSORT_H
#define INC_22S_PA02_CULLENW_INSERTIONSORT_H


template<typename T>
class InsertionSort {
public:
    void sort(T a[], int size){
        insertionSort(a, 0, size - 1);
    }
    void insertionSort(T a[], int left, int right){
        T temp;
        int left2;

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

};


#endif //INC_22S_PA02_CULLENW_INSERTIONSORT_H
