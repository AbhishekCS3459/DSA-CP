#include<bits/stdc++.h>
using namespace std;
int main(){
pair<int,string> p;
//Method 1
p=make_pair(2,"abs"); // taking input in a pair
cout<<p.first<<endl<<p.second<<endl; //printing a pair
// Method  2
p={2,"abs"};// taking input
cout<<p.first<<endl<<p.second<<endl;


pair<int,string>p1=p; // making the copy of the pair without reference
p1.first=3;
p.second="add"; 
cout<<p.first<<endl<<p.second<<endl;


pair<int,string>&p2 =  p; // passing by reference
p2.first=4;
p2.second="afh";
cout<<p.first<<endl<<p.second<<endl;  // the value  of p is  changed
// taking  input in a pair
cin>>p2.first>>p2.second;
//Making an array in pair
pair<int,int>p_arr[4];
p_arr[0]={2,4};
p_arr[1]={3,5};
p_arr[2]={6,7};
p_arr[3]={5,2};
swap(p_arr[0],p_arr[3]);   // here on doing swap operation we had swap the elements of both arryas simultaniously
for (int i = 0; i < 4; i++)
{
    cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
}



return 0;
}
