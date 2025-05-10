/*
The first few Fibonacci sequence is as follows: 0 1 1 2 3 5 8 13 21 34...
where the 0th term is 0 and first term is 1. The following terms are the addition of the previous 2 terms. 

Write a function that returns the corr. fibonacci number when supplied with a integer. U should return -1 if n <0. 
Remember that Fib(0) =0 and fib(1) =1

Write a function that prints all the fibonacci sequence less than int n. U must print all numbers on a new line


Factorial: denotated with '!',  n factorial is basically the multiplication of all assending number from 1 up till n. 
For eg. 4! = 4*3*2*1. Note that if n is <0 return -1 and 0! =1

Write a function that returns the n! where n is an integer. 

Perfect squares are perfect if the square root of the number gives a integer. 
For eg, 81 and 36 is a perfect square since 81 = 9*9 and 36 = 6*6. 
        50 is not a perfect square since root50 != integer

WITHOUT using the cmath library and the exponent function, write a function that returns if a number is a perfect square.

*/

//solutions including the optimized solution

#include <iostream>
using namespace std;

void optimized_fib_less_than(int n)
{
    int f =0, s=1;
    int sum = f+s;
    cout<<f<<endl<<s<<endl;
    
    while(sum <n)
    {
        cout<<sum<<"\n";
        f =s;
        s=sum;
        sum =f+s;
    }
}

int fib(int n)
{
    if(n <0 ) return -1;
    if(n ==0) return 0;
    if (n ==1) return 1;
    
    int arr[n +1];
    arr[0] =0;
    arr[1] = 1;

    for(int i =2; i <=n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    return arr[n];
}

int fib_optimized(int n)
{
    if(n <0 ) return -1;
    if(n ==0) return 0;
    if (n ==1) return 1;
    
    int f =0, s=1, sum;
    
    for(int i =0; i < n-1; i++)
    {
        sum = f+s;
        f =s;
        s= sum;
    }
    
    return sum;
}


int factorial(int n )
{
    if (n <0) return -1;
    if(n ==0 || n ==1 ) return 1;
    
    return factorial(n-1) * n;
}

int factorial_optimized(int n)
{
    if(n<0) return -1;
    if(n ==0 || n ==1) return 1;
    
    int f= 1, fac;
    for(int i =2; i<=n; i++)
    {
        fac = i*f;
        f =fac;
    }
    
    return fac;
}

bool perfect_square(int n)
{
    if(n < 0) return -1;

    int length = n+1;
    int arr[length];

    for(int i =0; i <= (n+1);i++)
    {
        arr[i] = i;
    }

    int l = 0, r = length -1;

    while(l<=r)
    {
        int m = (l+r)/2;

        if(arr[m] *arr[m] == n) return true;
        
        else if(arr[m] *arr[m] < n)
        {
            l =m+1;
        }
        
        else{
            r = m-1;
        }
    }

    return false;

}





int main() {
    cout<<factorial_optimized(10);
    return 0;
}