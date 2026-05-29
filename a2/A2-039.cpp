#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> n(3);
cin>>n[0];
cout<<"Input number 1 stored."<<endl;
cin>>n[1];
cout<<"Input number 2 stored."<<endl;
cin>>n[2];
cout<<"Input number 3 stored."<<endl;
int c;
cin>>c;
if(c==1){
	cout<<"Original order: "<<n[0]<<" "<<n[1]<<" "<<n[2];
}else if(c==2){
	sort(n.rbegin(),n.rend());
	cout<<"Descending order: "<<n[0]<<" "<<n[1]<<" "<<n[2];
}else if(c==3){
	sort(n.begin(),n.end());
	cout<<" Ascending order: "<<n[0]<<" "<<n[1]<<" "<<n[2];
}else if(c==0){;
	cout<<endl;
}
	return 0 ;
}
