// array of vectors 
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
    vector<int>x(4,1); // It is only a vector of size 4 and all the elements are filled with 1
    vector<int>m[4]; // 4 vectors are made with size=0, ex- m[0] is 0th vector with size=0,m[1] is 1st vector of size=0,simalarly  m[2],m[3]    
    
    int N;
    cout<<"enter N:"<<endl;
    cin>>N;
    vector<int>v[N]; // ARRAY OF VECTORS: NUMBER OF ROWS FIXED BUT NUMBER OF COLUMN IN NOT FIXED
    for (int i = 0; i < N; i++)
    {
        int n;
      
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }
    cout<<"The vector is:"<<endl;
    for (int i = 0; i < N; i++)
    {
     printvector(v[i]);
    }
    cout<<v[0][1]; // 0th vector, 0th element

    cout<<v[0][3];  // 0th vector 3rd  element
return 0;
}Size of x:3
1 2 3 
Size of x:3
4 8 9 
Size of x:2
2 8 
20
