#include <iostream>
using namespace std;
void solution()
{
    int x,i,j=0;
    cin>>x;
    int a1[x/2],b1[x/2];
    if((x/2)%2==0)
    {    
        cout<<"YES"<<endl;
        for(i=0;i<x/2;i=i+2)
        {
            a1[j]=i+1;
            a1[x/2-j-1]=x-i;
            j++;
        }
        j=0;
        for(i=1;i<x/2;i=i+2)
        {
            b1[j]=i+1;
            b1[x/2-j-1]=x-i;
            j++;
        }
        for(i=0;i<x/2;i++)
        {
            cout<<a1[i]<<" ";
        }
        cout<<endl;
        for(i=0;i<x/2;i++)
        {
            cout<<b1[i]<<" ";
        }
        cout<<endl;
    }
    else
        cout<<"NO\n";
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    int T;
	cin>>T;
	while(T--)
		solution();
	return 0;
}