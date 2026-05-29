#include <iostream>
#include <vector>
using namespace std;
int main(){
int n,q;
cin>>n>>q;
vector<int> s;
vector<int> c;
int i,sv,cv ;
for(i=0;i<n;i++){
	cin>>sv>>cv;
	s.push_back(sv);
	c.push_back(cv);
}
int j;
 vector<int> k(q);
for(j=0;j<q;j++){
	cin>>k[j];
}
int x;
vector<int> a(q,0);
for(x=0;x<q;x++){
	for(int y=0;y<n;y++)
	if(k[x]>=s[y]&&k[x]<=c[y]){
		a[x]=a[x]+1 ;
	}
}
for(int x = 0; x < q; x++) {
        cout << a[x];
        if (x < q - 1) {
            cout << " ";
        }
    }
    return 0 ;
}
