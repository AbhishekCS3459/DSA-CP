#include<bits/stdc++.h>
using namespace std;
void  printvector(vector<int> v){
    cout<<"size of: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
//     int arr[10]; // array of size 10
// vector<int> v; // vector likewise array with n size with variable size
// // vector<double> //d; vector of double
// int size;
// cin>>size;
// for (int i = 0; i < size; ++i)
// {
//     int x;
//     cin>>x;
//     v.push_back(x);   // this function insert the value of x at last and TIME COMPLEXITY IS: O(1)

// }
vector<int> v2(10,8);
v2.push_back(5);
cout<<"v2:"<<endl;  //// here implmenting 5 implies that its size can be increased
printvector(v2);
v2.pop_back();  // this function removes the values from end side




vector<int>vcopy=v2;  // here the copying is a O(n)
vcopy.push_back(5);
cout<<"v2:"<<endl;
printvector(v2);
cout<<"vcopy:"<<endl;
printvector(vcopy);














return 0;
}
