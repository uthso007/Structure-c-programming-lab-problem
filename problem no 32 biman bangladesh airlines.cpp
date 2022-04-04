#include<stdio.h>
#include<conio.h>
#include<string.h>
char ch[50];
void input(char ch[50]);
void output(void);

int main()
{
 input(ch);
 output();

 getch();
 return 0;
}

void input(char ch[50])
 {
  printf("\n Enter a text: ");
  gets(ch);
 }


void output(void)
 {
  printf("\n\n The text in reverse order is: ");
  strrev(ch);
  printf("%s",ch);
 }



