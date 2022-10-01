#include <stdio.h>
void input(int size,int a[size]);
int rev(int size,int a[size]);
int main()
{
    int size,n,d,b,p;
    printf("enter size of array:");
    int a[size];
    scanf("%d",&size);
    printf("enter elements of given array:");
    input(size,a);
    printf("Array after reversal is :");
    rev(size,a);
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);
    return 0;
}
int rev(int size,int a[size])
{
   int b;
    for(int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
        if((i+j)==(size-1))
        {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
        }
        else
        j++;
        }
    }
    
}
void input(int size,int a[size])
{
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
}