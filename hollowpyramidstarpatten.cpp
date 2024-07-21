#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         for(int j=0;j<n-i;j++){//for coloumns of space 
            cout<<" ";
        }
         for(int j=0;j<(2*i-1);j++){//stars in the row
            if(i==0||i==n-1||j==0||j==(2*i-1-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}