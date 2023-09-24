//Sanchez Santos B. Alexis 367714
//24/SEPTIEMBRE/2023
//Pedir una cadena y hacerle varias modificaciones
//CADENA AL CUADRADO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>
int vali_num(int ri, int rf);
void vali_cad(char carac[30]);
int largo_cadena(char caracf[30]);
void mayusculas(char carac[30], int n, int o);
void minusculas(char carac[30], int n, int o);
void capital(char carac[30], int n, int o);
void revers(char carac[30],char carac2[30], int n);
void sin_espacios(char carac[30], int n, int o);
void casi_todo(char carac[30], int n);
void palindromo(char carac[30], int n);
int main()
{
    char name[30], reve[30];
    int n, opc;
    vali_cad(name);
    n=largo_cadena(name);
    do
    {
        opc=vali_num(0, 8);
        switch(opc)
        {
            case 1:
            mayusculas(name, n, 0);
            break;
            case 2:
            minusculas(name, n, 0);
            break;
            case 3:
            capital(name, n, 0);
            break;
            case 4:
            printf("Tu palabra tiene un total de %d caracteres ",n);
            break;
            case 5:
            revers(name,reve, n);
            printf("la cadena volteada es %s",reve);
            break;
            case 6:
            sin_espacios(name, n, 0);
            break;
            case 7:
            casi_todo(name, n);
            break;
            case 8:
            palindromo(name, n);
            break;
            default:
            printf("\nadios");
        }
    } while (opc!=0);
    
    return 0;
}

int vali_num(int ri, int rf)
{
    char xnum[30];
    int num;
    do
    {
        system("CLS");
        printf("\n------------------MENU-------------------");
        printf("\n0-----------------------------------Salir");
        printf("\n1------------------Comvertir a mayusculas");
        printf("\n2------------------Comvertir a minusculas");
        printf("\n3---------------------Comvertir a capital");
        printf("\n4----Cantidad de caracteres de tu palabra");
        printf("\n5--------------------------Voltear cadena");
        printf("\n6--------Quitar los espacios de la cadena");
        printf("\n7-------------------Opcion 1, 2, 3, 5 y 6");
        printf("\n8------------------------------Palindromo ");
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

void mayusculas(char carac[30], int n, int o)
{
    int i;
    char copia[30];
    strcpy(copia, carac);
    system("CLS");
    for(i=0;i<n;i++)
    {
        if(copia[i]>='a')
        {
            if(copia[i]<='z')
            {
                copia[i]=copia[i]-32;
            }
        }
        printf("%c",copia[i]);
    }
    copia[n]='\0';
    if(o=1)
    {
        strcpy(carac, copia);
    }
    printf("\n");
    system("PAUSE");
}
void minusculas(char carac[30], int n, int o)
{
    int i;
    char copia[30];
    strcpy(copia, carac);
    system("CLS");
    for(i=0;i<n;i++)
    {
        if(copia[i]>='A')
        {
            if(copia[i]<='Z')
            {
                copia[i]=copia[i]+32;
            }
        }
        printf("%c",copia[i]);
    }
    copia[n]='\0';
    if(o=1)
    {
        strcpy(carac,copia);
    }
    printf("\n");
    system("PAUSE");
}

void capital(char carac[30], int n, int o)
{
    int i;
    char copia[30];
    strcpy(copia,carac);
    system("CLS");
    if(copia[0]>='a')
    {
        if(copia[0]<='z')
        {
            copia[0]=copia[0]-32;
            printf("%c",copia[0]);
        }
    }
    else
    {
        printf("%c",copia[0]);
    }
    for(i=1;i<n;i++)
    {
        if(copia[i]==' ')
        {
            printf("%c",copia[i]);
            i++;
            if(i<n)
            {
                if(copia[i]>='a')
                {
                    if(copia[i]<='z')
                    {
                        copia[i]=copia[i]-32;
                        printf("%c",copia[i]);
                    }
                    else
                    {
                        printf("%c",copia[i]);
                    }
                }
            }
        }
        else
        {
            if(copia[i]>='A')
            {
                if(copia[i]<='Z')
                {
                    copia[i]=copia[i]+32;
                    printf("%c", copia[i]);
                }
                else
                {
                    printf("%c",copia[i]);
                }
            }
        }
    }
    copia[n]='\0';
    if(o=1)
    {
        strcpy(carac, copia);
    }
    printf("\n");
    system("PAUSE");
}
void revers(char carac[30],char carac2[30], int n)
{
    int i, vol, j=0;
    system("CLS");
    for(i=0;i<(n+1);i++)
    {
        carac2[j]=carac[n-i-1];
        j++;
    }
    carac2[n]='\0';
    printf("\n Listo \n");
    system("PAUSE");
}
void sin_espacios(char carac[30], int n, int o)
{
    int i, j, k;
    j=0;
    k=0;
    char nueva[30];
    system("CLS");
    for(i=0;i<n;i++)
    {
        if(carac[i]==' ')
        {
            i++;
            if(i<n)
            {
                nueva[j]=carac[i];
                k++;
            }
        }
        else
        {
            nueva[j]=carac[i];
        }
        j++;
    }
    printf("\n");
    nueva[n-k]='\0';
    printf("%s", nueva);
    if(o=1)
    {
        strcpy(carac, nueva);
    }
    printf("\n");
    system("PAUSE");
}
void casi_todo(char carac[30], int n)
{
    char mayus[30], minus[30], revez[30], capita[30], sinesp[30];
    strcpy(mayus, carac);
    strcpy(minus, carac);
    strcpy(capita, carac);
    strcpy(sinesp, carac);
    mayusculas(mayus, n, 1);
    minusculas(minus, n, 1);
    capital(capita, n, 1);
    sin_espacios(sinesp, n, 1);
    revers(carac, revez, n);
    system("CLS");
    printf("\nRESULTADOS");
    printf("\nEn mayusculas: %s", mayus);
    printf("\nMinusculas: %s",minus);
    printf("\nCapital: %s", capita);
    printf("\nSin espacios: %s", sinesp);
    printf("\nAl revez: %s",revez);
    printf("\n");
    system("PAUSE");
}
void palindromo(char carac[30], int n)
{
    char prueba[30];
    revers(carac, prueba, n);
    system("CLS");
    if(strcmpi(carac, prueba)==0)
    {
        printf("La palabra es palindromo");
    }
    else
    {
        printf("La palabra no es un palindromo");
    }
}

void vali_cad(char carac[30])
{
    int n, i, largo;
    
    do
    {
        system("CLS");
        i=1;
        n=0;
        printf("Escribe tu cadena (no puede llevar numeros ni simbolos ni dobles espacios) ");
        fflush(stdin);
        gets(carac);
        largo=largo_cadena(carac);
        if(carac[0]==' ')
        {
            n=1;
        }
        if(n==0)
        {
            do
            {
                if(carac[i]<'A')
                {
                    if(carac[i]!=' ')
                    {
                        n=1;
                        carac[i]='\0';
                        printf("\nmal 1");
                    }
                }
                if(carac[i]>'Z')
                {
                    if(carac[i]<'a')
                    {
                        n=1;
                        carac[i]='\0';
                        printf("\nmal 2");
                    }
                }
                if(carac[i]>'z')
                {
                    n=1;
                    carac[i]='\0';
                    printf("\nmal3");
                }
                if(carac[i]==' ')
                {
                    if(carac[i+1]==' ')
                    {
                        n=1;
                        carac[i]='\0';
                        printf("\nmal 4");
                    }
                }
                i++;
            } while (carac[i]!='\0');
            if(n==1)
            {
                printf("\nRecuerda que la cadena solo puede llevar letras (mayusculas o minusculas) y tampoco puede llevar dobles espacios \n");
                system("PAUSE");
            }
            
        }
        else
        {
            printf("\nEl primer caracter no puede ser un caracter");
            system("PAUSE");
        }
    } while (n!=0);
    
}