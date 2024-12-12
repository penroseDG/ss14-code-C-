#include<stdio.h>
#include<string.h>
int main(){
	int c[100];
	printf("nguoi dung nhap vao: ");
	fgets(c,100,stdin);
	printf("Chuoi vua nhap:  %s\n",c);
	printf("do dai ky tu trong xau: %d\n",strlen(c));
	return 0;
}
