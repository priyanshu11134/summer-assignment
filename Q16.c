include<stdio.h>
int main()
{
    int lower,upper,num,temp,digit,count;
    printf("Enter lower and upper limits: ");
    scanf("%d %d",&lower,&upper);
    for(num=lower; num<=upper; num++)
    {
        temp=num;
        count=0;
        while(temp>0)
        {
            digit=temp%10;
            count++;
            temp/=10;
        }
        printf("Number of digits in %d is %d\n",num,count);
    }
    return 0;
}
