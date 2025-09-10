#include<stdio.h>

struct Student{
    char name[50];
    int mark;

};

int main(){
    int n=3;
    struct Student students[n];
    for(int i=0; i<n; i++){
        printf("Name of %d no. student: ", i+1);
        scanf("%s", &students[i].name);
        //gets(students[i].name);
        printf("Mark of %d no. student: ", i+1);
        scanf("%d", &students[i].mark);
    }
    int total=0;
    for(int i=0; i<n; i++){
      printf("Name of %d no. student is %s\n", i+1, students[i].name);
      printf("Mark of %d no. student is %d\n", i+1, students[i].mark);
      total+=(students[i].mark);
    }
    double avg=total*1.0/n;
    printf("Average is %lf", avg);
}
