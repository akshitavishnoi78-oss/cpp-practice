#include<iostream>
using namespace std;

int main(){
    int n1; 
    cout<<"Enter a number:"; 
    cin>>n1; 
    if(n1%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}
    
//nested if else statements 
int main(){
    int n2;
    cout<<"Enter marks";
    cin>>n2; 
    if(n2>33){
        if(n2>80){
            cout<<"Gracefully pass";
        }
        else{
            cout<<"Pass"; 
        }
    }
    else{
        cout<<"fail"; 
    }
    return 0; 
}
//switch case 
int main(){
    char character;
    cin>>character; 
    switch(character){
        case 'a':
        cout<<"Vowel"; 
        break; 
        case 'e':
        cout<<"Vowel";
        break; 
        case 'i':
        cout<<"Vowel";
        break;
        case 'o':
        cout<<"Vowel";
        break;
        case 'u':
        cout<<"Vowel";
        break; 
        default:
        cout<<"Consonant";
        break;
    }
    return 0; 
}

