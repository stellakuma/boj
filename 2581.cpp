#include <iostream>

using namespace std;

int main(){

	int m = 0;
	int n = 0;
	int total = 0;
	int min = 0;
	
	cin >> m;
	cin >> n;
	
	for( int i = m; i < n+1; i++ ){
		
		for( int j = m; j < i; j++ ){
			
			if( i == 1 ) break;
			if( i == 2 ){ total += i; min = 2; break; }
			
			if( i%j == 0 ) break;
			
			if( j == i-1 ){ 
			
				total += i; 
				if( min == 0 ) min = i;
	
			}
		
		}
		
	}
	
	if( min != 0 ){

		cout << total << endl;
		cout << min << endl;

	}else{
		
		cout << -1 << endl;
		
	}

}