#include <stdio.h>
#include <stdlib.h>
void cmmdc(unsigned a,unsigned b,unsigned *c)
{
    unsigned r;
    while(b!=0)
    {
        r=a%b;                      /*Algoritmul lui Euclid*/
        a=b;
        b=r;
    }
    *c=a;
}
void oglindit(unsigned n,unsigned *r)
{
    *r=0;
    do
    {
        *r=(*r)*10+(n%10);
        n=n/10;
    }
    while(n!=0);
}
void cifre(unsigned n,unsigned *p,unsigned *i)
{
    *p=0,*i=0;
    unsigned m=n,putere=1;
    do
    {
        if(n%2==0)
        {
            *p=*p+putere*(n%10);
            putere*=10;
        }
        n/=10;
    }
    while(n!=0);
    putere = 1;
    do
    {
        if(m%2==1)
        {
            *i=*i+putere*(m%10);
            putere*=10;
        }
        m/=10;
    }
    while(m!=0);
}
int main()
{
    /*unsigned a,b;
    scanf("%d %d",&a,&b); se folosesc aceleasi date a si b pt testarile ulterioare
    unsigned c;
    cmmdc(a,b,&c);
    printf("Cel mai mare divizor comun al numerelor %d si %d este %d \n",a,b,c); testare functie cmmdc*/
    /* unsigned r1,r2;
    oglindit(a,&r1);
    oglindit(b,&r2);
    printf("Oglinditul lui a este %d \nOglinditul lui b este %d\n",r1,r2); testare functie oglindit*/
    /* unsigned p,i;
    cifre(a,&p,&i);
    printf("Numarul format doar din cifrele pare ale lui a este %d, iar numarul format doar din cifre impare este %d\n",p,i);
    cifre(b,&p,&i);
    printf("Numarul format doar din cifrele pare ale lui a este %d, iar numarul format doar din cifre impare este %d\n",p,i); testare functie cifre*/
    unsigned n,numarCifrePare,numarCifreImpare; //incepe problema propriu-zisa//
    scanf("%d",&n);
    cifre(n,&numarCifrePare,&numarCifreImpare);
    unsigned cmmdcpi;
    cmmdc(numarCifrePare,numarCifreImpare,&cmmdcpi);
    if(cmmdcpi==1)
        printf("DA"); //prime intre ele//
    else
        printf("NU");
    return 0;
}
