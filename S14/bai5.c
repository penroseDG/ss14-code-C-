#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char string[] = "hello world";
	int length = sizeof(string)/sizeof(char);
	int count = 0; //dem so tu
	bool word = false ; // trang thai trong mot tu
	
	// su dung vong lap de duyet qua tung mang trong chuoi 
	for(int i =0; i < length -1; i++){
		if(string[i] != ' ' && !word){
			//tu moi
			word = true;
			count ++;
		}else if(string[i] == ' '){
			//ket thc mot tu
			word = false;
		}
	}
	printf(" so tu trong chuoi: %d",count);
	return 0;
}
