#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(){
	
	short time = 0;
	string cn = "";
	getline( cin, cn );
	
	regex r("[A-C]");
	cn = regex_replace(cn, r, "2");
	regex r1("[D-F]");
	cn = regex_replace(cn, r1, "3");
	regex r2("[G-I]");
	cn = regex_replace(cn, r2, "4");
	regex r3("[J-L]");
	cn = regex_replace(cn, r3, "5");
	regex r4("[M-O]");
	cn = regex_replace(cn, r4, "6");
	regex r5("[P-S]");
	cn = regex_replace(cn, r5, "7");
	regex r6("[T-V]");
	cn = regex_replace(cn, r6, "8");
	regex r7("[W-Z]");
	cn = regex_replace(cn, r7, "9");
	
	for( short i = 0; i < cn.length(); i++ ){
		
		time += cn[i]-47;
		
	}
	
	cout << time << endl;
}