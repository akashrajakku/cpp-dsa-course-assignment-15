#include <stdio.h>
void input(int size,int a[size]);
int sort(int size,int a[size]);
int main()
{
    int size;
    printf("enter size of array:");
    int a[size];
    scanf("%d",&size);
    printf("enter elements of given array:");
    input(size,a);
    printf("Sorted array is as follows :\n");
    sort(size,a);
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);
    return 0;
}
void input(int size,int a[size])
{
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
}
int sort(int size,int a[size])
{
    int b;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
           if(a[i]>a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
        } 
        }
    }
}