#include <stdio.h>
#include <stdlib.h>
void Dijkstar(int c[10][10],int n,int s)
{
    int i,u,v,co=1,di[10],vi[10],mi;
    for(i=1;i<=n;i++)
    {
        vi[i]=0;
        di[i]=c[s][i];
    }
    vi[s]=1;
    di[s]=0;
    while(co<=n)
    {
      mi=999;
      for(i=1;i<=n;i++){
        if(vi[i]==0&&di[i]<mi){
            mi=di[i];
            u=i;
        }
      }
      vi[u]=1;
      co++;
      for(i=1;i<=n;i++)
      {
          if(di[i]>di[u]+c[u][i])


            di[i]=di[u]+c[u][i];
      }
    }
    printf("\n shortest path from %d",s);
    for(i=1;i<=n;i++){
        printf("\n %d to %d  = %d",s,i,di[i]);
    }
}
int main()
{
    int n,c[10][10],i,j,s;
    printf("\nRead number of nodes :");
    scanf("%d",&n);
     printf("\nRead source vertex \n");
    scanf("%d",&s);
     printf("\n Read cost matrix \n");
     for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&c[i][j]);
            if(c[i][j]==0)
                c[i][j]=999;
        }
     }
    Dijkstar(c,n,s);
    return 0;
}

