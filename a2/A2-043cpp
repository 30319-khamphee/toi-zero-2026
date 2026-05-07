#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n] ;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    string b;
    cin>>b;
 int con=0;
 for(i=0;i<n;i++){
     if(a[i]==1){
         con=i;
     } 
 }
 for(i=0;i<b.size();i++){
     if(b[i]=='L'){
         if(a[con-1]==2){
            a[con-1]=1;
            a[con]=0;
            con--;
            break;
         }else if(con==0){
             continue;
         }
         else if(a[con-1]>=0){
         a[con-1]=1;
            a[con]=0;
            con--;
            }else if(a[con-1]<=0){
                continue;
            }
     }
     if(b[i]=='R'){
         if(a[con+1]==2){
            a[con+1]=1;
            a[con]=0;
            con++;
            break;
         }
         else if(a[con+1]<=n){
         a[con+1]=1;
            a[con]=0;
            con++;    
     }
     else if(a[con+1>n]) continue;
     }
 }
    for(i=0;i<n;i++){
    cout<<a[i]<<" "; 
    }
    return 0;
}
