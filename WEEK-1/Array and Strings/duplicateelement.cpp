#include<bits/stdc++.h>
using namespace std;
int findduplicate(int arr[],  int s){
    int ans=0;
    for (int i = 0; i < s; i++)
    {
        ans=ans^arr[i];
    }
    for (int i = 1; i < s; i++)
    {
        ans=ans^i;
    }
    return ans;
}
int main(){
int size;
cin>>size;
int arr[100];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
cout<<findduplicate(arr,size);

return 0;
}
