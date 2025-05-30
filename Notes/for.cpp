//for loops are used when you know how many times u would like to repeat cetain number of lines of codes

#include<iostream>
using namespace std;

int main(){
    
    cout<<"Print Hello World 10 times:\n";
    for(int i =0;i<10;i++)
    {
        cout<<i+1<<")"<<"Hello World\n";                //this prints hello world 10 times
    }
    

    cout<<"\nPrint 9 to 1\n";
    for(int i=9; i>0;i--)
    {
        cout<<i;                    //prints 9 to 1 
    }
    
    cout<<"\n\n";
    
    int j =0;
    cout<<"Printing 0 to 9\n";
    for(j=0; j<10;j++)
    {
        cout<<j;                    //prints 0 to 9
    }
    cout<<endl<<"J value is "<<j<<" and not 9 after the for loop";                        //notice j is 10 not 9

    //loop through an array
    int arr[] = {1,2,3,4,5,6,7,8,9};

    int length = sizeof(arr)/sizeof(int);   //find number of integers in array called arr(length = 9)

    cout<<endl<<"\nNumbers in the array\n";
    for(int i =0; i<length; i++)             //loop through an array. Notice we start from 0 since index of integers in arr starts from 0 not 1 !!
    {
        cout<<arr[i];
    }
    
    
    
    return 0;
}