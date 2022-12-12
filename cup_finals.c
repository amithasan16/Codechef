#include<stdio.h>
int main()
{
    int i,t,x,y,d,sub=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&d);
        sub=x-y;
        if(sub<=d)
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
}