#include <iostream>
using namespace std;
int main(){
    int n,fact=1;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
     cout<<fact;
     return 0;
}