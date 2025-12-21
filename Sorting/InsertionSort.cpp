#include<iostream>
using namespace std;

void swap(int x[],int a,int b){
    
    int temp = x[a];
    x[a] = x[b];
    x[b] = temp;

}

void IS(int x[],int end){

    for(int i=1;i<end;i++){ // starting with 1 index because we consider one element a preshorted element (avoid one unnecessary iteration)
        int j=i;
      while(j>0 && x[j] < x[j-1]){
        swap(x,j,j-1);
        j--;
      }
    }
}


int main(){
int a[]={29,10,14,37,14};
int size = sizeof(a)/sizeof(a[0]);

IS(a,size);

for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}

    return 0;
}