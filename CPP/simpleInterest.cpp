#include<bits/stdc++.h>
using namespace std;

int main(){
    int p,r,t;
    cin>>p>>r>>t;
    float si = (p*r*t)/100.0;

   cout<<si<<endl;
   if(si>50){
       cout<<"Pay the Tax";
   }else{
       cout<<"No Tax";
   }
   return 0;
}