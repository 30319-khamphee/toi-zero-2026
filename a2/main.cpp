#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,in,i;
    vector <int> s,p;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>in;
        s.push_back(in);
    }sort(s.begin(),s.end());
    int l=s[0];
    sort(s.rbegin(),s.rend());
    int h=s[0];
    float anum=0;
    for(i=0;i<s.size();i++){
         anum=anum+s[i];
    }float a=anum/n;
    for(i=0;i<s.size();i++){
        if(s[i]>a){
            p.push_back(s[i]);
        }
    }
    cout<<"Student: ";
    for(i=1;i<=n;i++){
        cout<<"Student"<<i<<" ";
    }cout<<endl;
    cout<<"Highest score: "<<h<<endl;
    cout<<"Lowest score: "<<l<<endl;
    cout<<"Students who scored above average:"
    return 0;
    
}