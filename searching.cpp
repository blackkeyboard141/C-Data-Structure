#include<iostream>

using namespace std;

bool binarysearch(int a[],int start,int end, int element){
if(start>end){
    return false;
}
int mid=(start+end)/2;

if(a[mid]==element)
    return true;
else if(element>a[mid])
    return binarysearch(a,mid+1,end,element);
else
    return binarysearch(a,start,mid-1,element);

}


int main(){
    int a[7]={2,3,4,5,8,19,21};

    bool result = binarysearch(a,0,6,2);
    cout<<result;

}
