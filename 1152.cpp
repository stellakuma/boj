#include <iostream>
#include <cstring>

using namespace std;

int main(){

	string s = "";
	getline(cin, s);
	int n = 0;
	
	for( int i = 0; i < s.length(); i++ ){
		
		if( int(s.at(i)) == 32 ){
			
			n += 1;
			
		}
		
	}

	cout << n+1;

}