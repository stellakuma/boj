#include <iostream>

int main(){

	int lowest[2];
	lowest[0] = 0;
	lowest[1] = 0;
	int temp = 0;
	
	for( int i = 0; i < 5; i++ ){
	
		if ( i < 3 ){
			
			scanf( "%d", &temp );
			( lowest[0] == 0 )? lowest[0] = temp : ( lowest[0] > temp )? lowest[0] = temp : 0;

		} else {
			
			scanf( "%d", &temp );
			( lowest[1] == 0 )? lowest[1] = temp : ( lowest[1] > temp )? lowest[1] = temp : 0;
			
		}

	}
	
	printf("%d", lowest[0]+lowest[1]-50);

}