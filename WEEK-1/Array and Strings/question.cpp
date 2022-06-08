// Take an array with n elements with possibly duplicate elements as the input. The task is to find the index of the first occurrences of the element x in the array and, if it is not present, return -1.
// Input Format:The first line contains an integer N representing the size of the array.

// The next line contains N space-separated integers representing the elements of the array.

// The last line contains an integer 'x' whose index has to be found.

// Output Format:
// The only line of the output prints the Index or -1.

// 2 is present twice in the input array and the first time it appears is at index 2.

#include<bits/stdc++.h>
using namespace std;
int firsttimeoccurance(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        arr[i]=0;
    }
    int count=0;
    // Traverse for index
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                
            }
            
        }
        
    }
    
}


int main(){

int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
cout<<firsttimeoccurance(arr,n);



return 0;
}
