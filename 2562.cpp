#include <iostream>

int main(){

	int a[9];
	int r[2]; //r[0] as max integer, r[1] as ordinal number
	r[0] = 0;
	r[1] = 0;
	int c = 0;
	for( int i = 0; i < 9; i++ ){ 
	
		scanf("%d", &a[i]);
		c = c+1;
		( r[0] == NULL )? r[0] = a[i] : ( a[i] > r[0] )? r[0] = a[i] : 0;
		( r[1] == NULL )? r[1] = c : ( r[0] == a[i] )? r[1] = c : 0;
		
		}

	printf("%d\n%d", r[0], r[1]);
}