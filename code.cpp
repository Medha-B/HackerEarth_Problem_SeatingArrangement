#include <stdio.h>

int detA(int x)
{
    int a;
    if (x%12==0)
    {
        a=x/12;
    }
    else
    {
        a=(x/12) + 1;
    }
    return a;
}

void seatType(int x)
{
    int y = x%12;
    if (y==0 || y==1 ||y==6||y== 7)
    {
        printf(" WS");
    }
    else if (y==2 || y==5 || y==8|| y==11)
    {
        printf(" MS");
    }
    else if (y==3 || y==4 || y==9 || y==10)
    {
        printf(" AS");
    }
}

int main()
{
    long int inpn; 
    scanf("%d", &inpn);
    long int a[inpn], b[inpn], centre[inpn], complement[inpn];
    long int i;
    for (i=0; i<inpn; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i=0; i<inpn; i++)
    {
        b[i] = detA(a[i]);
    }
    for (i=0; i<inpn; i++)
    {
        centre[i] = 6 + (b[i]-1)*12;
    }
    for (i=0; i<inpn; i++)
    {
        complement[i] = 2*centre[i] - a[i] +1;
    }
    for (i=0; i<inpn; i++)
    {
        printf("%d", complement[i]);
        seatType(a[i]);
        printf("\n");
    }

   return 0;
}
