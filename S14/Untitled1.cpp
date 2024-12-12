#include<stdio.h>
int main(){
	//thao tac lam viec voi chuoi ky tu trong C 
	char string[] = "helo world";
	//truy cap vao cac ky tu (phan tu) con o ben trong
	//1 chuoi ky tu / (mang) ky tu
	printf("ky tu 4 : %c\n",string[4]);
	
	int length = sizeof(string)/sizeof(char);
	printf("ky tu cuoi cung la:  %c\n",string[length -2]);
	
	//cap nhat mot ky tu trong chuoi ky tu 
	string[0] = 'Y'; 
	printf("cap nhat mot ky tu: %c\n",string[0]);
	
	//lam viec voi toan bo ky tu co trong 1 chuoi ky tu
	for(int i =0; i < length; i++){
		printf(" string[%d] = %c\n",i,string[i]);
	}
	
	
	char str[100];
//	printf("nhap vao 1 chuoi ky tu bat ky: \n");
//	scanf("%s",&str);
	printf("nhap vao 1 chuoi ky tu bat ky: \n");
    fgets(str,sizeof(str),stdin);
    
    fputs(str,stdout);
	return 0;
}
