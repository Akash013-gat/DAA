#include <stdio.h>
#include <stdlib.h>
#define size 100
int c;
void bubblesort(int a[size],int n)
{
    int i,j,t;
    for(i=0;i<=n-2;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {

        c++;
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
        }
        }
    }
}
int main()
{
    int i,a[size],n;
    printf("read Array :\n");
    scanf("%d",&n);
    printf("\n read array element\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubblesort(a,n);
    printf("\n Sorted element are \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
        printf("comparsion=%d\n",c);
    return 0;
}
