#include<stdio.h>
struct student
{
	int rno;
	char name[32];
	float avg;
};
int main()
{
	struct student std[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter roll no,name and avg:\n");
		scanf("%d %s %f",&std[i].rno,&std[i].name,&std[i].avg);
	}
	printf("student details are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n %s\n %f\n",std[i].rno,std[i].name,std[i].avg);
	}
	return 0;
}
