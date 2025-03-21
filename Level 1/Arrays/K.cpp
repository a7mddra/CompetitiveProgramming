#include<stdio.h>
int main()
{
    int arr[102],i,n,t=0,c,m,sum=0,cnt=0,av,k;
    while(scanf("%d",&n)==1 && n!=0)
    {
       sum=0;
       cnt=0;
        for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
                sum=sum+arr[i];
            }
            av=sum/n;
            for(i=0;i<n;i++)
            {
 
                if(arr[i]>av)
                    cnt=cnt+arr[i]-av;
            }
            t++;
 
       printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,cnt);
    }
 
    return 0;
}
