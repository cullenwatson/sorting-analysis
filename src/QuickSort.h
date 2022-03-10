#ifndef INC_22S_PA02_CULLENW_QUICKSORT_H
#define INC_22S_PA02_CULLENW_QUICKSORT_H

template<class T>
class QuickSort {
public:
    void sort(T list[], int size){
        quickSort(list,0,size - 1);
    }
    void quickSort(T list[], int left, int right){
        if(left < right){
            int p = partition(list, left, right);
            quickSort(list, left, p - 1);
            quickSort(list, p+1, right);
        }
    }
private:

    int partition(T list[], int left, int right){
        int i = left - 1;
        int j = left;

        // find random pivot
        srand(time(NULL));
        int randPivot = left + rand()%(right-left+1);

        // swap random pivot with rightmost element
        T temp = list[randPivot];
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
    void swap(T& i, T& j){
        T temp = i;
        i = j;
        j = temp;
    }
};


#endif
