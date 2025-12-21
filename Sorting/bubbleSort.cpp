#include <iostream>
using namespace std;

void swap(int x[], int a, int b)
{
    int temp = x[a];
    x[a] = x[b];
    x[b] = temp;
}

void BS(int x[], int end)
{

    for (int k = 0,tempEnd = end; k < end; k++)
    {
        for(int i=0,j=i+1;j<tempEnd;i++,j++){
                if (x[i] > x[j])
            {
                swap(x, i, j);
            }
        }
        tempEnd--;
    }
}

int main()
{   
    int arr[]={9,8,7,6,5,4,7,85,0,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    BS(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}