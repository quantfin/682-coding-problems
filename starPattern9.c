C program to print following pattern:

ABCDCBA
ABC DCB
AB   CB
A     B



code:


#include<stdlib.h>
#include<stdio.h>

int main()

{
    int i,j;
    char k;

    for(int i =1 ; i<=4 ; i++)
    {
         k='A';
        for(int j=1 ; j<= 7 ; j++)
      {

        if(j<=5-i || j>=3+i)
        {
            printf("%c",k);
          j<4?k++:k--;
        }
        else
        {
            printf(" ");

        }             


      }   
                printf("\n");


    }    

}
