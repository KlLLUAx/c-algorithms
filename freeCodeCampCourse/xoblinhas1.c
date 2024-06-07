#include<stdio.h>

struct name{
    char firstName[21];
    char lastName[21];
};

typedef struct{
int enrolementNo;
struct name studentName;
char courseName[50];
char grade;
}student;
void readStudent(student *);
void main(){
student a = {123,"Pedro","Cordeiro","ADS",'A'};

printf("Enrolment:%d\n Name: %s %s\n Major: %s\n Grade:%c",a.enrolementNo,a.studentName.firstName,a.studentName.lastName,a.courseName,a.grade);

}
void readStudent(student * a){
printf("Enter the students name:");
scanf("")
}