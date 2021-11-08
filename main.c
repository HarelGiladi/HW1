#include <stdio.h>
#include"NumClass.h"


int main()
{
    int start=-1,end=-1;
  do{
      if(start<0){scanf("%d",&start);char c; scanf("%c",&c);}
      if(end<0){scanf("%d",&end);char c; scanf("%c",&c);}
  }while(start<=0 || end<=0);

    if(start>end)
    {
        int temp = start;
        start = end;
        end =temp;
    }

   
    printf("The Armstrong numbers are:");
   for(int i = start; i <= end; i++)
    {
        if(isArmstrong(i) == true)
        {
            printf(" %d",i);
        }
        
    }

     printf("\nThe Palindromes are:");
   for(int i = start; i <= end; i++)
    {
        if( isPalindrome(i) == true)
        {
            printf(" %d",i);
        }
        
    }

     printf("\nThe Prime numbers are:");
   for(int i = start; i <= end; i++)
    {
        if(isPrime(i) == true)
        {
            printf(" %d",i);
        }
        
    }

     printf("\nThe Strong numbers are:");
   for(int i = start; i <= end; i++)
    {
        if(isStrong(i) == true)
        {
            printf(" %d",i);
        }
        
    }
    printf("\n");
    
    
    return 0;
}