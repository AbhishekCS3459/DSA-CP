//VECTORS OF PAIRS
// A VECTOR OF PAIRS, CURRENT SIZE: 3
/*  4 5 
    6 7 
    8 9
*/
#include<bits/stdc++.h>
using namespace std;
void printvectorofpair(vector<pair<int,int>> v){     // Making function for vector of pairs
    cout<<"size of vector v:"<<v.size()<<endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
}
int main(){
// vector<pair<int,int>>v={{2,3},{4,5},{6,7},{8,9}};
// printvectorofpair(v);

vector<pair<int,int>> m;
int size;
cin>>size;
// Taking input in vector of pairs using for loop
cout<<"Enter the elements of the vector pair:"<<endl;
for (int i = 0; i < size; i++)
{
    int x,y;
    cin>>x>>y;
    m.push_back({x,y});
}
printvectorofpair(m);
return 0;
}
