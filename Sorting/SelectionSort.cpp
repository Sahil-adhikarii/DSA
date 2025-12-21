#include<iostream>
using namespace std;

void swap(int x[], int a, int b)
{
    int temp = x[a];
    x[a] = x[b];
    x[b] = temp;
}

void SS(int x[],int end){
    for(int i=0;i<end;i++){
        for(int j=i+1;j<end;j++){
            if(x[i]>x[j]){
                swap(x,i,j);
            }
        }
    }
}

int main(){

int a[]={2,342,13,45,13,12,34};
int size=sizeof(a)/sizeof(a[0]);

SS(a,size);

for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}