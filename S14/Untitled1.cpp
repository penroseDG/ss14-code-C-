#include<stdio.h>
//#include<stdin>

int main(){
//	// double quotes ""
//		
//    // printf("hello world") ; 
//    
//    // khai bao     
//       				 char string[] = {'h','a','b','v','q'} ;  
//	//    char sentence1[]= {'h', 'e','l','l','o','\0'}; // hello 
//	// null(\0) dung de ket thuc , dinh nghia ket thuc 1 chuoi trong chuong trinh   
//	
//	// truy cap vao cac gia tri phan tu o ben trong 
//	  				 printf("ky tu 4 = %c \n",string[4]);
//    //	 printf("ky tu cuoi cung = %c \n",string[length - 2 ]);
//	 
//	// "xin chao , toi ten la ... " 
//	// su dung dau double quotes "" 
//	// String literal 
//	
//						char sentences[] = "xin chao , toi ten la ..." ; 
//	
//	//  Do dai cua mang (length) - Tong so luong ki tu co trong 1 chuoi ky tu 
//     int length = sizeof(string)/sizeof(char);
//	
//	// khai bao chuoi ky tu co do dai cho truoc , co dinh ; 
//					char sentence3[10] = "hello world";
//	
//	// cap nhat gia tri moi 
//					string[0] = "y" ; 
//					printf("%s", string);
//	// de cap nhat 1 gia tri thi dung string[index] = "char" (cung 1 kieu du lieu) ;
//	// sau do gan 1 gia tri bang "=" vao trong string ;
//	
//	// lam viec voi toan bo ky tu co trong 1 chuoi ky tu 
//	for( int i = 0 ; i < length ; i++){
//		string[i];
//		printf("%s", string[i]);
//	}
//	
	// nhap chuoi ky tu (scanf) 
	char str[100];
	printf(" moi ban nhap du lieu : ");
//	scanf("%c",&str);
//	printf("%s",str);
    fgets(str, sizeof(str), stdin);
	fputs(str, stdout);
	return 0 ; 	
} 
