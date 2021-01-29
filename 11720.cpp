#include <iostream>
#include <string>

using namespace std;

int main(){

	int n = 0;
	string in = "";
	int sum = 0;
	
	cin >> n;
	cin >> in;
	
	for( int i = 0; i < n; i++ ){
		sum += in.at(i)-48;
	}
	
	cout << sum << endl;

}