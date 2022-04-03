#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
     char c[50]="INFORMATION AND COMMUNICATION ENGINEERING";
     printf("%s\n",c);
     strlwr(c);
    c[0]=toupper(c[0]);
    c[16]=toupper(c[16]);
    c[30]=toupper(c[30]);

    printf("%s\n",c);
    printf("%c%c%c",c[0], c[16], c[30]);
    getch();
    return 0;
}

