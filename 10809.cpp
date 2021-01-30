#include <iostream>
#include <cstring>

using namespace std;

int main(){

	string s = "";
	
	cin >> s;
	
	for( int n = 97; n < 123; n++ ){
		
		for(int i = 0; ; i++ ){
			
			if( i+1 > s.length() ){
				
				cout << "-1 ";
				break;
				
			}
			
			if( s.at(i) == char(n) ){
				
				cout << i;
				cout << " ";
				break;
				
			}
			
		}
		
	}
	

}