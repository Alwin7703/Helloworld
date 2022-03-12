#include<stdio.h>
void main()
{
    int arr[5],i;
    for (i=0;i<=4;i++)
    {
        printf("enter number %d = ",i+1);
        scanf("%d",&arr[i]);

    }
    for (i=0;i<=4;i++)
    {
        printf("%d\t",arr[i]);
    }

    int max=arr[0];
    for (i=0;i<=4;i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("\n Maximum number = %d",max);
    
    
}