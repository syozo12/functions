#include<iostream>
using namespace std;
int print(int a,int b){
    for(int i=a;i<b;i++)
    if(i%2!=0) cout<<i<<endl;
    return 0;
}
            
int main(){
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    print(min(a,b),max(a,b));
    return 0;


}