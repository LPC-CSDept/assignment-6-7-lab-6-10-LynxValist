//

#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &n, int &s){
    int temp;
    temp = n;
    n = s;
    s = temp;
}
void swap(int &n1, int &n2, int &n3){
    swap(n1, n2);
    swap(n1, n3);
}
void swap(int &na, int &nb, int &nc, int &nd){
    swap(na, nb, nc);
    swap(nb, nc, nd);
    swap(nc, nd, na);
    swap(nb, nc);
}


// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
