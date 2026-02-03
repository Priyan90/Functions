#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a=INT_MAX;
    //positive infinity
    int b=INT_MIN;
    //negative infinity
    int n;
    cin>>n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
        cout<<sum<<endl;
    
    return 0;
}