#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"enter size:"<<endl;
cin>>size;
int arr[100];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
int freq[size];
for (int i = 0; i < size; i++)
{
    freq[i]=0;
}
int j=0;
int count;
for (int i = 0; i < size; i++)
{
   arr[i]=j;
    freq[j]=count++;
    
}
for (int i = 0; i < size; i++)
{
    cout<<freq[i];
}



return 0;
}
