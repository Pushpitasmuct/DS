#include<bits/stdc++.h>
using namespace std;
void Insert(int arr[],int n,int val,int idx=-1)//idx=-1,default hisebe
{
    if(idx==-1)
    {
        int j=0;
        while(arr[j]!=0)//find first aviable space.
            j++;
        idx=j;//assign available index to idx.
        arr[idx]=val;//assign the value
    }
    else//when we pass idx'
    {
        if(arr[idx]!=0)//check if idx is free
        {
            for(int i=n-1; i>idx; i--) //shift 1 element to the r8 up idx
            {
                arr[i]=arr[i-1];
            }
            arr[idx]=val;//assign value to idx.
        }
    }
}
int main(){
int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    Insert(arr,n,8,3);
    for (int i=0; i<n; i++)
        cout << "arr[" << i << "] = " << arr[i] << endl ;
    cout << endl;


}