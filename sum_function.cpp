#include<iostream>
#include<cmath>
using namespace std;
// sum=1+(1/2)^2+(1/3)^3+....
int main(){
    int n;
    float sum=0,term;
    cout<<"Enter the no of terms for function value"<<endl;
    cin>>n;
    cout<<"Sum of"<<"\t";
    for(int i=1;i<=n;i++){
        cout<<"(1/"<<i<<")^"<<i<<" + ";
        term=pow(1.0/i,i);
        sum+=term;
    }
    cout<<"is : "<<sum<<endl;
}