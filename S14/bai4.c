#include<stdio.h>
int main(){
	char string[] = "hello word ";
	int length = sizeof(string)/sizeof(char);
	
	char c ;
	printf("nhap vao 1 ky tu: ");
	scanf("%c",&c);
	 
	int count = 0;// dem so lan xuat hien cua ky tu
	
	for(int i = 0;  i < length-1; i++){
		if(string[i] == c){
			count ++;
		}
	}
	printf("ky tu %c xuat hien %d lan trong chuoi",c,count);
	return 0;
}
