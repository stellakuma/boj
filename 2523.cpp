#include <iostream>

int main(){
    
    int max = 0;
    scanf("%d", &max);
    
    for( int i = 1; i < (max*2)+1; i++ ){
        
        if ( i <= max ){
            
            int j = 0;
            while( j < i ){
                
                printf("*");
                j++;
                
            }
            printf("\n");
            
        }else{
            
            int j = 0;
            while( j < max-(i-max) ){
                
                printf("*");
                j++;
                
            }

            if( i != max*2 )
            printf("\n");

        }
        
    }
    
}