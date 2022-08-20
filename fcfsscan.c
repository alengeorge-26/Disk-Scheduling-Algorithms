#include<stdio.h>
#include<stdlib.h>

void fcfs(int [],int,int,int);
int main()
{
    int u,l,n,i,j,k,D[20];

    printf("\nEnter the lower and upper limit of disk : ");
    scanf("%d%d",&l,&u);

    printf("\nEnter the size of disk queue : ");
    scanf("%d",&n);
    printf("\nEnter the disk queue : ");
    for(i=1;i<=n;i++)
        scanf("%d",&D[i]);

    fcfs(D,n,u,l);
}
void fcfs(int D[],int n,int u,int l)
{
    int i,j,k,head,hm=0;

    printf("\nEnter the head pointer : ");
    scanf("%d",&head);

    D[0]=head;

    printf("\nSeek sequence in FCFS : ");
    for(i=0;i<=n;i++)
    {
        printf("%d  ",D[i]);
        if(i<n)
            hm=hm+abs(D[i]-D[i+1]);
    }

    printf("\n\nTotal head movements : %d\n",hm);
}