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

    void ms(int a[],int start,int end){

        if(start<end){
            int mid = (start+end)/2;
            ms(a,start,mid);
            ms(a,mid+1,end);
            merge(a,start,mid,end);
            
        }

    }




int main(){

    int x[]={46,3,5,8,1,34,86,90,23,12,4};

    int start = 0;
    int end = (sizeof(x)/sizeof(x[0]))-1;

    ms(x,start,end);
    
    for(int i=0;i<=end;i++){
            cout<<x[i]<<endl;
        }



    
        

    return 0;
}



