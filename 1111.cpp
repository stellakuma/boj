#include <iostream>

int main(){

	// n, previous int, now int, comparison value, prediction a, prediction b
	int n, pi, ni, cv, pa, pb = 0;
	int trig = 0;
	
	for( int i = 0; i < n; i++ ){
	
		pi = ni;
		scanf("%d", &ni);
		
		if( trig == 1 ){
			
			continue;
			
		}
		
		if( i == 0 ){
		
			pb = ni;
		
		}
		
		if( i == 1 ){
			
			cv = ni-pi;
			pa = cv;
			
		}
		
		if( pi*pa+pb == ni ){
			
			trig = 1;
			
		}
		
	}

}