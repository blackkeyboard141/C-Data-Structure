#include<iostream>

using namespace std;

void bubblesort(int a[], int size){

int i=0,j=0;

bool swaptrue =true;

for(i=0;i<=size-1&&swaptrue;i++){
        swaptrue = false;
    for(j=0;j<=size-i-1;j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            swaptrue = true;
        }
    }
}

}

void insertionsort(int a[],int size){

for(int i=1;i<=size;i++){
    int value=a[i];
    int hole=i;

    while(hole>0&&a[hole-1]>value){
        a[hole]=a[hole-1];
        hole=hole-1;
    }

    a[hole]=value;
}

}

//start of quicksort

int partition(int a[] , int start, int end){
    int pivot = a[end];
    int pindex = start;
    for(int i=start; i<end;i++){
        if(a[i]<pivot){

            int temp = a[i];
            a[i]=a[pindex];
            a[pindex]=temp;
            pindex++;
        }
    }

    int temp = a[pindex];
            a[pindex]=a[end];
            a[end]=temp;
    return pindex;


}

void quicksort(int a[],int start , int end){

if(start<end){
    int pindex=partition(a, start, end);
    quicksort(a,start,pindex-1);
    quicksort(a,pindex+1,end);
}

}

//end of quicksort



int main(){
        int b[5]={2,4,5,1,1};

    //bubblesort(b,5);

    //insertionsort(b,5);

    quicksort(b,0,5);

    for(int i=0;i<5;i++){
        cout<<" "<<b[i]<<endl;
    }


}
