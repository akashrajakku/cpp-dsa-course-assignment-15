#include<stdio.h>
void sort(int size,int array[size]);
void merge(int size,int a[size],int b[size],int p,int c[p]);
void input(int size,int array[size]); 
int main()
{
    int s,p;
    printf("enter size of array 1 and 2:");
    scanf("%d",&s);
    int a[s];
    printf("enter element of array 1:");
    input(s,a);
    int b[s];
    printf("enter element of array 2:");
    input(s,b);
    sort(s,a);
    sort(s,b);
    p=2*s;
    int c[p];
    merge(s,a,b,p,c);
    printf("merged array is :");
    for(int i=0;i<(p);i++)
    printf("%d ",c[i]);
return 0;
}
void input(int size,int array[size])
{
    for(int i=0;i<size;++i)
    scanf("%d",&array[i]);    
}
void sort(int size,int array[size])
{
    int temp;
    for(int i=0;i<size;++i)
    {
        for(int j=i+1;j<size;++j)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
void merge(int size,int a[size],int b[size],int p,int c[p])
{
    for(int i=0;i<p/2;++i)
    {
        c[i]=a[i];
    }
    for(int i=0;i<=p;++i)
    {
        c[i+p/2]=b[i];
    }
}