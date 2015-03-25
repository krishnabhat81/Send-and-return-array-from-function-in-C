#include <stdio.h>

/*
If you want to return a single-dimension array from a function, you would have to 
declare a function returning a pointer as in the following example:
*/

int *getRandom(int arr[])
{
  static int  r[10];
  /*Second point to remember is that C does not advocate to return the address of a 
  local variable to outside of the function so you would have to define the 
  local variable as static variable.*/
  int i;

  for ( i = 0; i < 10; ++i)
  {
     r[i] = arr[i]+1;//rand();
     printf( "r[%d] = %d\n", i, r[i]);

  }

  return r;
}

/* main function to call above defined function */
int main ()
{
   /* a pointer to an int */
   int *p;
   int i;
   int arris[10] = {110,22,33,44,5,6,7,8,9,20};

   p = getRandom(arris);
   for ( i = 0; i < 10; i++ )
   {
       printf( "*(p + %d) : %d\n", i, *(p + i));
   }

   return 0;
}
