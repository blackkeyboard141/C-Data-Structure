#include<iostream>

using namespace std;

void insert(int x){
if(isFull)
    return;
int hole=++currentsize;

for(;hole>1&&x<array[hole/2];hole/=2){
    array[hole]=array[hole/2];
}

array[hole]=x;
}

int deletemin(){
    int temp = array[1];
    array[1]=array[currentsize--];
    percolatedown(1);
    return temp;
}

void percolatedown(int hole){
int child;
int temp=array[hole]
for(;hole*2<=currentsize;hole=child){
    child=hole*2;
    if(child!=currentsize && array[child+1]<array[child])
        child++;
    if(array[child]<temp)
        array[hole]=array[child];
    else break;
}
array[hole]=temp;

}

void buildheap(){
int i;
for(i=currentsize/2;i>=0;i--){
    percolatedown(i);
}

}

