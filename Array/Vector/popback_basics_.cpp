#include<iostream>
#include<vector>
using namespace std;
int main(){
    //initialization
    vector<int> a; //declaration of vector
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
cout<<a.size()<<endl; //size of the vector
cout<<a.capacity()<<endl; //capacity of the vector
a.pop_back(); //deletion
for (int i=0; i<a.size(); i++){
    cout<<a[i]<<" ";
}
cout<<endl;
//first element
cout<<a.front()<<endl;
//last element
cout<<a.back()<<endl;

return 0;

}