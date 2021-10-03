#include<bits/stdc++.h>

using namespace std;
int main()

{
    int t;
    cin>>t;
    while (t--)
    {
      string s;
      cin>>s;
     
     int acount=0,bcount=0;
     
     for (int i=0; i<s.length(); i++)
     {
          if (s[i]=='a')
          acount++;
          else
          bcount++;
     }
      if (acount>bcount)
      cout<<bcount<<endl;
      else
      cout<<acount<<endl;
    }
return 0;
}