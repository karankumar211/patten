/* to print "  *  
              *** 
             *****
            *******   "
in this patten rows are moving from 1 to n and colloumns are moving from
there are two types 1 space and onther stars so for the space the are moving 
from 1 to n-rowno(i) or we can call inverted triangles and now stars are
moving in such a way that in 1st row  1star and second row 3stars and thord row
5stars by wich we can say that it is moving from 1 to 2*i-1   "*/
#include<iostream>
using namespace std;
int main(){
     int n;
     cin>>n;
     for(int i=1;i<=n;i++){//rows moving of stars
        for(int j=1;j<=n-i;j++){//for coloumns of space 
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){//stars in the row
            cout<<"*";
        }
        cout<<endl;
     }
}