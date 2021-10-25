#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   
    int q[1000][2];
    string * s= new string[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    string a[8][8];
    for(int i=0;i < 8;i++){
        for(int j=0;j<8;j++){
            a[i][j]='0';
        }
    }

    for (int i = 0; i < n; i++){
        if(s[i][0]=='A'){
        q[i][0]= 0;
        }
        else if(s[i][0]=='B'){
        q[i][0]= 1;
        }
        else if(s[i][0]=='C'){
        q[i][0]= 2;
        }
        else if(s[i][0]=='D'){
        q[i][0]= 3;
        }
        else if(s[i][0]=='E'){
        q[i][0]= 4;
        }
        else if(s[i][0]=='F'){
        q[i][0]= 5;
        }
        else if(s[i][0]=='G'){
        q[i][0]= 6;
        }
        else if(s[i][0]=='H'){
        q[i][0]= 7;
        }

        if(s[i][1]=='1'){
        q[i][1]= 0;
        }
        else if(s[i][1]=='2'){
        q[i][1]= 1;
        }
        else if(s[i][1]=='3'){
        q[i][1]= 2;
        }
        else if(s[i][1]=='4'){
        q[i][1]= 3;
        }
        else if(s[i][1]=='5'){
        q[i][1]= 4;
        }
        else if(s[i][1]=='6'){
        q[i][1]= 5;
        }
        else if(s[i][1]=='7'){
        q[i][1]= 6;
        }
        else if(s[i][1]=='8'){
        q[i][1]= 7;
        }

        


    }
//for(int i=0; i< n;i++){
//    cout << q[i][0]<< " "<< q[i][1]<< endl;
//}
    

    for(int k=0;k<n;k++){
        for(int i=0;i < 8;i++){
        for(int j=0;j<8;j++){
            if(q[k][0]==i && q[k][1]==j){
                a[i][j]='*';
            }
        }
    }
    }
    for(int i=0;i < 8;i++){
        for(int j=0;j<8;j++){
        cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}