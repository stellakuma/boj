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
	int m[2] = {0, 0};

	for( int i = 0; i < s.length(); i++ ){
		
		int nb = (int)s.at(i);
		d[nb] += 1;
		
		if( d[nb] > m[1] ){
				
			m[0] = nb;
			m[1] = d[nb];
				
		}
	
	}
	
	for( int j = 97; ; j++ ){
		
		if( j == 123 ){
			
			cout << (char)toupper((char)m[0]) << endl;
			break;
			
		}
		
		if( d[j] != 0 ){
			
			if( j != m[0] ){
			
				if( d[j] == m[1] ){
					
					cout << "?" << endl;
					break;
					
				}
			
			}
			
		}
		
	}
}