#include <iostream>

int main(){

	int a[10];
	for( int i = 0; i < 10; i++ ){ a[i] = 0; }
	
	int f,b,c = 0;
	scanf("%d", &f);
	scanf("%d", &b);
	scanf("%d", &c);
	int proc = f*b*c;

	for( int i = 0; ; i++ ){
		
		if ( proc/10 != 0 ){
			
			a[proc%10]++;
			proc = proc/10;
				
		} else {

      a[proc%10]++;
		  for( int j = 0; j < 10; j++ ){
				
				printf("%d\n", a[j]);
				
		  }
			
			break;
			
		}
		
	}

}