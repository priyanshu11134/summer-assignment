#include<stdio.h>
int main()
{
    int n,a=0,b=1c;
    printf("Enter numbers of terms: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        int next=a+b;
        a=b;
        b=next;
    }
    return 0;
}