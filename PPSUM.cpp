    #include<bits/stdc++.h>

    using namespace std;

    int main()

    {

        int t,d,n,s;

         cin>>t;

         while(t--)

         {
             cin>>d>>n;
             long long  ans=n;
             while(d--)
             {

                  ans=((ans*(ans+1))/2);

             }
             cout<<ans<<endl;
         }
       return 0;
    }