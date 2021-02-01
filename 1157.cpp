#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	string s = "";
	cin >> s;
	for( int i = 0; i < s.length(); i++ ){
	    
	    s[i] = tolower(s.at(i));
	    
	    }
	
	int d[123] = {0, };
	//m0 as char, m1 as size
	int m[2] = {0, };

	//97~122 a~z
	for( int i = 0; i < s.length(); i++ ){
		
		d[(int)s.at(i)] += 1;
		
	}
	
	for( int i = 97; ; i++ ){
		
		if( d[i] == 0 ) continue;
		
		if( d[i] > m[1] ){
			
			m[0] = i;
		
		} else if( m[1] == d[i] ){
			
			//printf("%d %d\n", m[1], d[i]);
			cout << "?";
			break;
			
		}
		
		if ( i == 122 ) cout << toupper((char)m[0]);
	}
}