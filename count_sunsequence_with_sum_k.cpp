#include <iostream>
#include <vector>

using namespace std;
int printS(int ind,int s,int sum,int arr[],int n){
    if (ind==n){
        if(s==sum) return 1;          
        else{
            return 0;
            }
    }   
    //take or print particular index
    
    s=s+arr[ind];
    int l= printS(ind+1,s,sum,arr,n);
    s=s-arr[ind];
    
    //not pick condition
    int r= printS(ind+1,s,sum,arr,n);
    return l+r;
}
int main(){
    int arr[]={1,2,3};
    int n=3;
    int sum=3;
    
    cout<<printS(0,0,sum,arr,n);
}