#include <iostream>
using namespace std;
int main(){
int i;
cin>> i;
while(i>=1000){ cout<<"M"; 
i=i-1000 ;	
}
if(i>=900){
cout<<"CM";i=i-900 ; }
else if(i>=500){
cout<<"D";i=i-500 ; }
else if(i>=400){
cout<<"CD" ; i=i-400 ;}
while(i>=100){ cout<<"C"; 
i=i-100;
}

if(i>=90){
	cout<<"XC";
	i=i-90 ;
}
else if(i>=50){
	cout<<"L";
	i=i-50 ;
}
else if(i>=40){
	cout<<"XL";
	i=i-40 ;
}

while(i>=10){
	cout<<"X" ;
	i=i-10;
}
if(i>=9){
	cout<<"IX";
	i=i-9;}
 else if(i>=5){
	cout<<"V";
	i=i-5;
}
else if(i>=4){
	cout<<"IV";
	i=i-4;
}  
while(i>=1){
	cout<<"I";
	i=i-1 ;
}
	return 0 ;
}
