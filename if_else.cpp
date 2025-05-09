//This doc shows u how to "un-nest" if else statements by simply using the complment of the condition(adding !)

#include <iostream>
using namespace std;

void checkNumber(int num) {
    int choice;

    cout<<"Enter a number";
    cin>> choice;
       
    // if (num >= 0) {
    //     if (num % 2 == 0) {
    //     cout << "The number is a non-negative even number.\n" ;         //nesting of if else
    //     }
    // }
    
        

    if (num <=0) return ;
    if(num % 2 == 0) return;

     cout << "The number is a non-negative even number.\n" ;
}

void processUser(string name, int age, bool isVerified) {
    // if (!name.empty()) {
    //     if (age >= 18) {
    //         if (isVerified) {
    //             cout << "Access granted to " << name << "." << endl;                  //bad nesting of codes
    //         } else {
    //             cout << "User is not verified." << endl;
    //         }
    //     } else {
    //         cout << "User is underaged." << endl;
    //     }
    // } else {
    //     cout << "Invalid name." << endl;
    // }

    if(name.empty())                                                  //optimized code
    {
        cout<<"Invalid name";
        return;
    }

    if(age <18)
    {
        cout<<"User is underaged";
        return;
    }

    if(!isVerified) {
        cout << "User is not verified." << endl;
        return;
    
    }

    cout << "Access granted to " << name << "." << endl;
    return;

}

int main(){
    processUser("John",20,true);
}