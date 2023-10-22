#include <stdio.h>
#include <stdlib.h>
int a[101][101],n;
void Citire()
{
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
}
void Afisare()
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
int Minim()
{
    int i,Min=a[1][1],iMin=1;
    for(i=2;i<=n;i++)
        if(Min>a[i][i])
        {
            Min=a[i][i];
            iMin=i;
        }
    return iMin;
}
void Stergere(int i1,int j1)
{
    int i,j,m=n;
    for(i=i1;i<n;i++)
        for(j=1;j<=n;j++)
            a[i][j]=a[i+1][j];
    n--;
    for(i=1;i<=n;i++)
        for(j=j1;j<m;j++)
            a[i][j]=a[i][j+1];
}
int main()
{
    Citire();
    Stergere(Minim(),Minim());
    Stergere(Minim(),Minim());
    Afisare();
    return 0;
}
