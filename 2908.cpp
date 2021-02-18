#include <iostream>
#include <cstring>

using namespace std;

int main(){

	string s[2] = {"", ""};
	string a[2] = {"", ""};
	cin >> s[0];
	cin >> s[1];
	
	for( int i = 0; i < (sizeof(s)/sizeof(*s)); i++ ){
		
		for( int j = s[i].length()-1; j > -1; j-- ){
			
			a[i] = a[i] + s[i].at(j);
			
		}
		
	}
	
   (stoi(a[0]) < stoi(a[1]))? cout << stoi(a[1]) : cout << stoi(a[0]);

}