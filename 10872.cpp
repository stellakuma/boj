#include <iostream>

using namespace std;

void fac( short b, int a = 1 ){
	
	( b == 1 or b == 0 )? cout << a << endl : 
		
	}else{
		a = a*b;
		fac( b-1, a );
		
	}
	
}

int main(){

	short a = 0;
	scanf("%hd", &a);
	fac(a);

}