#include<bits/stdc++.h>
using namespace std;
int maxsumsubarray(int arr[],int n){
    int sum=0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
          ans=max(sum,ans);
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
cout<<maxsumsubarray(arr,size);


return 0;
}
