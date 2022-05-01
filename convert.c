#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int convert(char *);
int convert(char * str){
	int *len=(int*)malloc(sizeof(int));
	*len=strlen(str);
	int sum_arr[*len];
	register int n=*len;
	free(len);
	register int pos_var=0;
	while(*(str+pos_var)!='\0'){
		*(sum_arr+pos_var)=(((int)*(str+pos_var))-48)*pow(10,n-1);
		pos_var++;
		n--;
	}
	int sum=0;
	pos_var=0;
	while(*(str+pos_var)!='\0'){
		sum+=*(sum_arr+pos_var);
		pos_var++;
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