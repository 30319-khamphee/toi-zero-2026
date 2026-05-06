#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
    int n,in,i;
    vector <int> s,p;
    cin>>n;
      if(n==0){
          for(i=0;i<n;i++){
        cin>>in;
        s.push_back(in);
    }
        cout<<"Student: "<<endl;
        cout<<"Highest score: "<<0<<endl;
        cout<<"Lowest score: "<<0<<endl;
        cout<<"Average score: "<<0.0<<endl;
        cout<<"Student who scored above average:"<<endl;
    
          return 0;
      }
  
    if(n!=0){
        for(i=0;i<n;i++){
        cin>>in;
        s.push_back(in);
    }
        float anum=0;
        for(i=0;i<s.size();i++){
         anum=anum+s[i];
    }float a=anum/n;
    for(i=0;i<s.size();i++){
        if(s[i]>a){
            p.push_back(i+1);
        }
    }
    sort(s.begin(),s.end());
    int l=s[0];
    sort(s.rbegin(),s.rend());
    int h=s[0];
        cout<<"Student:";
        for(i=1;i<=n;i++){
        cout<<" Student"<<i;
        }cout<<endl;
    cout<<"Highest score: "<<h<<endl;
    cout<<"Lowest score: "<<l<<endl;
    cout<<fixed<<setprecision(1) ;
    cout<<"Average score: "<<a<<endl;
    cout<<"Students who scored above average:"<<endl;
    for(i=0;i<p.size();i++){
        cout<<"Student "<<p[i]<<endl;
    }
    }
    
    return 0;
    
    
}
