#include<stdio.h>
#include<conio.h>

int main()
{
    int num,temp,remainder,result=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp=num;

    while(num!=0)
    {
        remainder=num%10;
        result=(result*10)+remainder;
        num/=10;
    }

    if(result==temp)
        printf("%d is a Palindrome number\n",temp);
    else
        printf("%d is Not a Palindrome number\n",temp);
    
}