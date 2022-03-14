#include<stdio.h>
#include<stdlib.h>
int a[10][10],q[10],visited[10],n,i,j,f=0,r=-1;
void bfs(int v);
void main()
{
	int v;
	printf("\n Enter the number of vertices:");
	scanf("%d",&n);
	printf("enter the adjecency matrix:\n");
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n;j++)
	  {
	   scanf("%d",&a[i][j]);
	  }
	}
	printf("\n Enter the starting vertex:");
	scanf("%d",&v);
	for (i=0;i<n;i++) 
	{
		q[i]=0;
		visited[i]=0;
	}
	bfs(v);
	printf("\n The node which are reachable are:\n");
	for (i=1;i<=n;i++)
	{
	  if(visited[i])
	  {
	   printf("%d\t",i);
	  }
	}
}

void bfs(int v)
{
	for (i=0;i<n;i++)
	{
	  if(a[v][i]&&!visited[i])
	   q[++r]=i;
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[f++]);
	}
}
