#include<iostream>
using namespace std;
class range{
    int n,max,i,min,a[30];
    public:
    void getdata(){
        cout<<"Enter the no of elements"<<endl;
        cin>>n;
        for(i=0;i<n;i++){
            cout<<"Enter the element "<<i+1<<endl;
            cin>>a[i];
        }
    }
    void calculate(){
        max=a[0];
        min=a[0];
        for(i=0;i<n;i++){
            if(max<a[i]){
                max=a[i];
            }
            else if(min>a[i]){
                min=a[i];
            }
        }
        
    }
    void showdata(){
        cout<<max-min;
    }
};
int main(){
    range r;
    r.getdata();
    r.calculate();
    cout<<"Range is : ";
    r.showdata();

}