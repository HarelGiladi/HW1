#include<stdio.h>
#include<math.h>
#include"NumClass.h"


int isPrime(int x)
{
   if(x==2){return true;}
   if(x%2==0){return false;}
    for(int i =2 ;i<x;i++)
    {
        if(x%i==0){return false;}
    }
    return true;
}

int isStrong(int x)
{
    int sum=0,temp=x;
    while(temp !=0)
    {
        sum+= factorial(temp%10);
        temp=temp/10;
    }
    if(sum==x){return true;}
    return false;
}


int factorial(int x)
{
    if(x<=1){ return 1;}
    return factorial(x-1)*x;
}
  
