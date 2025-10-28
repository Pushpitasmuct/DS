#include<bits/stdc++.h>
using namespace std;
void deleta(int arr[],int n,int idx){ ///"delete" name akta keyword ase tai use kora jbena
   if(idx==n-1){ ///last idx delete
     arr[idx]=0;
   }
    else{ ///onno idx delete
        for(int i=idx+1;i<n;i++){ ///*****
            arr[i-1]=arr[i];
        }
        arr[n-1]=0; ///last idx e 0 bosano
    }
}
int main(){
    int n,i;
    cin>>n; ///array size input
    int arr[n];
    for(i=0;i<n;i++){ ///array input
        cin>>arr[i];
    }
    for(i=0;i<n;i++){ ///array output
        cout<<arr[i];
    }
    deleta(arr,n,3); ///idx delete
    
    for(i=0;i<n;i++){ ///delete er por array r obostha
        cout<<arr[i];
    }
}