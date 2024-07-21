/*inverse triangle like *****
                        ***
                        **
                        *
in inverse triangle rows are moving from 1 to n and coloums are moving from m
1 to n-i+1 as in the first row there are n elements so n-1+1=n so it prints n stars
and in second row n-2+1=n-1 stars and sooonnnnnn*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){//condion for printing rows from 1 to n
        for(int j=1;j<=n-i+1;j++){//condition for printing rows with different stars
            cout<<"*";

        }
        cout<<endl;
    }
}