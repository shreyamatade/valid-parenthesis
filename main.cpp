#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int slen=s.size(); vector<int>v; int c=0;

   for(int i=0;i<slen;i++)
   {
       if(s[i]=='(' || s[i]==')')
       {
           v.push_back(1);
       }
       else if(s[i]=='[' || s[i]==']')
       {
           v.push_back(2);
       }
       else if(s[i]=='{' || s[i]=='}')
       {
           v.push_back(3);
       }
   }
   for(int i=0;i<v.size();i++)
   {
       if(v[i]==v[i+1])
       {
           c++;
           i=i+1;
       }
   }

   if(c==3)
    cout<<"true"<<endl;
   else
    cout<<"false"<<endl;
}

