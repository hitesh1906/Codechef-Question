/* Click or copy the link below to view question */
/* Do login into codechef before opening the link below */

//https://www.codechef.com/JAN21C/problems/DECODEIT

#include <stdio.h>
#include<math.h>
int function1(char arr[],int j)
{
    int m=0;
    int sum=0;
    for(int i=j+3;i>=j;i--)
    {
        sum=sum+(arr[i]-48)*(pow(2,m));
        m++;
    }
    return sum;
}
int main() 
{
    int t;
    scanf("%d",&t);
    char alp[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    while(t--)
    {
        int N;
        scanf("%d",&N);
        char arr[N];
        scanf("%s",arr);
        int main_loop=N/4,j=0;

        while(main_loop--)
        {
            int u=function1(arr,j);
            printf("%c",alp[u]);
            j=j+4;
        }
        printf("\n");
    }
return 0;
}