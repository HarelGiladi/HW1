#include<stdio.h>
#include<math.h>
#include"NumClass.h"
//recursion



int isArmstrong(int x)
{
int tempx=x,power=0;
while(tempx!=0){tempx=tempx/10;power++;}
return isArmstrongHelp(x,x,power,0);
}

int isPalindrome(int x)
{
return(isPalindromeHelp(x,x,0));
}

int isPalindromeHelp(int original,int original_4_calculate, int revers){
    if(original_4_calculate<=0)
    {
        if(revers==original){return true;}
        return false;
    }

    revers=revers*10 + original_4_calculate%10;
    original_4_calculate=original_4_calculate/10;
   return isPalindromeHelp(original,original_4_calculate,revers);
}

int isArmstrongHelp(int original,int org_4_cal,int power,int sum)
{
    if(org_4_cal<=0)
    {
        if(sum==original){return true;}
        return false;
    }
    sum+=pow(org_4_cal%10,power);
    org_4_cal=org_4_cal/10;
    return isArmstrongHelp(original,org_4_cal,power,sum);
}