#include<stdio.h> 
int main()
{
char a;
char num[]={};
int age;
float area;
double salary;

printf("Enter character: " );
scanf("%c",&a);
printf("The character is %c\n",a);

printf("Enter string:" );
scanf("%s",&num);
printf("The name is %s\n",num);

printf("Enter integer: " );
scanf("%d",&age);
printf("The age is %d\n",age);

printf("Enter float: " );
scanf("%f",&area);
printf("The area is %.2f\n",area);

printf("Enter double: " );
scanf("%lf",&salary);
printf("The salary is %lf\n",salary);
	
	
	
	
    
	return 0;
}