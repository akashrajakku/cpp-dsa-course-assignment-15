#include <stdio.h>
#include <math.h>
void input(int s,int a[s]);
int grt(int s,int a[s]);
int main()
{
   int s;
   printf("enter size of array:");
   scanf("%d",&s);
   int a[s];
   printf("enter element of array;");
   input(s,a);
   printf("greatest number of array is %d\n",grt(s,a));
return 0;
}
void input(int s,int a[s])
{
    int i;
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
}
int grt(int s,int a[s])
{
    int i;
    double max=-INFINITY;
    for(i=0;i<s;i++)
    {
        if(max<a[i])
        max=a[i];
    }
     return max;
}