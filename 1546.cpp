#include <iostream>

int main(){

	int tc = 0;
	scanf("%d", &tc);
	double scores[tc];
	double sum = 0;
	double hs = 0;
	for( int i = 0; i < tc; i++ ){
		
		scores[i] = 0;
		scanf("%lf", &scores[i]);
		( hs == 0 )? hs = scores[i] : ( hs < scores[i] )? hs = scores[i] : 0;
		
		}
	
	for( int i = 0; i < tc; i++ ){
		
		scores[i] = (scores[i]/hs)*100;
		sum = sum + scores[i];
		
	}
	
	printf( "%lf", sum/tc );
	
}