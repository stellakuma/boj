#include <iostream>
#include <cstring>

using namespace std;

int main(){

	string s = "";
	getline(cin, s);
	int n = 0;
	int ag = 0;
	
	for( int i = 0; i < s.length(); i++ ){
		
		if( (ag == 0) & (int(s.at(i)) == 32) ){
			
			n += 1;
			ag += 1;
			
		} else if( (ag >= 1) & (int(s.at(i) != 32)) ){
			
			ag = 0;
			
		}
		
	}

	cout << n+1;

}