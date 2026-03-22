/* Program to print 
    * * * *
    * * *
    * *
    * 
*/
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no of lines for input"<<endl;
    cin>>n;
    for(i=n;i>=1;i--){
        int j=i;
        while(j>=1){
            cout<<"*"<<"\t";
            j--;
        }
        cout<<"\n";
    }
}