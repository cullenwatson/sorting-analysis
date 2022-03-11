#include <iostream>
#include <cmath>
#include "Driver.h"
#include <string>
#include <chrono>
using namespace std;
using namespace chrono;


void outputArray(string a[], int size);
void outputArray(int a[], int size);
double getTime(time_point<high_resolution_clock> start, time_point<high_resolution_clock> end);



int main() {

    //Driver<int> driver;
   // driver.sort60PercentRandomIntArrays();

//
    Driver<string> driver2;
    driver2.sortArraysString();

    return 0;
}


void outputArray(string a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
}
void outputArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }
}


