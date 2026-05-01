#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n;cin>>n;
vector<int> b2,b8,b12;
int x=n;
int y=n;
int z=n;
if(n==0){
	cout<<0<<endl<<0<<endl<<0;       
}
while(x>0){
	if(x%2==0){
		b2.push_back(0);
	}
	else{
		b2.push_back(1);
	}
	x=x/2;
}reverse(b2.begin(),b2.end());
while(y>0){
	b8.push_back(y%8);
	y=y/8;
}reverse(b8.begin(),b8.end());
 while(z>0){
        if(z%16<10){
          int c='0'+(z%16);
            b12.push_back(c);
        }else{
          int c='A'+(z%16-10);
          b12.push_back(c);
        }
        z=z/16;
    }
    reverse(b12.begin(),b12.end());
int i;
for(i=0;i<b2.size();i++){
   cout<<b2[i];	
}cout<<endl;
for(i=0;i<b8.size();i++){
   cout<<b8[i];	
}cout<<endl;
for(i=0;i<b12.size();i++){
      cout<<char(b12[i]);
}
return 0 ;
}
