#include<iostream>
using namespace std;
int main(){
    int m[3][3];
    int n[3][3];
    for(int i=0;i<3;i++){  // input is 1 2 3
        for(int j=0;j<3;j++){      //  4 5 6
            cin>>m[i][j];          //  7 8 9
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){   // input is 4 5 8
        for(int j=0;j<3;j++){        // 0 0 8
            cin>>n[i][j];            // 1 2 0
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           m[i][j] += n[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){       // output is  5 7 11
        for(int j=0;j<3;j++){              // 4 5 14
            cout<<m[i][j]<<" ";            // 8 10 9
        }
        cout<<endl;
    }
}