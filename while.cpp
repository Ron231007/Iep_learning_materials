//in this doc, we will be going through while loops. While loops are used when
//you do not know how many times u have to repeat a certain number lines of code

#include<iostream>
using namespace std;


int main()
{
    int average, sum =0,num_count =0, choice =0;

    while(true){
        cout<<"Pls enter a positive integer or -1 to quit";               
        cin >> choice;

        if(choice <=0) break;                                     //notice this is the condition rather than while(choice <=0).
                                                                 //  This is because before the loop ends, they will add -1 to the sum and increment the num_count by one.
                                                                 // This is not what we want and will cause alot of trouble. However, exams seem to like to test the while(choice <=0). So do be familiar with it 

        sum += choice;
        num_count++;
        
    }

    if(sum >0) average = sum/(num_count);

    cout<<"Average is "<<average;
    
    return 0;
}