//program to print following pattern

*********
**** ****
***   ***
**     **
*       *


code:

#include<stdlib.h>
#include<stdio.h>

int main()
{

  int i,j;
       for(i=1;i<=5;i++)
    {
            for(j=1;j<=9;j++)
            {
                 if(j<= 6-i || j>= 4+i )
              {
                 printf("*");
                // k=0;
              }

                 else
              {
                 printf(" ");
               //  k=1;
              }

            }


             printf("\n");
    }

}
