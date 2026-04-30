#include <iostream>
#include <string>
using namespace std;
int main(){
string a;
int b;
cin>> a;
cin>> b;
if(a=="H"&&b!=4567){
	cout<<"safe locked - change digit";
}
else if(a!="H"&&b==4567){
	cout<<"safe locked - change char" ;
}
else if(a=="H"&&b==4567){
	cout<<"safe unlocked";
}
else{
	cout<< "safe locked";
}
	return 0 ;
}
