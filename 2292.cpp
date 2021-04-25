#include <iostream>

int main(){
	int a,r,n = 0;
	std::cin >> a;
	while(1){
		if( a <= (3*n)*(n+1)+1 ){
			r = n+1;
			break;
		}
		n++;
	}
	std::cout << r;
}