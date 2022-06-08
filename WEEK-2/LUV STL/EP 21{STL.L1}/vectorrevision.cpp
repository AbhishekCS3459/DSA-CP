#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int>v){

cout<<"size:"<<v.size()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
v.push_back(4);
cout<<endl;
}

int main(){
vector<int>v;
v.push_back(1);
v.push_back(2);
printvector(v);
vector<int>&v2=v;
printvector(v2);
printvector(v2);



return 0;
}
