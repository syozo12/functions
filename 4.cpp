#include<iostream>
using namespace std;
int sqareofcount(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<"number of digits are"<<count<<endl;
    cout<<"sqare of number is"<<count*count;
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    sqareofcount(n);
}