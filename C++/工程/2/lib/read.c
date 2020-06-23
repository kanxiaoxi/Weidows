//库
    #include<stdio.h>
    #include<math.h>
    #include"student.h"

//函数
    void read(FILE *fp, int index);

int main()
{
    FILE *fp = fopen("student.data", "r");
    if(fp){
        fseek(fp, 0L, SEEK_END);        //从文件尾开始向上0
        long size = ftell(fp);          //从头移动到fseek位置,也就是整个文件大小
        int number = size / sizeof(Student);
        int index = 0;

        printf("有%d个数据,看第几个:", number);
        scanf("%d", &index);  
        read(fp, index - 1);
        fclose(fp);
    }
    return 0;
}

void read(FILE *fp,int index)
{
    fseek(fp, index * sizeof(Student), SEEK_SET);   //找对应号并定位到那里
    Student stu;                                         //用于读出数据存放的结构
    if(fread(&stu,sizeof(Student),1,fp)==1){  //从fp读出一组sizeof大小的数据交给stu
        printf("第%d个学生:", index + 1);
        printf("\t姓名:%s\n", stu.name);
        printf("\t性别:");
        switch(stu.gender){
            case 0: printf("男\n");break;
            case 1: printf("女\n");break;
            case 2: printf("其他\n");break;
        }
        printf("\t年龄:%d\n", stu.age);
    }
}
