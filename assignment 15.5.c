#include <stdio.h>
void input(int size,int a[size]);
int dup(int size,int a[size]);
int main()
{
    int size,n,d,b,p;
    printf("enter size of array:");
    int a[size];
    scanf("%d",&size);
    printf("enter elements of given array:");
    input(size,a);
    p=dup(size,a);
    printf("First adjacent duplicate element is %d",p);
    return 0;
}
int dup(int size,int a[size])
{
   
    for(int i=0;i<size;i++)
    {
        
     for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            return a[i];
            else
            i++;
           
        }
        
    }
}
void input(int size,int a[size])
{
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
}