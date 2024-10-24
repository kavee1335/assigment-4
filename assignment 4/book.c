//cstructure
#include <stdio.h>
#include<string.h>
struct books{
	char title[30];
	char auther[30];
	int publishing_year;
	char ISBN[13];
	float price;
	
} book1,book2;

int main(){
	//struct books book1,book2;
	//strcpy(book1.title,"introduction to  c programing");
	printf("enter the title: ");
	strcpy(book1.auther,"john smith");
	book1.publishing_year=2022;
	strcpy(book1.ISBN,"9780131103627");
	book1.price=49.99;
	
	printf("title: %s\n",book1.title);
	/*
	printf("auther:%s\n",boo1.auther);
	printf("publishing_year:%d\n",book1.publishing year);
	ptintf("ISBN:%s\n",boook1.ISBN);
	printf("price:%f\n",book1.price);
	*/
	return 0;
}