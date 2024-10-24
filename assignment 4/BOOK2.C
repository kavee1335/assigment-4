//c stucture
#include <stdio.h>
#include <string.h>
struct book{
	char title[30];
	char auther[30];
	int year;
	char ISBN[13];
	float price;
}book1;

int main(){
	//struct book book1;
//	strcpy(book1.title,"introduction to c programing");
	printf("enter book title: ");
	scanf("%s",&book1.title);
	//strcpy(book1.auther,"john smith");
	printf("enter book1 auther: ");
	scanf("%s",&book1.auther);
	//book1 publicant_year=2022;
	printf("enter year");
	scanf("%d",&book1.year);
	//srrcpy(book1.ISBN,9780131103627;
	printf("enter book1 ISBN");
	scanf("%s",book1.ISBN);
	//book1.price=49.99;
	printf("enter the price");
	scanf("%f",&book1.price);
	
	//disply to the autput
	printf("title:%s\n",book1.title);
	printf("auther:%s\n",book1.auther);
	printf("year:%d\n",book1.year);
	printf("ISBN:%s\n",book1.ISBN);
	printf("price:%f\n",book1.price);
	

	
	return 0;
}


	
