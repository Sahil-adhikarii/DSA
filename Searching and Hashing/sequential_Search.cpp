#include<iostream>
using namespace std;


int search(int x[],int size,int n){

    

    for(int i =0;i<size;i++){
        if(x[i]==n){
            return i;
        }
    }
    return -1;

}

int main(){
int arr[]={3,4,2,6,7,3,8,9};
int size = sizeof(arr)/sizeof(arr[0]);

cout<<search(arr,size,8)<<endl;



}