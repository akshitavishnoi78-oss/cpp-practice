/*Define a class to represent a bank account. Include the following members: a. Data Members
i. Name of the depositor
ii. Account Number
iii. Type of account
iv. Balance amount in the account
b. Member Function
i. To assign initial values
ii. To deposit an amount
iii. To withdraw an amount after checking the balance
iv. To display name and balance Write a main function to test the program.*/
/*
#include<iostream>
using namespace std; 
class bankAccount{
    private:
    char name[20];
    long long accNo; 
    char type[20]; 
    long long amount; 

    public:
    void get(){
        cout<<"Enter the name, banktype,account no and amount: "<<endl; 
        cin>>name>>type;
        cin>>accNo>>amount; 
    }
    void depositAmount(){
        cout<<"Enter the amount you want to deposit:"<<endl; 
        int n; 
        cin>>n; 
        amount = amount + n; 
        cout<<amount; 
    }
    void withdrawAmount(){
        cout<<"Bank balance amount is"<<amount<<endl; 
        int x;
        cout<<"Enter the amount you want to withdraw: "<<endl; 
        cin>>x; 
        if(x>amount){
            cout<<"Not enough balance."<<endl; 
        }
        else{
            cout<<amount-x; 
        }
        amount = amount - x; 
    }
    void nameandbalance(){
        cout<<"Names of the account holders:"<<name<<endl; 
        cout<<"Bank balance:"<<amount<<endl; 
    }
}; 
int main(){
    bankAccount b1,b2,b3; 
    b1.get();
    b2.get();
    b3.get();
    b1.depositAmount();
    b2.depositAmount();
    b3.depositAmount();
    b1.withdrawAmount();
    b2.withdrawAmount();
    b3.withdrawAmount(); 
    b1.nameandbalance();
    b2.nameandbalance();
    b3.nameandbalance(); 
    return 0; 
}
*/ 
/*Write a class to represent a vector (a series of float values), include member function to perform the
following tasks: a. To create the vector
b. To modify by a scalar element
c. To multiply by a scalar value
d. To display the vector in the form (10, 20. 30 ....)*/
/*
#include<iostream>
using namespace std; 
class Vector{
    private:
    float v[10];
    int size; 
    public:
    void create(){
        cout<<"Enter the vector size"; 
        cin>>size; 
        for(int i=0;i<size;i++){
            cout<<"Enter the vector elements:"; 
            cin>>v[i]; 
        }
    }
    void modifyscalar(){
        float s; 
        cout<<"Enter scalar:";
        cin>>s;
        for(int i=0;i<size;i++){
            v[i] = v[i] + s;
        }
    }
    void multiplyscalar(){
        float s; 
        cout<<"Enter scalar:"; 
        cin>>s; 
        for(int i=0;i<size;i++){
            v[i] = v[i]*s;
        }
    }
    void display(){
        cout<<"(";
        for(int i=0;i<size;i++){
            cout<<v[i]; 
            if(i != size - 1){
                cout<<","; 
            }
        }
        cout<<")"<<endl; 
    }
}; 
int main(){
    Vector vec; 
    vec.create();
    vec.modifyscalar();
    vec.multiplyscalar();
    vec.display(); 
    return 0; 
}
*/ 
/*WAP in C++with the following requirements:
(i) Create a class called Second with int type person id
(ii) Create a default and parameterized constructors
(iii) Create two objects. obj1 will call default constructor to print person id, obj1 will call

the parameterized constructor to print person id*/
/*
#include<iostream>
using namespace std; 
class Second{
    private:
    int personid; 
    public:
    Second(){
        personid = 0; 
    }
    Second(int x){
        personid = x; 
    }
    void get(){
        cin>>personid; 
    }
    void display(){
        cout<<personid; 
    }
}; 
int main(){
    Second obj1;
    obj1.get();
    obj1.display(); 
    Second obj2(678);
    cout<<endl; 
    obj2.display(); 
    return 0; 
}
*/ 
/*Write a C++ program to print the area of a rectangle by creating a class named Area having two
functions. First named setDim() that takes length and breadth of the rectangle and the second named
getArea() that retunrs the area of the rectangle.*/
/*
#include<iostream>
using namespace std; 
class Area{
    private:
    double length; 
    double breadth;
    double area; 
    public:
    void setDim(){
        cout<<"Enter the length:"<<endl; 
        cin>>length; 
        cout<<"Enter the breadth:"<<endl; 
        cin>>breadth; 
    }
    void getArea(){
        area = length*breadth; 
    }
    void display(){
        cout<<"Length:"<<length<<endl; 
        cout<<"Breadth:"<<breadth<<endl; 
        cout<<"Area:"<<area<<endl; 
    }
}; 
int main(){
    Area R1; 
    R1.setDim(); 
    R1.getArea(); 
    R1.display(); 
    return 0; 
}
*/ 
/*Write a C++ program to create a class that can hold private data members such as – Enrolment
number, Name, Branch and CGPA. Include the constructorsfor initialising data members as follows,
(i) Initialise the enrolment no., name, branch and CGPA
(ii) Initialise the enrolment no., name, CGPA (Default branch=’CSE’)
(iii) Initialise enrolment no., name, branch and CGPA with default values [1,
“Unknown”, “CSE”, 6]
Also include get and set functions for each of the data members. Create objects to call different
constructors and update CGPA value of any of the objects created. Display the updated CGPA along
with the student’s detail on the console.*/
/*
#include<iostream>
#include<cstring> 
using namespace std; 
class Details{
    private:
    long long enrollno; 
    char name[20]; 
    char Branch[20];
    int CGPA; 
    public:
    Details(){
        enrollno = 0; 
        name[0] = '\0';
        Branch[0] = '\0'; 
        CGPA = 0; 
    }
    Details(const char *x){
        enrollno = 0;
        name[0] = '\0';
        strcpy(Branch,x);  
        CGPA = 0; 
    }
    Details(long long a, const char *b, const char *c, int d){
        enrollno = a; 
        strcpy(name,b);  
        strcpy(Branch,c); 
        CGPA = d; 
    }
    void get(){
        cout<<"Enter enroll no. , name, Branch, CGPA";
        cin>>enrollno; 
        cin>>name>>Branch; 
        cin>>CGPA; 
    }
    void display(){
        cout<<"Enroll no:"<<enrollno<<endl; 
        cout<<"Name: "<<name<<endl; 
        cout<<"Branch: "<<Branch<<endl; 
        cout<<"CGPA"<<CGPA<<endl; 
    }
};
int main(){
    Details ob1; 
    ob1.get();
    ob1.display(); 
    Details ob2("CSE"); 
    ob2.display(); 
    Details ob3(1,"Unknown","CSE",6); 
    ob3.display(); 
    return 0; 
}
    */ 
/*WAP in C++ to create a class Wall having private data members length and
height. Create a parameterized constructor and a copy constructor to
initialize these private data members. Define a member function to return
the area. Demonstrate the working of each member function.*/
/*
#include<iostream>
using namespace std; 
class Wall{
    private: 
    int length; 
    int height;
    int area; 
    public:
    Wall(){
        length = 0; 
        height = 0; 
    }
    Wall(int x, int y){
        length = x; 
        height = y; 
    }
    Wall(const Wall &w2){
        length = w2.length; 
        height = w2.height; 
    }
    void calcArea(){
        area = length*height; 
    }
    int getarea(){
        return area; 
    }
}; 
int main(){
    Wall w1(10,15); 
    w1.calcArea(); 
    Wall w2 = w1; 
    w2.calcArea(); 
    cout<<w1.getarea()<<endl; 
    cout<<w2.getarea()<<endl; 
    return 0; 
}
    */ 
/*Create a class String with two private members (char * s; and int size;) to
store a string and it’s length. Define a constructor, a copy constructor and a
destructor. Add a member function that prints the string. Demonstrate the
working of each function.*/
/*
#include<iostream>
#include<cstring> 
using namespace std; 
class String{
    private:
    char *s;
    int size; 
    public:
    String(){
        size = 0; 
        s = new char[1]; 
        s[0] = '\0'; 
    }
    String(const char*str){
        size = strlen(str);
        s = new char[size+1]; 
        strcpy(s,str); 
    }
    String(const String &s2){
        size = s2.size; 
        s = new char[size + 1]; 
        strcpy(s,s2.s);  
    }
    void display(){
        cout<<"String: "<<s<<endl; 
        cout<<"Length: "<<size<<endl; 
    }
    ~String(){
        delete[] s; 
        cout<<"Destructor called"<<endl; 
    }
}; 
int main(){
    String s1("Hello"); 
    String s2 = s1; 
    s1.display(); 
    s2.display(); 
    return 0; 
}
    */ 
/*Create a class Rectangle with private data members length and breadth.
Implement a default constructor that sets both dimensions to 1, and a
parameterized constructor that accepts values for length and breadth. Write a
member function to calculate the area and demonstrate both constructors.*/
/*
#include<iostream>
using namespace std; 
class Rectangle{
    private:
    int length; 
    int breadth; 
    public:
    Rectangle(){
        length = 1;
        breadth = 1; 
    }
    Rectangle(int x, int y){
        length = x; 
        breadth = y; 
    }
    Rectangle(const Rectangle& ob2){
        length = ob2.length; 
        breadth = ob2.breadth; 
    }
    void get(){
        cout<<"Enter length:"<<endl; 
        cin>>length; 
        cout<<"Enter breadth:"<<endl; 
        cin>>breadth; 
    }
    void display(){
        cout<<"Length:"<<length<<endl; 
        cout<<"Breadth"<<breadth<<endl; 
        cout<<"Area:"<<length*breadth<<endl; 
    }
}; 
int main(){
    Rectangle ob1; 
    ob1.display(); 

    Rectangle ob3; 
    ob3.get(); 
    ob3.display(); 

    Rectangle ob2 = ob1; 
    ob2.display(); 

    return 0; 
}
    */ 
/*
#include<iostream> 
using namespace std; 
class Student{
    private:
    string name; 
    long long roll_no; 
    int marks; 
    public:
    Student(){
        name = " "; 
        roll_no = 0; 
        marks = 0; 
    }
    Student(string x, long long y, int z){
        name = x; 
        roll_no = y; 
        marks = z; 
    }
    Student(const Student& ob2){
        name = ob2.name; 
        roll_no = ob2.roll_no; 
        marks = ob2.marks; 
    }
    void get(){
        cout<<"Name:"<<endl; 
        cin>>name; 
        cout<<"Roll Number:"<<endl; 
        cin>>roll_no; 
        cout<<"Marks:"<<endl; 
        cin>>marks; 
    }
    void display(){
        cout<<"Name:"<<name<<endl; 
        cout<<"Roll Number:"<<roll_no<<endl; 
        cout<<"Marks:"<<marks<<endl; 
    }
}; 
int main(){
    Student ob1; 
    ob1.display(); 
    Student ob2 = ob1; 
    ob2.display(); 
    Student ob3("Akshita",992501030440,98); 
    ob3.display(); 
    Student ob4; 
    ob4.get(); 
    ob4.display(); 
    return 0; 
}
    */ 
/*
#include<iostream> 
using namespace std; 
class Point{
    private:
    int x; 
    int y; 
    public:
    Point(){
        x=0; 
        y=0; 
    }
    Point(int a, int b){
        x = a; 
        y = b; 
    }
    Point(const Point& ob3){
        x = ob.x; 
        y = ob.y; 
    }
    void display(){
        cout<<"("<<x<<" , "<<y<<")"<<endl; 
    }
}; 
int main(){
    Point ob1; 
    ob1.display(); 
    Point ob2(4,5);
    ob2.display(); 
    Point ob3 = ob2; 
    ob3.display(); 
    return 0; 
}
    */ 
/*
#include<iostream>
using namespace std; 
class Distance{
    private: 
    int feet; 
    int inches; 
    public: 
    Distance(){
        feet = 0; 
        inches = 0; 
    }
    Distance(int x, int y){
        feet = x; 
        inches = y; 
    }
    friend void compareDistance(Distance d1, Distance d2); 
}; 
void compareDistance(Distance d1, Distance d2){
    int total1 = d1.feet*12 + d1.inches; 
    int total2 = d2.feet*12 + d2.inches; 
    if(total1>total2){
        cout<<"First distance is larger"<<endl; 
    }
    else if(total2>total1){
        cout<<"Second distance is larger"<<endl; 
    }
    else{
        cout<<"Both distances are equal"<<endl; 
    }
}
int main(){
    Distance d1(5,8); 
    Distance d2(6,2); 
    compareDistance(d1,d2); 
    return 0; 
}
    */ 
/*
#include<iostream>
using namespace std; 
class Account{
    long long balance; 
    long long accountNo; 
    public: 
    Account(){
        balance = 0; 
        accountNo = 0; 
    }
    Account(long long x, long long y){
        balance = x; 
        accountNo = y; 
    }
    void display(){
        cout<<"Balance:"<<balance<<endl; 
        cout<<"Account Number:"<<accountNo<<endl; 
    }
    friend void transferFunds(Account a1, Account a2); 
};
void transferFunds(Account a1, Account a2){
     long long s; 
     cout<<"Enter thr amount you want to transfer: "<<endl; 
     cin>>s; 
     long long newacc1 = a1.balance - s; 
     long long newacc2 = a2.balance + s; 
     cout<<"New balance in account 1:"<<newacc1<<endl; 
     cout<<"New balance in account 2:"<<newacc2<<endl; 
    } 
int main(){
    Account ob1; 
    ob1.display(); 
    Account ob2(45000,23456); 
    Account ob3(50000,34568);
    transferFunds(ob2,ob3); 
    return 0; 
}
*/ 
/*
#include<iostream> 
using namespace std; 
class Time{
    private: 
    int hours; 
    int minutes; 
    int seconds; 
    public: 
    Time(){
        hours = 0; 
        minutes = 0; 
        seconds = 0; 
    }
    Time(int x, int y, int z){
        hours = x; 
        minutes = y; 
        seconds = z; 
    }
    void display(){
        cout<<"Time is :"<<hours<<":"<<minutes<<":"<<seconds<<endl; 
    }
    friend void addTime(Time t1, Time t2); 
}; 
void addTime(Time t1, Time t2){
     int newhours = t1.hours + t2.hours; 
     int newminutes = t1.minutes + t2.minutes; 
     int newseconds = t1.seconds + t2.seconds; 
     if(newseconds>=60){
        newminutes = newminutes + newseconds/60; 
        newseconds = newseconds%60; 
     }
     if(newminutes>=60){
        newhours = newhours + newminutes/60; 
        newminutes = newminutes%60; 
     }
     cout<<"New time is:"<<newhours<<":"<<newminutes<<":"<<newseconds; 
}
int main(){
    Time t3; 
    t3.display(); 
    Time t1(2,55,34); 
    t1.display(); 
    Time t2(3,45,23); 
    t2.display(); 
    addTime(t1,t2); 
    return 0; 
}
    */ 
/*
#include<iostream>
using namespace std; 
class Complex{
    private:
    int real;  
    int img; 
    public:
    Complex(){
        real = 0; 
        img = 0; 
    }
    Complex(int a, int b){
        real = a; 
        img = b; 
    }
    Complex operator+(Complex ob){
        Complex temp; 
        temp.real = real + ob.real; 
        temp.img = img + ob.img; 
        return temp; 
    }
    void display(){
        cout<<"First complex number:"<<real<<"+"<<"i"<<img<<endl; 
    }
}; 
int main(){
    Complex ob1(3,5);
    Complex ob2(7,8); 
    Complex ob3 = ob1 + ob2; 
    ob3.display(); 
}
    */ 
/*
#include<iostream>
using namespace std; 
class Add{
    private:
    int x; 
    public:
    Add(){
        x = 0; 
    }
    Add(int a){
        x = a; 
    }
    void operator++(){
        ++x; 
    }
    void operator++(int){
        x++; 
    }
    void display(){
        cout<<x; 
    }
}; 
int main(){
    Add ob1(5); 
    ++ob1; 
    ob1.display(); 
    ob1++; 
    ob1.display(); 
    return 0; 
}
    */ 
/*
#include<iostream> 
#include<cstring> 
using namespace std; 
class Box
{
    int capacity; 
public:
     Box(){}
     Box(double capacity){
        this->capacity=capacity; 
     }
     bool operator>(const Box &b)const{
        return capacity>b.capacity; 
     }
}; 
int main(int argc, char const *argv[])
{
    Box b1(10); 
    Box b2 = Box(14); 
    if(b1>b2){
        cout<<"Box 1 has large capacity"; 
    }
    else{
        cout<<"Box 2 has large capacity"; 
    }
    return 0; 
}
*/ 
/*
#include<iostream> 
#include<cstring> 
using namespace std;
class sale{
    float arr[3]; 
    public:
    void getdata(){
        for(int i=0;i<3;i++){
            cin>>arr[i]; 
        }
    }
    void putdata(){
        for(int i=0;i<3;i++){
            cout<<arr[i]; 
        }
    }
}; 
class Publication{
    string title; 
    float price; 
    public:
    void getdata(){
        cout<<"Enter Title:"<<endl; 
        cin>>title; 
        cout<<"Enter price:"<<endl; 
        cin>>price; 
    }
    void putdata(){
        cout<<"Ttile:"<<title<<endl; 
        cout<<"Price:"<<price<<endl; 
    }
}; 
class book : public Publication, public sale{
    int pageCount; 
    public: 
    void getdata(){
        Publication::getdata(); 
        sale::getdata(); 
        cout<<"Enter the page count:"<<endl; 
        cin>>pageCount; 
    }
    void putdata(){
        Publication::putdata(); 
        sale::putdata(); 
        cout<<"Page Count: "<<pageCount<<endl; 
    }
}; 
class tape : public Publication, public sale{
    float minutes; 
    public: 
    void getdata(){
        Publication::getdata(); 
        sale::getdata(); 
        cout<<"Enter playtime:"<<endl; 
        cin>>minutes; 
    }
    void putdata(){
        Publication::putdata(); 
        sale::putdata(); 
        cout<<"Playtime:"<<minutes<<endl; 
    }
}; 
int main(){
    book b; 
    tape t; 
    b.getdata(); 
    b.putdata(); 
    t.getdata(); 
    t.putdata(); 
    return 0; 
}
*/ 
#include<iostream>
#include<cstring> 
using namespace std; 
class bank{
    int balance; 
}