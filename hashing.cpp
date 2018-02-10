#include<iostream>

using namespace std;

int hash(char str[],int tablesize){

int hashval=0;
int i=0;
while(str[i]!='\0'){
    hashval= 37*hashval+(int)str[i++];
}

hashval=hashval%tablesize;
if(hashval<0)
    hashval= hashval+tablesize;

return hashval;

}

int main(){
    char s[5]= {'i', 'd', 'z', 'q', 'r' };
    int x= hash(s,10);

    cout<<x;
}
