#include<bits/stdc++.h>
using namespace std;
int main(){
int a=8,b=9;
a=a^b;
b=b^a;
a=a^b;
cout<<a<<b;
return 0;
}
