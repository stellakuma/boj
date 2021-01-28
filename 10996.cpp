#include <iostream>

int main(){

int max = 0;
scanf("%d", &max);

for ( int i = 0; i < max*max*2; i++ ){

if ( i%2 == 0 ){

printf("*");

} else {

printf(" ");

}

if ( i%max == 0 ){

printf("\n");

}

}




}