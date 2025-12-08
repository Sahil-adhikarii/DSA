#include<iostream>
using namespace std;

int x[]={1,6,9,13,20};
int y[]={2,8,10,19,30};
int i=0,j=0,k=0;

    int sizeX = sizeof(x)/sizeof(x[0]);
    int sizeY = sizeof(y)/sizeof(y[0]);
    int totalSize = sizeX+sizeY;

int main(){
    // int a[3] = {4,5,6};
   int res[totalSize];


    while(i<sizeX && j<sizeY){
        if(x[i]<y[j]){
            res[k] = x[i];
            i++;
        }
        else{
            res[k] = y[j];
            j++;
        }
        k++;
    }
    
    while(i<sizeX){
        res[k] = x[i];
        i++;
        k++;
        }
    while(j<sizeY){
      res[k] = y[j];
      j++;
      k++;
    }

        for(i=0;i<totalSize;i++){
            cout<<res[i]<<endl;
        }

    return 0;
}