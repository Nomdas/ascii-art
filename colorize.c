/*this file is under GNU GPL(3) */
/*original aurthor:ahmed khider(2026)*/

#include <stdio.h>

#define YELLOW "\e[1;33m"
#define WHITE  "\e[1;37m"
#define LOGO ""
int main(int argc,char **argv){

  FILE *f=fopen(argv[1],"r");

if (f == NULL)
{
printf("\n Can't read the file.!\n");

FILE *f=fopen(LOGO,"r");
}
else if (f == NULL)
{
printf("\n Can't read the file.!\n");
return 1;}

char ch;

while (ch != EOF)
{
ch=fgetc(f);
if (ch=='H'||ch=='.'||ch=='*'||ch=='o') {
printf("%s%c",YELLOW,ch);
}
else {
printf("%s%c",WHITE,ch);
}
}
return 0;}
