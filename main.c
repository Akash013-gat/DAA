#include <stdio.h>
#include <stdlib.h>
#define size 100
int c;
void merge(int a[size],int l,int r,int m)
{
    int i,j,k,b[size];
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=r)
    {
        c++;
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];

    }
    while(i<=m)
        b[k++]=a[i++];
    while(j<=r)
        b[k++]=a[j++];
    for(i=l;i<=r;i++)
        a[i]=b[i];
}
void mergesort(int a[size],int l,int r)
{
int m;
if(l<r)
{
    m=(l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,r,m);
}
}

int main(){
int a[size],n,i;
printf("Array size:::");
scanf("%d",&n);
printf("\nArray elements:");
for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
mergesort(a,0,n-1);
printf("\nSorted array:\n");
for(i=0;i<=n-1;i++)
    printf("%d\t",a[i]);
printf("The number of comparisons= %d",c);
return 0;
}

