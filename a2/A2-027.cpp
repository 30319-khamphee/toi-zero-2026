#include <iostream>
#include <string>
using namespace std;
int main(){
int n,x,s,i,p;
x=0;
p=0;
s=0;
cin>> n;
for(i=1;i<=n;i++){
	cin>>x;
	if(x>s){
		s=x;
		p=0;
		p=p+1;
	}else if(x==s){
		p=p+1;
	}
} 
cout<<s<<endl<<p;                         
 	return 0 ;
}
