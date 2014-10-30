#include <iostream>
using namespace std;
string replace(string x){
	if(x.length() == 0){return x;}
	 if (x.substr(0,1) != " "){ return x.substr(0,1) + replace(x.substr(1,x.length()-1));}
	 if (x.substr(0,1) == " "){return "*" + replace(x.substr(1,x.length()-1));}	
}
int main(){
	string a = "John Benard Shaw";
	a = replace(a);
	cout << a << endl;
	return 0;
}
