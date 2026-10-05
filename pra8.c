#include<stdio.h>
#include<string.h>
int main()
{
char exp[20];
char op;
printf("enter an arithmetic expression(eg.,a+b):");
scanf("%s",exp);
op=exp[1];
printf("\n generated intermediate code:\n");
switch(op)
{
case'+':
printf("MOV R0,%c\n",exp[0]);
printf("ADD R0,%C\n",exp[2]);
printf("MOV RESULT,R0\n");
break;

case'-':
printf("MOV RO,%c\n",exp[0]);
printf("SUB R0,%c\n",exp[2]);
printf("MOV RESULT,R0\n");
break;

case'*':
printf("MOV R0,%c\n",exp[0]);
printf("MUL R0,%c\n",exp[2]);
printf("MOV RESULT,R0\n");
break;

case'/':
printf("MOV R0,%c\n",exp[0]);
printf("DIV R0,%c\n",exp[2]);
printf("MOV RESULT,R0\n");
break;

defult:
printf("invalid expression\n");
}
return 0;
}
