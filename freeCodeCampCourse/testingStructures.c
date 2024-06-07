#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student{
char name[50];
char major[50];
int age;
double gpa;
};

void main(){
struct Student student1;
strcpy(student1.name,"Pedro");
strcpy(student1.major,"System analytics");
student1.age = 22;
student1.gpa = 5.5;

printf("%s",student1.major);
}