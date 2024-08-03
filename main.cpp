#include "mbed.h"

/*
Lab 2: part of this lab we learned how to code a recursive funtion where by the function loops until
a defined number of loops are obtained. To demonstarte this a Fibonacci squence is simulated, the
first intial interger and intial subsquent interger of the squence are defined, then addtional function is
used to otain the next subsquent interger. The process is looped a set number of times, also defined.   
*/

/*
The next term is the sum of the previous two terms.
The first two terms of the Fibonacci sequence are 0 followed by 1.
*/
// main() runs in its own thread in the OS

int t_1 = 0;
int t_2 = 1;
int next_term = 0;

int max_terms = 10;


int fib(int n){
    // inp: position of the fib sequence
    // out: the number in that sequence
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return(fib(n-1) + fib(n-2));
    }

int main()
{
    printf("Finbonachi series loop: %d, %d, ", t_1, t_2);
    for(int i=2; i<max_terms; i++){
        next_term = t_1 + t_2;
        printf("%d, ",next_term);
        t_1 = t_2;
        t_2 = next_term;
    }
    printf("\r\n");

    printf("Finbonachi series recursize: ");
    for (int i=0;i<max_terms; i++){
        printf("%d, ", fib(i));
    }
    printf("\r\n");

    while (true) {

    }
}

