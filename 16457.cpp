#include <iostream>
#include <algorithm>
#include <string>

int main(){

	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int frqc[2*n] = {0};
	int sample[m][k] = {0};
	int optkey[n] = {0};
	
	for( int i = 0; i < m; i++ ){
	
		for( int j = 0; j < k; j++ ){
			
			int a = 0;
			scanf("%d", &a);
			frqc[a-1]++;
			sample[i][j] = a;
			sort(sample[i][0], sample[i][0]+k);
			
		}
	
	}
	
	for( int i = 0; i < n; i++ ){
		
		int max = max_element(frqc.begin(),frqc.end()) - frqc.begin();
		optkey[i] = max+1;
		frqc[max] = 0;
		
	}

	for( int i = 0; i < m; i++ ){
		
		
		
	}

}