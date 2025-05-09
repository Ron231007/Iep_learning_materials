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

int main(){
    
    int i =2;
    cout<<"i value increment by function: "<<pass_by_value(i)<<endl;
    cout<<"i local value in main function: "<<i<<endl;
    print_global_i_value();
    print_local_i_value();


    
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