#include <iostream>
using namespace std;


int main()
{
    int R;
    cin>>R;
    int P1[R],P2[R],maximum=0,diff=0,W=0,P1SUM=0,P2SUM=0;
    for(int a=0;a<R;a++)
    {
        cin>>P1[a]>>P2[a];
        P1SUM=P1SUM+P1[a];
        P2SUM=P2SUM+P2[a];
        if(P1SUM>P2SUM)
        {
            diff=P1SUM-P2SUM;
            if(diff>maximum){maximum=diff;W=1;}

        }
        else {diff=P2SUM-P1SUM;
            if(diff>maximum){maximum=diff;W=2;}}
    }
    cout<<W<<" "<<maximum<<endl;
    
    return 0;
    }