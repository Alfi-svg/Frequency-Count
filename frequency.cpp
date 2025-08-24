#include <bits/stdc++.h>

using namespace std;

int main()
{
 int n;
 cin>>n;
vector<char>cp;
for(int i=0;i<n;i++)
{
    cin>>cp[i];
}
char v;
cin>>v;
int count=0;
for(auto it=cp.begin();it!=cp.end();it++)
{
    if(*it==v)
    {
        count++;
    }
}
cout<<count<<endl;
return 0;
}
