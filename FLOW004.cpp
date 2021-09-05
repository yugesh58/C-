#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char str[40];
	    scanf("%s",str);
	    printf("%d\n",str[0]-'0'+str[strlen(str)-1]-'0');
	    
	}
	return 0;
}
