#ifndef _NUM_CLASS_
#define _NUM_CLASS_

    #define true 1
    #define false 0
    //true=1, false=0
    /* will return if a number is Armstrong number 
    An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
    For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
    */
    int isArmstrong(int x);
    /* will return if a number is a palindrome */ 
    int isPalindrome(int x);
    /* will return if a number is prime*/ 
    int isPrime(int x);
    /*Strong number is a special number whose sum of the factorial of digits is equal to the original 
    number. For Example: 145 is strong number
    1! + 4! + 5! = 145
    */
    int isStrong(int x);


    //for strongnumber
    int factorial(int x);
    //for palindrome in recursion
    int isPalindromeHelp(int original,int original_4_calculate,int revers);
    //for armstorng in recursion
    int isArmstrongHelp(int original,int org_4_cal,int power,int sum);


#endif