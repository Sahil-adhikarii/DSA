#include<iostream>
using namespace std;

    void merge(int x[],int start,int mid,int end){


        int i=start;
        int j=mid+1;
        int k=0;
        int temp[(end-start)+1];


        while(i<=mid && j<=end){
        if(x[i]<x[j]){
            temp[k] = x[i];
            i++;
        }
        else{
            temp[k] = x[j];
            j++;
        }
        k++;
    }
    
    while(i<=mid){
        temp[k] = x[i];
        i++;
        k++;
        }
    while(j<=end){
      temp[k] = x[j];
      j++;
      k++;
    }

    for(i=start;i<=end;i++){
            x[i] = temp[i-start];
        }

    }




int main(){

    int x[]={1,6,9,10,5,7,8};

    int start = 0;
    int mid = 3;
    int end = 6;

    merge(x,start,mid,end);
    
    for(int i=0;i<=end;i++){
            cout<<x[i]<<endl;
        }
        

    return 0;
}