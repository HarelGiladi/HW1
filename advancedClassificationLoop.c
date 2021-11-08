#include<stdio.h>
#include<math.h>
#include"NumClass.h"
//atrativ


int isArmstrong(int x)
{
int power=0, tempx=x,sum=0, original=x;
while(tempx!=0){power++; tempx=tempx/10;}
while(x!=0){sum+=pow(x%10,power); x=x/10;}
if(original==sum){return true;}
return false;
}

int isPalindrome(int x)
{
int revers=0,tempx=x;
while(tempx!=0){revers=revers*10 +tempx%10; tempx=tempx/10;}
if(revers==x){return true;}
return false;
}

