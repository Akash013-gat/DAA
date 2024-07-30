#include <stdio.h>
#include <stdlib.h>
void Prims(int c[10][10],int n)
{
    int i,j,v[10],ne=1,u,v1,mc=0,min;
    for(i=1;i<=n;i++)
        v[i]=0;
    v[1]=1;
    printf("\n Edge considered are \n");
    while(ne<n)
    {
        min=999;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
              if(c[i][j]<min){
              if(v[i]==1)
                 continue;
              else{
                min=c[i][j];
                u=i;
                v1=j;
              }
            }
        }
        }
   if(v[u]==0 || v[v1]==0)
   {
        printf("\n %d  %d=%d",ne++,u,v1,min);
        mc=mc+min;
        v[v1]=1;
   }
   c[u][v1]=c[v1][u]=999;
    }
     printf("\nCost Of Spanning tree is %d",mc);
}
int main()
{
    int n,c[10][10],i,j;
    printf("\nRead number of nodes :");
    scanf("%d",&n);
     printf("\n Read cost matrix \n");
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
                c[i][j]=999;
        }
     }
     Prims(c,n);
    return 0;
}
