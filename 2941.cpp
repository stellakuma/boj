#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){

	string a = "";
	getline(cin, a);
	smatch m;
	regex reg("c=|c-|dz=|d-|lj|nj|s=|z=");
	
	a = regex_replace(a,reg,"b");
	
	cout << a.length() << endl;

}