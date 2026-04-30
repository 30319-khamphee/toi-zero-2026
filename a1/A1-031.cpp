#include <iostream>
#include <string>
using namespace std;
int main(){
string a;
cin>>a;
if(a.length()==4){
	cout<<a.substr(0,1)<<","<<a.substr(1,3);
}
else if(a.length()==5){
	cout<<a.substr(0,2)<<","<<a.substr(2,4);
}
else if(a.length()==6){
	cout<<a.substr(0,3)<<","<<a.substr(3,5);
}
	return 0 ;
}
