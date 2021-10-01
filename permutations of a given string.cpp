#include<bits/stdc++.h>
using namespace std;

void solve(string str)
{
    if(!next_permutation(str.begin(),str.end()))
        return;
    cout<<str<<endl;
    solve(str);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        cout<<str<<endl;
        int len=str.size();
        solve(str);
    }
}
