%{
#include <stdio.h>
#include <stdlib.h>

int yylex(void);
int yyerror(char *s);
%}

%token NUMBER

%left '+''-'
%left '*''/'
%%

input :
    expr '\n' { printf ("Result = %d\n",$1);}
    ;
expr:
    expr '+' expr   {$$ = $1 + $3;}
    | expr '-' expr {$$ = $1 - $3;}
    | expr '*' expr {$$ = $1 * $3;}
    | expr '/' expr {$$ = $1 / $3;}
    | '('expr')'    {$$ = $2;}
    | NUMBER        {$$ = $1;}
    ;
%%
    
int main()
{
  printf("Enter Arithmetic Experssion\n");
  yyparse();
  return 0;
 }
 
 int yyerror(char *s)
 {
   printf("Invalid Experssion \n");
   return 0;
 }
