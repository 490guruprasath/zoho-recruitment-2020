#include<stdio.h>
#include<string.h>
int main(){
	char a[50];
	scanf("%s",a);
	int i,j,k;
	for(i=0;i<strlen(a);i++){
		k=strlen(a)/2;
		for(j=0;j<strlen(a)-1-i;j++)
		printf(" ");
		for(j=0;j<=i;j++){
			printf("%c",a[k%strlen(a)]);
			k++;
		}
		printf("\n");
	}
}
