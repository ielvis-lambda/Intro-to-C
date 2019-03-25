#include <stdio.h>
#include <stdlib.h>

/*
    Given a character array s (as a pointer), return the number of 
    characters in the string.
    
    Do not just use the `strlen` function from the standard libary.
*/
int string_length(char *s)
{
//   printf("*s is: %c\n", *s); 
//   printf("*s is: %d\n", &s); 
  
  int c;
  
  for (c = 0; s[c] != '\0'; c++) {
//    printf("%c\n", s[c]);
  }
  
  return (c-1);
}

/*
    Write a function that reverses the order of string s and outputs 
    the reversed string to the input array rv. The rv array will have 
    enough space for the reversed string. Don't forget to terminate 
    the reversed string with a null character. Return the rv array.
*/
char *reverse_string(char *rv, char *s)
{
  
  

  int stringLength = string_length(s);
  
  printf("length of array is: %d\n", stringLength);

  int c;
  //Set last elminate to a null character
  rv[stringLength + 1] = '\0';
  //loop through elements in quote starting at the end
  for (c = stringLength; c >= 0; c--) {
    printf("s[c] is: %c\n", s[c]);
    printf("c is: %d\n", c);
    // set first element to current element
    rv[stringLength - c] = s[c];
  }
  // return reversed string
  return rv;
  
  
}

#ifndef TESTING
int main(void)
{
    char quote1[] = "Don't forget to be awesome";
    char quote2[] = "a man a plan a canal panama";

    char rv[30];

    printf("The string 'Don't forget to be awesome' has %d characters.\n", string_length(quote1));
    printf("The string 'a man a plan a canal panama' reversed is: '%s'\n", reverse_string(rv, quote2));

    return 0;
}
#endif
