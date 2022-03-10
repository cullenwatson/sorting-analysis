
#ifndef INC_22S_PA02_CULLENW_SHELLSORT_H
#define INC_22S_PA02_CULLENW_SHELLSORT_H

template<typename T>
class ShellSort{
public:
    void sort(T a[], int size) {

        int i=0, j=0;

        // each iter have interval shrink by half
        for (int interval = size / 2; interval > 0; interval /= 2) {
            for (i = interval; i < size; i += 1) {
                T temp = a[i];

                for (j = i; j >= interval && a[j - interval] > temp; j -= interval)
                    a[j] = a[j - interval];

                a[j] = temp;
            }
        }
    }
};


#endif //INC_22S_PA02_CULLENW_SHELLSORT_H
