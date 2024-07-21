/*to print the patten 1 2 1 2 1 2
                      2 1 2 1 2 1
                      1 2 1 2 1 2
                      2 1 2 1 2 1
simple if row + coloumn =even print even and if odd print 2*/
#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if((i+j)%2==0){
                cout<<"1";
            }else{
                cout<<"2";
            }
        }
        cout<<endl;
    }
}