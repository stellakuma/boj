#include <iostream>

int main(){

	int repeat = 0;
	scanf("%d", &repeat);
	char s[repeat][80];
	int scores[repeat];
	for( int i = 0; i < repeat; i++ ){ scores[i] = 0; }
	int cumul = 0;
	for( int i = 0; i < repeat; i++ ){
		
		scanf("%s", s[i]);
		
	}
	for( int i = 0; i < repeat; i++ ){
    
		for( int j = 0; ; j++ ){
			
			if( s[i][j] == '\0' ){
				
        cumul = 0;
				break;
				
			} else {
				
				if( s[i][j] == 'O' ){
					
          cumul++;
					scores[i] = scores[i] + cumul;
          //printf("\n%d %d", cumul, scores[i]);

				} else if( s[i][j] == 'X' ){
					
					cumul = 0;
					
				}
				
			}
			
		}
		
	}
	
	for( int i = 0; i < repeat; i++ ){
	
	  printf("%d\n", scores[i]);
	
	}

}