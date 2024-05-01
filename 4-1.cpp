#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int p,n,cp=0,cn=0,sp=0,sn=0;
    while(t--){
        cin>>p>>n;
        if(p>n){
            cp++;
        }else{
            cn++;
        }
        sp+=p;
        sn+=n;
    }
    if(cp>cn){
        cout<<"Positive side\n";
    }else if(cn>cp){
        cout<<"Negative side\n";
    }else{
        if(sp>sn){
            cout<<"Positive side\n";
        }else{
            cout<<"Negative side\n";
        }
    }
    cout<<cp<<" "<<cn<<"\n";
    cout<<sp<<" "<<sn<<"\n";


}