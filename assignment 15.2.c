#include <stdio.h>
#include<math.h>
void input(int s,int a[s]);
int sml(int s,int a[s]);
int main()
{
   int s;
   printf("enter size of array:");
   scanf("%d",&s);
   int a[s];
   printf("enter element of array:");
   input(s,a);
   printf("smallest number of array is %d\n",sml(s,a));
return 0;
}
void input(int s,int a[s])
{
    int i;
    for(i=0;i<s;i++)
    scanf("%d",&a[i]);
}
int sml(int s,int a[s])
{
    int i;
    double min=+INFINITY;
    for(i=0;i<s;i++)
    {
        if(min>a[i])
        min=a[i];
    }
return min;
}