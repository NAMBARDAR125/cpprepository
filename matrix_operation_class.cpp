#include<iostream>
using namespace std;
class matrix{
    int i,j,k,r1,c1,r2,c2,a[10][10],b[10][10],add[10][10],mul[10][10];
    bool add_possible,mul_possible;
    public:
    void input(){
        add_possible=false;
        mul_possible=false;
        cout<<"Enter the no of rows and columns for 1st matrix"<<endl;
        cin>>r1>>c1;
        cout<<"Enter the no of rows and columns for 2nd matrix"<<endl;
        cin>>r2>>c2;
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                cout<<"Enter the value of element "<<"a"<<i+1<<j+1<<endl;
                cin>>a[i][j];
            }
        }
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++){
                cout<<"Enter the value of element "<<"b"<<i+1<<j+1<<endl;
                cin>>b[i][j];
            }
        }
    }
    void add_matrix(){
        if(r1==r2&&c1==c2){
        add_possible=true;
        for(i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                add[i][j]=a[i][j]+b[i][j];
            }
        }
        }
        else{
            add_possible=false;
            cout<<"ADDITION NOT POSSIBLE"<<endl;
        }
    }
    void multiplication(){
        if(c1==r2){
            mul_possible=true;
            for(i=0;i<r1;i++){
                for(j=0;j<c2;j++){
                    mul[i][j]=0;
                    for(k=0;k<c1;k++)
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        else{
            mul_possible=false;
            cout<<"MULTIPLICATION ERROR"<<endl;
        }
    }
    void display(){
        if(add_possible){
            cout<<"The addition of matrices is:"<<endl;
            for(i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    cout<<add[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
        if(mul_possible){
            cout<<"Multiplication of the matrix is:"<<endl;
            for(i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    cout<<mul[i][j]<<"\t";
                }
                cout<<"\n";
            }
        }
    }
};
int main(){
    matrix obj;
    obj.input();
    obj.add_matrix();
    obj.multiplication();
    obj.display();
}