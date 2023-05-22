#include<stdio.h>
int main()

{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
   int ar[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos,value;
    printf("Enter the position and Value:");
    scanf("%d %d",&pos,&value);
    for(int i=n;i>=pos+1;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[pos]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",ar[i]);
    }



    return 0;
}
