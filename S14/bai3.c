#include<stdio.h>
int main(){
	char string[] = "hello world";
	int length = strlen(string);// tinh do dai cua chuoi string
	printf("chuoi dao nguoc: ");
	for(int i = length - 1; i >= 0; i--){
		printf("%c",string[i]);
	}
	return 0;
}
