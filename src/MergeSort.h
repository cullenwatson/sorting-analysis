

#ifndef INC_22S_PA02_CULLENW_MERGESORT_H
#define INC_22S_PA02_CULLENW_MERGESORT_H

template<class T>
class MergeSort{
public:
    void sort(T a[], int size){
        mergeSort(a, 0, size - 1);
    }
    void mergeSort(T a[], int l, int r){
        if(l < r){
            int m = (l + r)/2;
            mergeSort(a,l,m);
            mergeSort(a,m+1,r);
            merge(a,l,m,r);
        }
    }
private:

    void merge(T a[], int l, int m, int r){
        int n1 = m - l + 1;
        int n2 = r - m;

        T lb[n1], rb[n2];

        int i = 0, j = 0;

        // copy values into buffer arrays
        while (i < n1){
            lb[i] = a[l+i];
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

};


#endif //INC_22S_PA02_CULLENW_MERGESORT_H
