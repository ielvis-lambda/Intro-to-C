#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/

/*
    Start
*/
int fizzbuzz(int n)
{
  int counter = 0;
  printf("Int(n) is  : %d\n", n);
  printf("counter is : %d\n", counter);
  
    /* for loop execution */
   for( counter = 0; counter < n; counter = counter + 1 ){
      
    if ( counter % 3 == 0 && counter % 5 == 0 ) {   /* if iteration is
    divisible by 3 & 5*/
        printf ("FizzBuzz\n");}
       /* print 'FizzBuzz' */
      
    else if ( counter % 3 ==0 ) {   /* if iteration is divisible by 3 */
        printf ("Fizz\n"); /* print 'Fizz' */
    }

    else if ( counter % 5 ==0 ) {   /* if iteration is divisible by 3 */
        printf ("Buzz\n"); /* print 'Buzz' */
    }

    else  {   /* if iteration is divisible by 3 */
        counter = counter + 1;/* print 'counter' */
    }
    };
    return counter;
};

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);
    
    return 0;
}
#endif
