#include <stdio.h>
#include <string.h>
int main(){
char str[100]; int i, len, count_1=0,count_0=0;
printf("Enter a binary string:");
scanf("%99s",str);
len = strlen(str);

if(len == 0){
printf("String Rjected\n");
return 0;
}
for(i=0;i<len;i++){
if(str[i]!='0' && str[i]!='1'){
printf("Invalid Input! Enter only 0 and 1.\n");
return 0;
}
}

for(i=0;i<len;i++){
if(str[i]=='0')
	count_0++;
else
	count_1++;}
if(count_0 %2 == 0 && count_1 %2 == 0)
	printf("String Accepted\n");
else
	printf("String Rejected\n");
return 0;
}
