//printing patten for retangles with *
#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter n and m";
    cin>>n>>m;
    for(int i=0;i<n;i++){ //no of rows
        for(int j=0;j<m;j++){//no of coloums
            cout<<"*";
        }
        cout<<endl;//next lines
    }
}