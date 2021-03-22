#include <iostream>
#include <cstring>

using namespace std;

int main(){

	int c = 0;
	int n = 1;
	int crnt = 0;
	cin >> n;
	
	int a[123] = {0, };
	string temp[n] = {"", };
	
	for( int i = 0; i < n; i++ ){
		
		cin >> temp[i];
		for( int j = 0; j < temp[i].length(); j++ ){
			
			if( crnt != (int)(temp[i].at(j)) ){
				
				if( a[(int)(temp[i].at(j))] == 0 ){
				
					a[(int)(temp[i].at(j))] += 1;
					crnt = (int)(temp[i].at(j));
				
				}else{
				
					break;
				
				}
				
			}	
			
			if( j == temp[i].length()-1 ){
				
				fill_n(a,123,0);
				c += 1;
				
			}
			
		}
	
	}
	
	cout << c << endl;

}