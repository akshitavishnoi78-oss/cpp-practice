//pass by refernce and value. 
/*pass by value - like we take a copy and then make the alterations, original remains unchanged.
pass by refernce - we make the alterations in the original itself, this is pass by refernce.  */
/*PASS BY VALUE - copy of variable is made. all the changes made to it in the function do not affect the original variable. 
PASS BY REFERNCE - all the changes made in function affects the original variable.*/
// pass by value
#include<iostream>
using namespace std; 
void modify(int a){
    a = a+10;
}
int main(){
    int x = 5;
    modify(x);
    cout<<x<<endl; 
    return 0; 
}
// pass by refernce. 
void modify(int&a){
    a = a+10;
}
int main(){
    int x =5;
    modify(x);
    cout<<x<<endl;
    return 0; 
}