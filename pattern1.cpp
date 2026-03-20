/* CPP Program to print this
1
2 2
3 3 3
till n specified time
*/
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no of lines"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        int j=1;
        while(j<=i){
            cout<<i<<"\t";
            j++;
        }
        cout<<"\n";
    }
}