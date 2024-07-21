//straight triangle *
                /*  **
                    ***
                    ****    
in this there is row moving from 1 to n and coloumn are equal to the no of 
 row number like in 1st row 1 star and 2nd row 2star and soonnnnnnn
 so it is moving with i only for i=1 row stars are 1 and 2 row stars are 2
 so rows =i*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){//to print rows 1 to n
        for(int j=1;j<=i;j++){//to print coloums 1 to i as i stars are present!!
            cout<<"*";
        }
        cout<<endl;
    }
}