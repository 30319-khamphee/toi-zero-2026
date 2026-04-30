#include <iostream>
using namespace std;
int main(){
int n,i;cin>>n;
int h[n];
for(i=0;i<n;i++){
	cin>>h[i];
}int b=0;
if(h[0]>h[1]){
	b++;
}if(h[n-1]>h[n-2]){
	b++;
}
for(i=1;i<=n-2;i++){
	if(h[i]>h[i+1]&&h[i]>h[i-1]){
		b++;
	}
}cout<<b;
	return 0 ;
}
