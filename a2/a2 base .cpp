// Write code below 💖
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    vector<int> b12;
    int n,z;
    cin >> n;
    z=n;
    while(z>0){
        if(z%16<10){
          int c='0'+(z%16);
            b12.push_back(c);
        }else{
          int c='A'+(z%16-10);
          b12.push_back(c);
        }
        z=z/16;
    }
    reverse(b12.begin(),b12.end());
    int i;
    for(i=0;i<b12.size();i++){
      cout<<char(b12[i]);
    }
    return 0;
}
