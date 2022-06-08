// NOTE: PASSING VECTOR BY VALUE MAKE A COPY OPERATION 
// TIME COMPLEXITY OF COPY OPERATION: O(n)
// PASSING THE VECTOR USING REFERENCE

#include<bits/stdc++.h>
using namespace std;
void printvector(vector<int> &v2){
    cout<<"size of:"<<v2.size()<<endl;
 
    for (int i = 0; i < v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
       v2.push_back(10);
    }
void printrefvector(vector<int> &v){
    cout<<"size of:"<<v.size()<<endl;
 
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
       v.push_back(10);
    }
int main(){
// vector<int> v(5,6);
// v.push_back(3);
// v.push_back(2);
// // PASSING ONLY COPY --> O(n) OPERATION
// printvector(v);
// printvector(v); // calling two times to see the changes in the vector without reference

// //PASSING BY REFERENCE OF A VECTOR TO A FUNCTION

// vector<int> vcopy=v;
// // PASSING REFERENCE --> O(1) OPERATION PASSING ACTUAL VECTOR
// printrefvector(vcopy);
// printrefvector(vcopy); // NOW AGAIN PRINTING THE VECTOR REFLECTS THE CHANGES AS  ITS REFERENCE IS PASSED

// MAKING A REFERENCE VECTOR 
vector<int>m;
m.push_back(2);
m.push_back(1);
m.push_back(3);
cout<<"original vector (m) "<<endl;
printvector(m);
vector<int>vc=m;
cout<<"Copied Vector without reference(vc):"<<endl;
printvector(vc);
// Reference Vector 
vector<int>&v2=m;  // O(1) making a copy with reference
cout<<"Copied vector with reference(v2):"<<endl;
printvector(v2);

return 0;
}
