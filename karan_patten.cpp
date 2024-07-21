/*to print k
           ka
           kar
           kara
           karan 
to print this patten we should know the knowledge to print star triangle 
to print star triangle rows moves from 1to n and coloum moves from 1 to i do makeing it 
noe in the first row we have to print k so int he first row and first coloumn we have to print 
k and on 2nd row ka so by appling if else statement we can do it */
#include <iostream>
using namespace std;

int main() {
    int rows = 5; // number of rows in the triangle

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1) {//to print k first row and first coloumn
                cout << "k";
            } else if(j == 2) {//2nd row and 2nd coloumn there are 2 elements so ka and moving soonn..........
                cout << "a";
            } else if(j == 3) {
                cout << "r";
            } else if(j == 4) {
                cout << "a";
            } else if(j == 5) {
                cout << "n";
            }
        }
        cout << endl;
    }

    return 0;
}