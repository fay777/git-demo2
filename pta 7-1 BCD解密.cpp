#include<stdio.h>
int main()
{
    int bcd[1000];
    int n;
    scanf("%d",&n);
    int i=0;
    if(n==0)
    {
    	bcd[i++]=0;
	}
    while(n!=0)
    {
        bcd[i++]=n%16;
        n=n/16;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%d",bcd[j]);
    }
    return 0;
}
