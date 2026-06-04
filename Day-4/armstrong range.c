//Q16 Write a program to Print Armstrong numbers in a range. 
#include<stdio.h>
#include<math.h>
int main()
{
    int lower,upper;
    printf("ENTER THE LOWER LIMIT : ");
    scanf("%d",&lower);

    printf("ENTER THE UPPER LIMIT : ");
    scanf("%d",&upper);
    
    for (int i=lower;i<=upper ; i++)
    {
        if(i == 0)
        {
        printf("0 ");
        continue;
        }
        int count=0,num1=i,orig=i,rem,sum=0;
        int temp=i;
        while (temp>0)
        {
            temp = temp / 10;
            count+=1;
        }
        while (num1>0)
        {
            rem=num1%10;
            sum=sum+pow(rem,count);
            num1=num1/10;
        }
        if (sum==orig)
            printf("%d ",orig);
    }
    return 0;
}