#include <iostream>
#include <cstring>

using namespace std;

int main(){

	string s = "";
	getline(cin, s);
	int l = s.length();
	
	bool flag = 0;
	
	for( int i = 0; i < l; i++ ){
		
		if( (int)s[i] != 32 ){
			
			s.replace(0, i, "");
			l = s.length();
			break;
		}
		
		if( i == l-1 ){
		
		    s.replace(s.begin(), s.end(), "");
			l = s.length();
		    flag = 1;
			break;

		}
		
	}
	
	
	for( int i = l-1; i > -1; i-- ){
		
		if( (int)s[i] != 32 ){
			
			s.replace(i, l-1, "");
			l = s.length();
			break;
		}
		
	}
	
	l = s.length();
	int c = 0;
	for( int i = 0; i < l; i++ ){
		
		if( (int)s[i] == 32 ) c += 1;
		
	}

	( flag == 0 )? cout << c+1 : cout << 0;

}