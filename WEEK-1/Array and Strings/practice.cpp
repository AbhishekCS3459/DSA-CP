#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cin>>size;
int arr[100];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
printarray(arr,size);

return 0;
}
void printarray(int arr[])
