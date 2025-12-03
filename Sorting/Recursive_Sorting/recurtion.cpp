
#include<iostream>
using namespace std;

int a=0;

// 0 1 1 2 3 5 8 13

int fib(int n){

    if (n==0) return 0;
    else if (n==1) return 1;
    else cout<<fib(n-1)+fib(n-2)<<" "<<endl; return fib(n-1)+fib(n-2);
    

}

int main(){
    cout<<fib(7)<<endl;

    return 0;
}

