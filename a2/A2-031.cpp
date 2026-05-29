#include <iostream>
#include <string>
using namespace std;
int main(){
int n;cin>>n;
string a[n],b[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	cin>>b[i];
}
int cn,cro,nc;
string g ;
cin>>cn;
for(int i=0;i<cn;i++){
	cin>>cro>>nc>>g;
	if(cro==1){
      a[nc]=g;
	}else if(cro==2){
	  b[nc]=g;
	}
}
int f;
f=0;
for(int i=0;i<n;i++){
	   if(a[i]=="A"&&b[i]!="T"){
	   	f++;
	   }if(a[i]=="T"&&b[i]!="A"){
	   	f++;
	   }if(a[i]=="C"&&b[i]!="G"){
	   	f++;
	   }if(a[i]=="G"&&b[i]!="C"){
	   	f++;
	   }                                                 
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";              
}cout<<endl;
for(int i=0;i<n;i++){
   cout<<b[i]<<" ";
}cout<<endl;
cout<<f;
    
	return 0 ;
}
