#include<iostream>
using namespace std;
class sum{
    int n,i,j,s=0;
    public:
    void input(){
        cin>>n;
    }
    void showdata(){
        cout<<"THE SERIES IS : "<<endl;
        i=1;
        j=1;
        while(i<=n){
            if(i==1){
                cout<<i;
                s++;
            }
            else if(i%2==0){
                cout<<" - "<<j;
                s-=j;
            }
            else{
                cout<<" + "<<j;
                s+=j;
            }
            i++;
            j+=2;
        }
        cout<<"\nITS SUM IS : "<<s;
    }
};
int main(){
    sum su;
    cout<<"Enter the no of the terms for series"<<endl;
    su.input();
    su.showdata();
}