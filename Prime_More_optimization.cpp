#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    //hum phle sde assume kr lete h ki number prime h
    for( int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ans=false;
        }
    }
    if(ans==true){
        cout<<"Prime"<<endl;
    } else {
        cout<<"Not Prime"<<endl;
    }
}
 