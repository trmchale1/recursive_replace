#include <iostream>
using namespace std;
string replace(string x){	
	int z = 0;
	if(x.find(" ") == -1){return x;}
	else{
		z = x.find(" ");
		x.replace(z,1,"*");
		return replace(x);
	}	
}
int main(){
	string a = "    John    Benard    Shaw     ";
	a = replace(a);
	cout << a << endl;
	return 0;
}
