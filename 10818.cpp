#include <iostream>

int main(){

int c;
scanf( "%d", &c );

int a[c];
//r0 as max, r1 as min
int r[2];
r[0] = 0;
r[1] = 0;

for ( int i = 0; i < c; i++ ){

scanf( "%d", &a[i] );
( r[0] == NULL )? r[0] = a[i] : ( r[0] < a[i] )? r[0] = a[i] : 0;
( r[1] == NULL )? r[1] = a[i] : ( r[1] > a[i] )? r[1] = a[i] : 0;

}

printf("%d %d", r[1], r[0] );

}