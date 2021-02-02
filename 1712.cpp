#include <iostream>

int main(){

	int a, b, c = 0;
	scanf("%d %d %d", &a, &b, &c);

	(c-b < 1)? std::cout << -1 : std::cout << (a/(c-b))+1;
	
}