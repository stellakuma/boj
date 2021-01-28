#include <iostream>

int main(){

	int a[10];
	int result = 0;
	int input = 0;
  bool ttn = false;

	for ( int i = 0; i < 10; i++ ){
	
		scanf("%d", &input);
		a[i] = input%42;
		
		}
	
	for ( int i = 0; i < 10; i++ ){

		for ( int j = i; j < 10; j++ ){

      if ( a[j] != 1001 ){

        if ( a[j] == a[i] ){

          if ( i != j ){
	  			a[j] = 1001;
          }
		  		( ttn == false )? ttn = true : 0;

			  } 

      }

			if ( j >= 9 ){

				int nc = 0;

				( ttn == true )? result++ : 0;
        a[i] = 1001;
        ttn = false;
				
				for ( int k = 0; k < 10; k++ ){

					if ( a[k] == 1001 ){
						
						nc++;
						
					}
					
				}
			
			}
		
			
		
		}
		
	}
	
	printf("%d", result);
	
}