#include<iostream>
using namespace std;
int main(){
    int m[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j]  =  10;
        }
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          cout<<m[i][j]<<"  ";
        }
        cout<<endl;
    }
}
/*  output is 
10  10  10  10  10  
10  10  10  10  10
10  10  10  10  10
10  10  10  10  10
10  10  10  10  10*/