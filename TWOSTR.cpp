#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int t;
cin>>t;
char ans[2][10] = {"No", "Yes"};
while(t--){
    
    
   
        char str1[100], str2[100];
        cin>>str1>>str2;

        int matched = 1;
        for(int i = 0 ; str1[i]; i++ ) {
            char ch1 = str1[i], ch2 = str2[i];
            if( (ch1 != ch2) && (ch1 != '?' && ch2 != '?') ) {
                matched = 0;
            }
        }
        cout<<ans[matched]<<endl;
    }


return 0;
}