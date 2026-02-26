#include<iostream>
using namespace std;
int main(){
    int array[ ][4] = {
        {1,2,3,4},
     {5,6,7,8},
     {9,10,11,12}
    };
    int g=sizeof(array);
    int a[2][3]={1,2,3,4,5,6};
    int m,n;
    cin>>m>>n;
    int b[m][n]={};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
        cout<<endl;

    }
    return 0;
}