#include <stdio.h>
#include <stdlib.h>

void dfs(int a[10][10],int n,int v[10],int s)
{
    int i;
    v[s]=1;
    for(i=1;i<=n;i++)
    {
        if(a[s][i]==1 && v[i]==0)
            dfs(a,n,v,i);
    }
}
int main()
{
    int n,a[10][10],i,j,v[10],c=0;
    printf("\n Read the number nodes : ");
    scanf("%d",&n);
    printf("\n Read adjaceny matrix \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=1;i<=n;i++)
        v[i]=0;
    for(i=1;i<=n;i++)
    {
        if(v[i]==0)
        {
            dfs(a,n,v,i);
            c++;
        }
    }
    if(c==1)
        printf("\n Graph connected,%d component",c);
    else
        printf("\n Graph not connected,%d component",c);
    return 0;
}
