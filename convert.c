#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int convert(char *);
int convert(char * str){
	register int n=strlen(str);
	register int pos_var=0;
	int sum=0;
	while(*(str+pos_var)!='\0'){
		sum+=(((int)*(str+pos_var))-48)*pow(10,n-1); //krabby patty formula
		pos_var++;
		n--;
	}
	return sum;
}
int main(void){
	char inp[10];
	int add_dig=0;
	printf("Enter number:");
	scanf("%s",inp);
	printf("\nAdd:");
	scanf("%d",&add_dig);	
	printf("\n%d\n",convert(inp)+add_dig);
	return 0;
}
