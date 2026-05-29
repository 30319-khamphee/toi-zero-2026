#include <iostream>
#include <cmath>
using namespace std;

int main() {
int n,l,w;
cin>> n ; 
l=ceil(sqrt(n)) ;
w=(l-1)*2 ;
if(l%2==0){
	if(n%2==0){
		cout<<w ;
	}
	else{
		cout<<w-1 ;
	}
}
if(l%2!=0){
	if(n%2==0){
		cout<<w-1 ;
	}
	else{
		cout<<w ;
	}
}
    return 0;
}
