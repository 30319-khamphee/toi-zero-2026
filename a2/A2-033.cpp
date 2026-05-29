#include<iostream>
using namespace std;
int main(){
    float n;cin>>n;
    float o;cin>>o;
    if(n>=00.00&&n<=23.59){
    if(o-n<=00.15){
        cout<<"FREE";
        return 0;
    }int h;
    int m;
    h=o-n;
    m=(o*100)-(n*100);
    if(m%60!=0) h+=1;
    if(h==1) cout<<25;
    else if(h==2)cout<<50;
    else if(h==3)cout<<80;
    else if(h==4)cout<<110;
    else if(h==5)cout<<145;
    else if(h==6)cout<<180;
    else if(h>=7)cout<<250;
    }else cout<<"ERROR";
    return 0;
}