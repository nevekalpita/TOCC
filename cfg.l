%{
#include "cfg.tab.h"
%}
%%
"a" {return A;}
"b" {return B;}
[\t\n]+ 0;
.     {return yytext[0];}
%%
