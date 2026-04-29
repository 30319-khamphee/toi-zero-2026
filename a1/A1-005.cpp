#include <iostream>  
using namespace std;
int main(){ 
int a,b;
cin>>a;
cin>>b;
if(a==1||a==2||a==3){
	if(a%3==0 && b>=21){
		cout<< "spring";
	}else{
		cout<< "winter";
	}
}
else if(a==4||a==5||a==6){
	if(a%3==0&&b>=21){
		cout<< "summer";
	}else{
		cout<< "spring";
	}
}
else if(a==7||a==8||a==9){
	if(a%3==0&&b>=21){
		cout<< "fall";
	}else{
		cout<< "summer";
	}
}
else if(a==10||a==11||a==12){
	if(a%3==0&&b>=21){
		cout<< "winter";
	}else{
		cout<< "fall";
	}
}
	return 0 ;
}
