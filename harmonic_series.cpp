// harmonic series=1+1/2+1/3+....n
#include<iostream>
using namespace std;
int main(){
    int n;
    float term,h=0;
    cout<<"Enter the no of terms"<<endl;
    cin>>n;
    cout<<" THE HARMONIC SERIES IS AS FOLLOWS : "<<endl;
    for(int i=1;i<=n;i++){
        term=(1.0f/i);
        h+=term; 
        cout<<term<<" ";
    }
    cout<<"SUM OF THE SERIES OF "<<n<<" TERMS IS : "<<h;
}