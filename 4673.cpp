#include <iostream>
#include <cstring>

using namespace std;

short d( short n ){
	
	string a = to_string(n);
	short l = a.length();
	short r = n;
	
	for( short i = 0; i < l; i++ ){
		
		r += (short)a[i]-48;
		
	}
	
	return r;
	
}

int main(){

	cout << 1 << endl;
	short now = 1;
	short list[10000] = {0, };
	for( int i = 1; i < 10001; i++ ){ list[i-1] = i; }
	now = d(now);
	
	for( short i = 2; i < 10001; i++ ){
		
		if( now == i ){
			
			now = d(now);
			list[i-1] = 0;
			
		}else{
			
			
			
		}
		
	}

}