#include <iostream>
#include <cmath>

int main(){

	int x,y;
	float w,s,mdl1,mdl2,mdl3;
	
	scanf("%d %d %f %f", &x, &y, &w, &s);
	x = abs(x);
	y = abs(y);
	
	mdl1 = w*(x+y);
	mdl2 = ((x>y)?y:(x==y)?x:x)*s+((x==y)?0:(x>y)?(x-y):(y-x))*w;
	mdl3 = -1;
	if((x>y)&(x%y==0)){
		mdl3 = s*x;
	}else if((x<y)&(y%x==0)){
		mdl3 = s*y;	
	}

	float p = (mdl2 <= mdl1)? mdl2 : mdl1;
	if(mdl3 > 0){
		if(p > mdl3){
			p = mdl3;
		}
	}

	if(p-int(p) == 0){
		printf("%d", int(p));
	}else{
		printf("%f", float(p));
	}
}