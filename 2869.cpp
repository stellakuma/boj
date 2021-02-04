#include <iostream>

int main(){

	int a,b,v,n = 0;
	int d = 1;
	scanf("%d %d %d", &a, &b, &v);
	
	for( int i = 0; ; i++ ){
		
		//day
		n += a;
		if( n >= v ){
			
			std::cout << d;
			break;
			
		}
		
		//night
		n -= b;
		d += 1;
		
	}

}