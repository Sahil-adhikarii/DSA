#include<iostream>
using namespace std;


void swap(int x[],int a,int b){
    int temp = x[a];
    x[a]=x[b];
    x[b]=temp;
}

    void quickSort(int x[],int l,int h){
        if(l>=h){
            return;
        }
        else
        {

            int pivot = l;
            int lowerEnd = pivot + 1;
            int i= pivot+1;

            for(i;i<=h;i++){
                if(x[i]<x[pivot]){
                swap(x,i,lowerEnd);
                lowerEnd++;
                }
            }
            swap(x,lowerEnd-1,pivot);

            quickSort(x,pivot,lowerEnd-2);
            quickSort(x,lowerEnd,h);
        }
}

int main(){

int n,l,h;

cout<<"Enter N: ";
    cin>>n;
    int arr[n];

    cout<<"\n\n\n"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter any number: ";
        cin>>arr[i];
        cout<<endl;
    }
    cout<<"\n\n\n"<<endl;

    l = 0;
    h = (sizeof(arr)/sizeof(arr[0])-1);

quickSort(arr,l,h);

for(int i =0;i<=h;i++){
    cout<<arr[i]<<endl;
}

    return 0;
}