#include <iostream>
#include <string>
using namespace std;
int main(){
string a,b;
int c,lb;
cin>>a;
cin>>b ;
cin>>c ;
lb=b.length()-1 ;
if(a.length()>=5){
	cout<<a.substr(0,2)<< b[lb] << c%10 ;
}
else{
	cout<<a.substr(0,1)<< c << b[lb] ;
}
	return 0 ;
}
