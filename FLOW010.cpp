#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	  char ch;
	  cin>>ch;
	  switch(ch) {
            case 'b':
            case 'B':
                cout<<"BattleShip"<<endl;
                break;
            case 'c':
            case 'C':
                cout<<"Cruiser"<<endl;
                break;
            case 'd':
            case 'D':
                cout<<"Destroyer"<<endl;
                break;
            case 'f':
            case 'F':
                cout<<"Frigate"<<endl;
                break;
            default:
                break;
	    	}
	}
	return 0;
}
