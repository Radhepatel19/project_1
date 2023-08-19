#include<stdio.h>
void main()
{
    int a[100],i,j,n,temp;
    int sum=0;
    printf("enter youe number=");
    scanf("%d",&n);

    printf("enter your %d element:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("your accending order:%d\n",a[i]);
    }
}