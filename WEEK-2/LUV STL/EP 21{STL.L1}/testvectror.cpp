#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
//     int n;
//     cin>>n;
// vector<int> v;
// // take input in a vector
// for (int i = 0; i <n; i++)
// {
//     int x;
//     cin>>x;
//     v.push_back(x);
//     printvector(v); // to check the dynamic nature of the vector
// }

vector<int> c(10,3);  // FILLING WITH 3 OTHER WISE IF NOT DECLARED EMPTY
c.push_back(7);   // here implmenting 7 implies that its size can be increased
printvector(c);

return 0;
}
