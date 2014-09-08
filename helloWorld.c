#include <stdio.h>

int bss_var;        /* Uninitialized global variable */
int data_var = 1;   /* Initialized global variable */
int main(int argc, char **argv)
{
  void *stack_var;            /* Local variable on the stack */
  stack_var = (void *)main;   /* Don't let the compiler */
                              /* optimize it out */
  printf("Hello, World! Main is executing at %p\n", stack_var);
  printf("This address (%p) is in our stack frame\n", &stack_var);
  /* bss section contains uninitialized data */
  printf("This address (%p) is in our bss section\n", &bss_var);
  /* data section contains initializated data */
  printf("This address (%p) is in our data section\n", &data_var);

  printf("\n");
  printf("Hi this is Mark A. Yoder\n");
  // Add your name here.  Be sure it still compiles.
  printf("This is Eric Taylor\n"); 
  printf("Me again\n");
  printf("Hi this is Kyle Daruwalla.\n");
<<<<<<< HEAD
  printf("Wazuppp\n");
  printf("Hi this is Caio Silva. \n");	 
 return 0;
=======

  return 0;
>>>>>>> 206ea07c463657a2fe7943bb014a051bdd581b51
}
