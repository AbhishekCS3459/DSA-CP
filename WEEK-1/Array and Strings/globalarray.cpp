
// EXPLANATION of cases
/* Memory Structure: [Kernel Space] --> [Stack(grows down): size limit-8 mb]--> [Memory Segment]--> [Heap]--> [BSS Segment]
--> [DATA Segment(static variable initialised by the programmer)]
LOCAL VARIABLE IS STORED IN STACK MEMORY (8 mb) WHILE A GLOBAL VARIABEL IS STORED IN DATA SEGEMENT WHICH HAS UNSPECIFIED MEMORY
*/
#include<bits/stdc++.h>
using namespace std;
// globally declaration of the array
const int N= 1e7;
int globalarr[N];
int main(){
// const int N = 1e7;  // CASE-1: this will show error 
// int arr[N];
// cin>>arr[0];
// cout<<arr[0];

 const int N = 1e5;  // CASE 2: this will not show  error 
 int localarr[N];
 cin>>localarr[0];
 cout<<localarr[0];

cin>>globalarr[0];  // CASE 3: this will not show error and run
cout<<globalarr[0];


return 0;
}
