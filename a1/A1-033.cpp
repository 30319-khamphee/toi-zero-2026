#include <iostream>
#include <string>
using namespace std;
int main(){
int n,x,i;
x=0;
string a;
cin>> n;
for(i=1;i<=n;i++){
	cin>>a ;
	if(a=="A"||a=="E"||a=="I"||a=="O"||a=="U"){
		x++;
	}
}   
 cout<<x;                          
 	return 0 ;
}
