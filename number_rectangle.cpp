/*to print 1 2 3 4 5
           1 2 3 4 5
           1 2 3 4 5
           1 2 3 4 5
           rows are moving from 1 to n
           and coloumns are moving from 1 to n*/
#include <iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){//for rows 
        for(int j=1;j<=n;j++){//for coloumns
            cout<<j;
        }
        cout<<endl;
    }
}