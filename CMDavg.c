#include<stdio.h> 
#include<stdlib.h>
#include<string.h> 
struct student 
{ 
   	int cp,m,b,c;  
	char name[30]; 
     float tot; 
}; 
int main(int argc,char*argv[]) 
{ 
 	struct student s1; 
 	if(argc>=6) 
 	{ 
 	    strcpy(s1.name,argv[1]);  	    
        s1.cp=atoi(argv[2]);  	   
        s1.m=atoi(argv[3]);  	    
        s1.b=atoi(argv[4]);  	    
        s1.c=atoi(argv[5]);  	   
	    s1.tot=s1.cp+s1.m+s1.b+s1.c;  	   
	    printf("student name and total marks:\n"); 
        printf("%s\n,%2f\n",s1.name,s1.tot); 
    }              
  else
    { 
        printf("Please provide at least 6 arguments"); 
 	} 
 	return 0; 
} 

