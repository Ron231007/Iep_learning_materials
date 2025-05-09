//This is one of the more important concept to understand for ur end of module quiz.
//local vs global variable
//any function will always look for local variable declared in it before looking at global variables.
// Therefore, if there is local variable i and global variable i, the value of i used in the function will be the one of local variable value

//When we pass in values into a function, they are called parameters. We pass them by value. This means there is no change to the value passed into the function
//When u see a parameter, 1) determine the value
                        //2) replaced all the parameters defined in the function with the value
                        //3)work out the return value 

#include<iostream>
using namespace std;
int i=0;                  //global variable


int sum(int a, int b);
void print_global_i_value();
void print_local_i_value();
int pass_by_value(int i);
void increment_global_variable();

int main(){
    
    int i =2;
    print_global_i_value();
    print_local_i_value();
    cout<<"i local value in main function: "<<i<<endl;
    cout<<"i value increment by function: "<<pass_by_value(i)<<endl;
    cout<<"Noticed that the value for i declared in main is still "<<i<<" and not 3";
    cout<<"\nFor global variables, if a function changes the value stored in the variable, the value of the variable changes when accessed in all other functions.\n";
    increment_global_variable();
    
    cout<<"To access global variable value, u can add :: infront of the variable like this ::i.\ni global variable value is "<<::i<<" and not 0";
    
    ::i++;

    
    


    
    return 0;
}

int sum(int a, int b){               //int(return value type) sum(function name) (int a, int b)(a, b are parameters){
                                     //function initilization (aka. define wat the function do)
                                     //return to return some value of type defined earlier when the function is called
                                     //}
    return (a+b);
}


void print_global_i_value()
{
    cout<<"i global variable value: "<<i<<endl;
    return;
}


void print_local_i_value()
{
    int i =1;
    cout<<"i value declared in a function: "<<i<<endl;
    return;
}

int pass_by_value(int i){
    i++;
    return i;
}

void increment_global_variable()
{
    i++;
    return;
}