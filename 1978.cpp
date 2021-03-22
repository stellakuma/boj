#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n = 0;
	int ok = 0;
	int temp = 0;
	
	cin >> n;

	for( int i = 0; i < n; i++ ){
		
		cin >> temp;
		if( temp == 1 ) continue;
		if( temp == 2 ){ ok += 1; continue; }
		
		for( int j = 2; j < temp; j++ ){
			
			if( temp%j == 0 ) break;
			if( j == temp-1 ) ok += 1;
			
		}
		
	}

	cout << ok;

}