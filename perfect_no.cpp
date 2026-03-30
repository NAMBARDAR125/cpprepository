#include<iostream>
using namespace std;
class perfect{
    int n;
    public:

     void print(){
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=1;j<i;j++){
             if(i%j==0){
              sum+=j;
            }
            }
            if(sum==i){
            cout<<i<<" is a perfect no"<<endl;
            }
        }
    }
    void input(){
        cout<<"Enter the range"<<endl;
        cin>>n;
    }
};
int main(){
    int n;
    perfect p;
    p.input();
    p.print();
    return 0;
}