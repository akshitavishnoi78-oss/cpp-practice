//Always keep meaningful variable names
//Camel case is the format for naming variables 
#include <iostream>
using namespace std;
int main() {
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3)
    cout << "Largest number: " << n1;
    else if(n2 >= n1 && n2 >= n3)
    cout << "Largest number: " << n2;
    else
    cout << "Largest number: " << n3;
    return 0;
}