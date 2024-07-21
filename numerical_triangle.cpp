/*to print 12345
           23451
           34512
           45123
           51234*/
/*to print rows it is moving from 1 to n and coloumns are moving from two cases
one is i to n means it moves from 1 to n next in simple words 1 to 5 and in second row
2 to 5 and 3 to 5 so on it prints 1 2 3 4 5
                                  2 3 4 5
                                  3 4 5
                                  4 5
                                  5
and now next is to print onther half it moves from 1 to i-1to [rint onther half ]
                                  */
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){//to print rows from 1 to n
        for(int j=i;j<=n;j++){
            cout<<j;//first half triangle 
        }
        for(int j=1;j<=(i-1);j++){
            cout<<j;//to print onther half triangle 
        }
        cout<<endl;
    }
}