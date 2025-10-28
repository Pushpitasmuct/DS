#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cout<<"enter an expression: ";
    cin>>S;
    int n=S.length();
    stack<char>st; ///******
    for(int i=0; i<n; i++)
    {
        if(S[i]=='(' || S[i]=='{' || S[i]=='[')
            {
                st.push(S[i]);
            }
        else
        {
            if((st.top()=='(' && S[i]==')') || (st.top()=='{' && S[i]=='}') || (st.top()=='[' && S[i]==']')) ///*****
                    {
                       st.pop();
                    }
            else
                    {
                        cout<<"imbalance"<<endl;
                        break; ///*****
                    }
        }
    }
    if(st.empty())
    {
        cout<<"balanced"<<endl;
    }
    else
    {
        cout<<"imbalanced"<<endl;
    }
    return 0;
}