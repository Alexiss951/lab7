//Sanchez Santos B. Alexis 367714
//20/Septiembre/2023
//Pedir una cadena y hacerle varias modificaciones
//ENSENAda
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
int vali_num(int ri, int rf);
void impc(char carac[30], int n);
void impv(char carac[30], int n);
void impcuxu(char carac[30], int n);
void impvuxu(char carac[30], int n);
int largo_cadena(char caracf[30]);
void elimcad(char carac[30], int n);
void elimcadv(char carac[30], int n);
void elimcadin(char carac[30], int n);
void elimcadvin(char carac[30], int n);
void elimvoc(char carac[30], int n);
void elimcon(char carac[30], int n);

int main()
{
    char name[30];
    int n, opc;
    printf("Escribe algo ");
    fflush(stdin);
    gets(name);
    n=largo_cadena(name);
    opc=vali_num(1, 10);
    switch(opc)
    {
        case 1:
        impc(name, n);
        break;
        case 2:
        impv(name, n);
        break;
        case 3:
        impcuxu(name, n);
        break;
        case 4:
        impvuxu(name, n);
        break;
        case 5:
        elimcad(name, n);
        break;
        case 8:
        elimcadv(name, n);
        break;
        case 7:
        elimcadin(name, n);
        break;
        case 6:
        elimcadvin(name, n);
        break;
        case 9:
        elimvoc(name, n);
        break;
        case 10:
        elimcon(name, n);
        break;
        default:
        printf("\nEsa opcion no es vaida");
    }
    return 0;
}

int largo_cadena(char caracf[30])
{
    int i;
    i=0;
    while(caracf[i]!='\0')
    {
        i++;
    }
    return i;
}

void impc(char carac[30], int n)
{
    int i;
    system("CLS");
    for(i=0;i<n;i++)
    {
        printf("%c",carac[i]);
    }
    printf("\n");
    system("PAUSE");
}
void impv(char carac[30], int n)
{
    int i, vol;
    system("CLS");
    for(i=0;i<(n+1);i++)
    {
        vol=n-i;
        printf("%c",carac[vol]);
    }
    printf("\n");
    system("PAUSE");
}

void impcuxu(char carac[30], int n)
{
    int i;
    system("CLS");
    for(i=0;i<n;i++)
    {
        printf("\n%c",carac[i]);
    }
    printf("\n");
    system("PAUSE");
}

void impvuxu(char carac[30], int n)
{
    int i, vol;
    system("CLS");
    for(i=0;i<(n+1);i++)
    {
        vol=n-i;
        printf("\n%c",carac[vol]);
    }
    printf("\n");
    system("PAUSE");
}

void elimcad(char carac[30], int n)
{
    int i;
    system("CLS");
    do
    {
        for(i=0;i<n;i++)
        {
        printf("%c",carac[i]);
        }
        printf("\n");
        n=n-1;
    } while (n!=0);
    
    system("PAUSE");
}

void elimcadv(char carac[30], int n)
{
    int i, vol;
    system("CLS");
    do
    {
        for(i=0;i<(n+1);i++)
        {
        vol=n-i;
        printf("%c",carac[vol]);
        }
        printf("\n");
        n=n-1;
    } while (n!=0);
    printf("%c \n", carac[0]);
    system("PAUSE");
}

void elimcadin(char carac[30], int n)
{
    int i, x;
    x=0;
    system("CLS");
    do
    {
        for(i=x;i<n;i++)
        {
        printf("%c",carac[i]);
        }
        printf("\n");
        x=x+1;
    } while (x<n);
    
    system("PAUSE");
}

void elimcadvin(char carac[30], int n)
{
    int i, vol, x, y;
    x=0;
    y=0;
    system("CLS");
    do
    {
        for(i=x;i<(n+1);i++)
        {
        vol=(n-i)+y;
        printf("%c",carac[vol]);
        }
        printf("\n");
        y++;
        x=x+1;;
    } while (x<n);
    printf("\n");
    system("PAUSE");
}
void elimvoc(char carac[30], int n)
{
    int i;
    system("CLS");
    for(i=0;i<n;i++)
    {
        if(carac[i]=='a' || carac[i]=='A' || carac[i]=='e' || carac[i]=='E' || carac[i]=='i' || carac[i]=='I' || carac[i]=='o' || carac[i]=='O' || carac[i]=='u' || carac[i]=='U')
        {
            carac[i]=' ';
        }
        printf("%c", carac[i]);
    }
    printf("\n");
    system("PAUSE");
}

void elimcon(char carac[30], int n)
{
    int i;
    system("CLS");
    for(i=0;i<n;i++)
    {
        if(carac[i]!='a')
        {
            if(carac[i]!='A')
            {
                if(carac[i] !='e')
                {
                    if(carac[i]!='E')
                    {
                        if(carac[i]!='i')
                        {
                            if(carac[i]!='I')
                            {
                                if(carac[i]!='o')
                                {
                                    if(carac[i]!='O')
                                    {
                                        if(carac[i]!='u')
                                        {
                                            if(carac[i]!='U')
                                            {
                                                carac[i]=' ';
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%c", carac[i]);
    }
    printf("\n");
    system("PAUSE");
}

int vali_num(int ri, int rf)
{
    char xnum[30];
    int num;
    do
    {
        system("CLS");
        printf("\n-----------------MENU-----------------");
        printf("\n1----------------------Imprimir cadena");
        printf("\n2-----------------------Voltear cadena");
        printf("\n3------------------Imprimir cadena 1x1");
        printf("\n4-------------------voltear cadena 1x1");
        printf("\n5-----------------Elimiinar cadena 1x1");
        printf("\n6---------Eliminar cadena volteada 1x1");
        printf("\n7------------Eliminar a la inversa 1x1");
        printf("\n8---Eliminar a la inversa volteada 1x1");
        printf("\n9---------------------Eliminar vocales");
        printf("\n10----------------Eliminar consonantes ");
        fflush(stdin);
        gets(xnum);
        num=atoi(xnum);
        if(num< ri || num> rf)
        {
            printf("\nFavor de elegir una de las opciones existentes ");
            system("PAUSE");
        }
    }while(num< ri || num> rf);
    return num;
}