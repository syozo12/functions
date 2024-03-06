#include<iostream>
using namespace std;
int sqare(int i){
    return i*i;

}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"sqare of "<<i <<" is "<<sqare(i);
        cout<<endl;
    }
    return 0;

    
}