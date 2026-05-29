#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int n,x;cin>>n;
x=0;
vector<int> a;
if(n>=1&&n<=10){
for(int i=0;i<n;i++){
	int p;
	cin>> p ;
	if(p>=0&&p<=100){
	a.push_back(p);
	}
}vector<int> s;
for(int i=0;i<a.size();i++){
	for(int j=0;j<a.size();j++){
		if(a[i]==a[j]){
		x++ ;
		}
		}if(x==1){
			s.push_back(a[i]) ;
		}x=0;
	}

sort(s.begin(),s.end());
for(int i=0;i<s.size();i++){
	cout<<s[i];
	if(i<s.size()-1){
		cout<<" ";
	}
}cout << endl;
}
	return 0 ;
}
