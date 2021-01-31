#include <iostream>
#include <cstring>

using namespace std;

int main(){

	int t = 0;
	
	cin >> t;
	string s[t-1] = {};
	int r[t-1] = {};
	
	for( int i = 0; i < t; i++ ){
		
		cin >> r[i];
		cin >> s[i];
		
	}
	
	for( int i = 0; i < t; i++ ){
		
		for( int j = 0; j < s[i].length(); j++ ){
			
			for( int k = 0; k < r[i]; k++ ){
			
				cout << s[i].at(j);
			
			}
		
		}
		cout << "\n";
	}
	
}