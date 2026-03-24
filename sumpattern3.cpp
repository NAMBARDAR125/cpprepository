/*
 CPP Program to find sum of 1/1!+ 2/2!+ 3/3!.....n th term
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    float s=0,f,term;
    cout<<"Enter the no of terms for the sum"<<endl;
    cin>>n;
    cout<<"Sum is:"<<endl;
    for(int i=1;i<=n;i++){
        f=1;
        for(int j=1;j<=i;j++){
            f=f*j;
            term=(i/f);
        }
        s+=term;
    }
    cout<<s;
}