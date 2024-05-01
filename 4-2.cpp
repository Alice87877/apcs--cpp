#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    char a[8][8];
    int m=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            a[i][j]=str[m++];
        }
    }

    int q,t,n;
    char s;
    cin>>q;
    while(q--){
        cin>>s>>t>>n;
        int ai,aj;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(s==a[i][j]){
                    ai=i;
                    aj=j;
                    break;
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(t==8){
                t=0;
            }
            for(int j=0;j<i;j++){
                if(t==0){
                    ai--;
                }else if (t==1){
                    ai--;
                    aj++;
                }else if (t==2){
                    aj++;
                }else if (t==3){
                    ai++;
                    aj++;
                }else if(t==4){
                    ai++;
                }else if(t==5){
                    ai++;
                    aj--;
                }else if(t==6){
                    aj--;
                }else{
                    ai--;
                    aj--;
                }
                if(ai<0){
                    ai=7;
                }
                if(ai>7){
                    ai=0;
                }
                if(aj<0){
                    aj=7;
                }
                if(aj>7){
                    aj=0;
                }
            }
            t++;
        }
        cout<<a[ai][aj]<<'\n';
    }
}