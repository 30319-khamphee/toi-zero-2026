#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int w,h,m,n;
cin>>w>>h>>m>>n;
int i,a;
vector <int> x;
for(i=0;i<m;i++){ //in
	cin>>a;
	x.push_back(a);
}
vector <int> wid;
wid.push_back(x[0]);
for(i=1;i<m;i++){
	wid.push_back(x[i]-x[i-1]);
}wid.push_back(w-x[m-1]);
vector <int> y;
for(i=0;i<n;i++){ //in
	cin>>a;
	y.push_back(a);
}
vector <int> hight;
hight.push_back(y[0]); //hight
for(i=1;i<n;i++){
	hight.push_back(y[i]-y[i-1]);
}hight.push_back(h-y[n-1]);	
vector<int> bread;
for(i=0;i<m+1;i++){
	for(int j=0;j<hight.size();j++){
		a = wid[i] * hight[j];
		bread.push_back(a);
	}
}sort(bread.rbegin(),bread.rend());
for(i=0;i<2;i++){ 
	cout<<bread[i]<<" ";
}

	return 0 ;
}
