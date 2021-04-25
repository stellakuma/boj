#include <iostream>
#include <cstring>

using namespace std;

short d( short n ){
	
	string a = to_string(n);
	short r = n;
	
	for( short i = 0; i < (short)a.length(); i++ ){
		
		r += (short)a[i]-48;
		
	}
	
	return r;
	
}

int main(){

	int arr[10000];
	fill_n(arr, 10000, 0);
	
	for( short i = 0; i < 10000; i++ ){
		
		if( arr[i] == 0 ){
			
			short now = d(i+1);
			while( true ){
			
				arr[now] = 1;
				now = d(now);
				if( now > 9999 ) break;
			
			}
		
		}
		
	}
	
	for( short i = 0; i < 10000; i++ ){
		
		if( arr[i] == 0 ){
			
			cout << i+1 << endl;
			
		}
		
	}

}