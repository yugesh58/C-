#include <iostream>
using namespace std;

int main() {
    char s;
    cin>>s;
    int flag=0;
    char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
	for(int i=0 ; i< 10 ; i++){
        if(s == vowel[i]){
            flag=1;
        
        }}
    if(flag==1){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    
	return 0;
}
