#include <iostream>
#include <string>
using namespace std;
int main(){
string a,b,t;
int i,p ;
cin>>a>>b ;
cin>>t ;
if(a=="S"){
	if(b=="R"){
	 p=60;
	}
	else if(b=="T"){
	 p=80;
	}
}
else if(a=="M"){
	if(b=="R"){
	 p=80;
	}
	else if(b=="T"){
	 p=100;
	}
}
else if(a=="L"){
	if(b=="R"){
	 p=100;
	}
	else if(b=="T"){
	 p=120;
	}
}
if(t!="N"){
	cin>> i ;
	if(t=="P"){
		p=(15*i)+p;
	}else if(t=="E"){
		p=(10*i)+p;
	}
}
cout<<p;
 	return 0 ;
}
