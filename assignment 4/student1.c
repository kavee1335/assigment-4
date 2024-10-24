//c structure
#include <stdio.h>
#include <string.h>
struct student{
	char name[30];
	float height;
	char reg_no[30];
	char email[15];
	int phone;
	
}student1,student2;
int main()
{
//struct student student1,student2;
//strcpy(student1.name,"james");
printf("enter your name: ");
scanf("%s",&student1.name);	
student1.height=57;
strcpy(student1.reg_no,"CT101/G/23750/24");
strcpy(student1.email,"pharese@gmail.com");
student1.phone=0777234565;
printf("name:%s\n",student1.name);
printf("heigt:%f\n",student1.height);
printf("email:%s\n",student1.email);
printf("phone:%d\n",student1.phone);

	return 0;
}