#include <iostream>
#include <string>
using namespace std;
int main(){
string b;
int a[5]={0,0,0,0,0};
getline(cin, b);
int i;
for(i=0;i<b.length();i++){
if (b[i]=='a'||b[i]=='A'){
	a[0]=a[0]+1;
}else if(b[i]=='e'||b[i]=='E'){
	a[1]=a[1]+1;
}else if(b[i]=='i'||b[i]=='I'){
	a[2]=a[2]+1;
}else if(b[i]=='o'||b[i]=='O'){
	a[3]=a[3]+1;
}else if(b[i]=='u'||b[i]=='U'){
	a[4]=a[4]+1;
}
}
if(a[0]>0)cout<<"a: "<<a[0]<<endl;
if(a[1]>0)cout<<"e: "<<a[1]<<endl;
if(a[2]>0)cout<<"i: "<<a[2]<<endl;
if(a[3]>0)cout<<"o: "<<a[3]<<endl;
if(a[4]>0)cout<<"u: "<<a[4]<<endl;


    return 0 ;
}
