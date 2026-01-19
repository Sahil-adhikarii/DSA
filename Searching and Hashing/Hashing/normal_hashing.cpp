// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class hashing{
    public:

    hashing(int arr[],int size){
        for(int i=0;i<size;i++){
            arr[i] = -1;
        }
    }

        void insert(int arr[],int n){
            int originKey = n%10;
            int tempKey=originKey;
            do{
                if(arr[tempKey] == -1){
            arr[tempKey] = n;
            cout<<"Inserted "<<n<<" at "<<tempKey<<endl;
            return;
            }
            else{
                tempKey=(tempKey+1)%10;
                

            }
            }while(tempKey!=originKey);

            cout<<"Full!"<<endl;
            
        }

        void print(int arr[]){
            cout<<"\n\nPrinting.......\n\n"<<endl;
            cout<<"\tKey\t\tValue"<<endl;
            for(int i=0;i<10;i++){
                cout<<"\t"<<i<<"\t\t"<<arr[i]<<endl;
            }
        }
};


int main() {
    // Write C++ code here
    int a[10],size = sizeof(a)/sizeof(a[0]);
    hashing h(a,size);
    h.insert(a,21);
    h.insert(a,22);
    h.insert(a,23);
    h.insert(a,24);
    h.insert(a,25);
    h.insert(a,26);
    h.insert(a,27);
    h.insert(a,28);
    h.insert(a,29);
    h.insert(a,30);
    h.insert(a,31);
    h.insert(a,32);
    h.insert(a,33);
    h.print(a);
    

    return 0;
}