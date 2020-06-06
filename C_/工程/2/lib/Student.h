#ifndef _STUDENT_H_
#define _STUDENT_H_

const  int STR_LEN = 20;
typedef struct studentData{
    char name[20];  //此处[]中不能是常&变量,编译报错
    int gender;
    int age;
} Student;  //把studentData类型的struct定义为Student

#endif
