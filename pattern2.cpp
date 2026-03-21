/* Pattern 2
* 
* *
* * *
*/
#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the no of lines for input"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        int j=1;
        while(j<=i){
            cout<<"*"<<"\t";
            j++;
        }
        cout<<"\n";
    }
}