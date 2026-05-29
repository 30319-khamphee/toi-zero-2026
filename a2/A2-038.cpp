#include <iostream>
using namespace std;
int main(){
int n;cin>>n;
int t=0,ft=0,wt=0,et=0;
for(int i=0;i<n;i++){
	int f1,w1,e1,f2,w2,e2,t1,t2;
	cin>>f1>>w1>>e1>>f2>>w2>>e2;
t1=f1+w1+e1;
t2=f2+w2+e2;
	if(t1>=t2){
		t += t1;
		ft+= f1;
		wt+= w1;
		et+= e1;
	}else if(t2>t1){
      	t+= t2;
		ft+= f2;
		wt+= w2;
		et+= e2;
	}
}
cout<<t<<endl<<ft<<" "<<wt<<" "<<et<<endl;
if(ft>(wt+et)){
	cout<<"YES";
}else{
	cout<<"NO";
}
	return 0 ;
}
