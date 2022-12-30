#include<bits/stdc++.h>

using namespace std ;

// Function Declarations
void quicksort(int*,int,int);
int split(int*,int,int);

int main(){
    int array[] = {517,2008,31,31,0,-1} ;
    int size = sizeof(array) / sizeof(array[0]) ;
    quicksort(array,0,size - 1);

    for( int i = 0 ; i < size ; i ++ ){
        cout << array[i] << ' ' ;
    }
}

void quicksort(int array[],int start,int end){
    if(end <= start) return ;
    int pivot = split(array,start,end);
    quicksort(array,start,pivot - 1);
    quicksort(array,pivot + 1, end);
}

int split(int array[],int start,int end){
    int temp ;
    int i = start - 1;
    int j = start ;
    for ( ; j < end ; j++ ){
        if ( array[j] < array[end] ){
            i++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    i++;
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    return i ;
}