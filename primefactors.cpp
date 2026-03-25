#include<iostream>
using namespace std;
class prime{
    int no,i,j,c;
    public:
    void input(){
        cin>>no;
    }
    void factors(){
        for(i=2;i<=no;i++){
            c=0;
            if(no%i==0){
             for(j=2;j<=i;j++){
                if(i%j==0)
                 c+=1;
            }
            if(c==1)
            cout<<i<<" ";
            }
            
        }
    }
};
int main(){
    prime p;
    cout<<"Enter the no for its prime factors"<<endl;
    p.input();
    cout<<"The prime factors are : ";
    p.factors();
}