#include <iostream>
#include <string>
using namespace std;
int main(){
int n,i,j ;

cin>> n ;
for(i=1;i<=n;i++){
   
   for(j=1;j<=i;j++){
   	if(j==1||i==n||i==j)
   	cout<<"0 ";
   	else{
   		cout<<"1 " ;
	   }
   }
   cout<< endl ;
} 
	return 0 ;
}
