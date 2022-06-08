#include<bits/stdc++.h>
using namespace std;
void printvector(vector<string>s){
    cout<<"size:"<<s.size()<<endl;
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
vector<string>ch;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    ch.push_back(s);
}
printvector(ch);
return 0;
}

