#include<iostream>
using namespace std;
/*
//while loop : while some condition si true,execute the code. 
int main(){
    int n;
    cin>>n; 
    int sum=0;
    int i=1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum; 
    return 0;
} 
//for loop 
int main(){
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0; 
}
// print the first multiple of 5 which is also a multiple of 7.
int main(){
    int i=5;
    while(true){
        if(i%7==0){
            cout<<i;
            break; 
        }
        i+=5;
    }
    return 0; 
}

int main(){
    for(int i=5; ;i+=5){
        if(i%7==0)(
            cout<<i;
            break; 
        )
    }
    return 0; 
}
//do while loop 
// print the sum of stream of N integers in the input using do-while loop. 
int main(){
    int n;
    cin>>n; 
    int sum=0; 
    do{
        int num;
        cin>>num;
        sum+=num;
        n--;
    }while(n>0);  
    cout<<sum;
    return 0; 
}
    
// find out the number of digits in a number. 
int main(){
    int n; //input of a number. 
    cin>>n; 
    int digits=0; 
    while(n>0){
        digits++; 
        n=n/10; 
    }
    cout<<digits; 
    return 0; 
}
// find the sum of digits of a  number. 
int main(){
    int n;
    cin>>n;
    int sum=0; 
    while(n>0){
        int lastdigit=n%10; 
        sum = sum+lastdigit;
        n/=10;  
    }
    cout<<sum<<endl; 
    return 0; 
}
    
// reverse the digit
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit; 
        n/=10; 
    }
    cout<<reverse<<endl;
    return 0; 
}

// find the sum of following series 1-2+3-4.....n 
int main(){
    int n;
    cin>>n; 
    int result=0;  
    if(int i=0;i<=n;i++){
        if(i%2==0){
            result = result-i; 
        }
        else{
            result = result+i; 
        }
    }
    cout<<result<<endl; 
    return 0; 
}

//print the first n factorial numbers. 
int main(){
    int n;
    cin>>n;
    int factorial = 1; 
    for(int i=1;i<=n;i++){
        factorial=factorial*i; 
        cout<<factorial<<endl; 
    }
    return 0; 
}

// given two numbers a and b, find a raise to the power b. 
int main(){
    int a,b;
    cin>>a>>b; 
    int result = 1; 
    for(int i=0;i<=b;i++){
        result = result*a;
        cout<<result<<endl; 
    }
    return 0; 
}
    */ 
int main(){
    int n=5;
    int factorial =1; 
    while(n>0){
        factorial*=n;
        n--;
    }
    cout<<"Factorial of 5 is "<<factorial<<endl; 
    return 0; 
}
    
