#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rno;
	char name[32];
	float avg;
};
int main()
{
	struct student *s1;//pointer to structer
	int n,i;
	scanf("%d",&n);//reading no.of students
	s1=(struct student*)malloc(n*sizeof(struct student));//memory allocation
	for(i=0;i<n;i++)
	{
		printf("enter roll no,name and average marks\n");
		scanf("%d%s%f",&(s1+i)->rno,&(s1+i)->name,&(s1+i)->avg);
	}
	printf("roll no name \t average \n");
	for(i=0;i<n;i++)
	{
		printf("%d \t %s \t %f\n",(s1+i)->rno,(s1+i)->name,(s1+i)->avg);
	}
	return 0;
}
