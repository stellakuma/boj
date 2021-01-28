#include <iostream>

int main(){

	int max = 0;
	int input = 0;
	int space = 0;
	int spacemax = 0;
	scanf("%d", &input); //5
	max = (input*2)-1; //9
	
	for ( int i = 0; i < max; i++ ){
		
		space = spacemax;
		
		if ( i < input-1 ) {
		
			for ( int j = 0; j < max-i; j++ ){
			
				if ( space > 0 ){
					
					printf(" ");
					space--;
					
				} else {
					
					printf("*");
					
					if ( j == max-i-1 ){
						
						spacemax++;
						printf("\n");

					}
					
				}
			
			}
	
		} else if ( i == input-1 ) {

			for ( int j = 0; j < input; j++ ){
				
				if ( space > 0 ){
					
					printf(" ");
					space--;
					
				} else {
					
					printf("*");
					
					if ( j == input-1 ){
						
						spacemax--;
						printf("\n");
						
					}
					
				}
				
			}
			
      
		} else if ( i > input-1 ) {

			for ( int j = -1; j < i; j++ ){
				
				if ( space != 0 ){
					
					printf(" ");
					space--;

				} else {
					
					printf("*");
					
        if ( j == i-1 ){
						
						spacemax--;
						printf("\n");
						
					}

				}
				
			}
			
		}
	
	}

}