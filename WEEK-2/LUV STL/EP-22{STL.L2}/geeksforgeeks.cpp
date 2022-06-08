// reverse  a string


#include<bits/stdc++.h>
using namespace std;
void reversestring(string s){
    for (int i = s.length( ); i >=0; i--)
   {
       cout<<s[i];
   }
}

int main(){
    string s;
    cin>>s;
 reversestring(s);
   
return 0;
}
