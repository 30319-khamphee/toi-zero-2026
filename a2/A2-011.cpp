#include <iostream>
#include <vector>
using namespace std;
int main(){
int b;
vector<int> a;
int i;
for(i=0;i<10;i++){
	cin>>b;
	bool s = true;
	int n ;
	for(n=0;n<a.size();n++){
		if(b==a[n]){
		s=false ;
		break;
		}
	}
	if(s){
	a.push_back(b);
}
}
int x;
for(x=0;x<a.size();x++){
	cout<<a[x]<<" ";
}

    return 0 ;
}
