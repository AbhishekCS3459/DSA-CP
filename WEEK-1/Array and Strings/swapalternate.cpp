// SWAP ALTERNATE ELEMENTS OF THE ARRAY,EX-{1,2,3,4,5,6}
//  OUTPUT:{2,1,4,3,6,5};
#include <bits/stdc++.h>
using namespace std;
void swapalternatefun(int arr[],int size){
    int i;
        cout << "Swaped array" << endl;
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0 && i != (size - 1))
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}

int main()
{
    int size;
    cin >> size;
    int *arr = new int[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
swapalternatefun(arr,size);

    return 0;
}
