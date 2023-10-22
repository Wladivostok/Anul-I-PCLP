#include <stdio.h>
#include <stdlib.h>
int a[101][101],n,m,aux,b[101][101];
void invFataDeLiniaMediana()
{
    int i,j;
    for(i=1;i<=n/2;i++)
        for(j=1;j<=m;j++)
        {
            aux=a[i][j];
            a[i][j]=a[n-i+1][j];
            a[n-i+1][j]=aux;
        }
}
void invFataDeColoanaMediana()
{
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=m/2;j++)
        {
            aux=a[i][j];
            a[i][j]=a[i][m-j+1];
            a[i][m-j+1]=aux;
        }
}
void Transpusa()
{
    int i,j;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            b[i][j]=a[j][i];
    aux=n;
    n=m;
    m=aux;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            a[i][j]=b[i][j];
}
int main()
{
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    //invFataDeColoanaMediana(); pt a inversa fata de coloana mediana//
    //invFataDeLiniaMediana(); pt a inversa fata de linia mediana//
    //invFataDeLiniaMediana();invFataDeColoanaMediana(); pt a inversa fata de centrul matricii, se aplica succesiv inversarea fata de linia si coloana mediana//
    Transpusa();
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}
