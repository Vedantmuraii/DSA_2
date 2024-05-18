#include <iostream>

#define NIL -1
#define MAX 100

long int store[MAX];

using namespace std;


void execute(){
    for (int i=0;i<MAX;i++){
        store[i]=NIL;

    }
    int fib(int n){
        if(store[n]==Nil &&n<2){
            return n;
        }
        else {
            store[n]=fib(n-1)+fib(n-2);
        }
        return store[n];
    }
    
}