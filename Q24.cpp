// 1
// 2* 3
// 4* 5* 6
// 7* 8* 9* 10
// 11* 12* 13* 14* 15
#include<iostream>
using namespace std;
int main(){
    int num=1;
    for(int row=0;row<5;row++){
        for(int col=0;col<row+1;col++){
            cout<<num;
            num++;
            if(col!=row){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}