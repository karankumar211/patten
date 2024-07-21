//hallow retangle 
#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter no of rows and coloumns";
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m){// condition to print stars in first row and last row
                cout<<"*";
            }
            else{
                cout<<" ";//printing space in left area
            }
        }
        cout<<endl;
    }
}