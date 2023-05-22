#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for( int i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0;
    for( int i=0;i<5;i++)
    {
        sum=sum+ar[i];
    }
    printf("%d\n",sum);


    return 0;
}
