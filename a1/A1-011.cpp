#include <iostream>
#include <string>
using namespace std;
int main(){
string a,out ;
int i,n ;
n=1 ;
cin>> a ;
for(i=0;i<a.length();i++){
    if(a[i]==a[i+1]){
    	n++ ;
	}
	else{
		cout<< n << a[i] ;
		n=1 ;
	}
}
cout<< out ; 
	return 0 ;
}
