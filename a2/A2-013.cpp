#include <iostream>
#include <string>
using namespace std;
int main(){
string a,t;
int na,nt,e,s ;
cin>>a>>na ;
cin>>t>>s>>nt ;
if(a=="H"){
 e=5*na;
}
else if(a=="O"){
	 e=3*na;
}
else if(a=="J"){
e=2*na;
}

if(t=="R"){
	if(s==1){
		e=12*nt+e;
	}else if(s==2){
		e=18*nt+e;
	}else if(s==3){
		e=25*nt+e;
	}
}
else if(t=="T"){
	if(s==1){
		e=15*nt+e;
	}else if(s==2){
		e=20*nt+e;
	}else if(s==3){
		e=30*nt+e;
	}
}else if(t=="M"){
	if(s==1){
		e=10*nt+e;
	}else if(s==2){
		e=15*nt+e;
	}else if(s==3){
		e=20*nt+e;
	}
}
cout<<e;
 	return 0 ;
}
