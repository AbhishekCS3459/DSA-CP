// IN ARRAY OF  VECTOR THE NOW OF ROWS ARE FIXED AND IT WAS AN ARRAY,
// IN VECTOR OF VECTOR NEIHER ROWS NOR COLUMN ARE FIXED AS NOW BOTH ROW AND COLUMN ARE ITSELF A VECTOR
#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int> &x){
    cout<<"Size of x:"<<x.size()<<endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }

 cout<<endl;   
}
int main(){
    int N;
    cout<<"Limit of Upper vector:"<<endl;
    cin>>N;
vector<vector<int>>v;
// Taking input in vector of vectors 
for (int i = 0; i < N; i++)  // loop  to take N vectors as input
{
    int n;
    cin>>n;
    vector<int>temp; 
    for (int j = 0; j < n; j++)
    {
        int x;
        cin>>x;
        temp.push_back(x);    // ith element of the vector is empty hence we will insert temp inside v
    }
    v.push_back(temp); // Passing vector temp to vector v
    
}
for (int i = 0; i < v.size(); i++)
{
    printvector(v[i]);           // v[i] means ith vector with size=0; ex-v[0]- 0th vector with size=0;
}
cout<<"THe 0th & 1th element"<<v[0][1];  // means 0th vector 1st element

return 0;
}
