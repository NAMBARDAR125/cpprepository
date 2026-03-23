/*  Program to print
        *
       **
      ***   
*/
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no of lines for output"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>=n+1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<"\n";
    }
}