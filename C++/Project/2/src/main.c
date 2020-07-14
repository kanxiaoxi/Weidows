//库
    #include<stdio.h>
    #include "student.h"
//函数声明
    void getList(Student aStu[], int number);
    int       save(Student aStu[], int number);

int main()
{
    int number = 0;
    printf("输入学生数量:");
    scanf("%d", &number);
    Student aStu[number];   //定义student类型的结构数组,名字为aStu,大小是number
    //函数调用
        getList(aStu, number);      //读取数据
        if(save(aStu,number)){      //写入数据
            printf("保存成功\n");
        }else{
            printf("保存失败\n");
        }

    return 0;
}


void getList(Student aStu[], int number)
{
    char format[STR_LEN];   //用于格式控制的字符的字符数组(字符串)
    sprintf(format, "%%%ds", STR_LEN - 1);  //向format(字符串)里输出格式控制符
    //此处format应该=="%19s",用于下面格式控制

    int i;
    for (i = 0; i < number;i++){
        printf("第%d个学生:\n", i+1);
        printf("\t姓名:");
        scanf(format, &aStu[i].name);
        printf("\t性别(0-男,1-女,2-其他):");
        scanf("%d", &aStu[i].gender);
        printf("\t年龄:");
        scanf("%d", &aStu[i].age);
    }
}

int save(Student aStu[], int number)
{
    int ret = -1;
    FILE *fp = fopen("student.data", "w+");
    if(fp){      //如果打开文件成功,则写入结构数组aStu[]至fp文件,每个结构是sizeof大小,有number个这种大小的结构,
        ret = fwrite(aStu, sizeof(Student), number, fp);
                //fwrite返回值是成功写入多少
        fclose(fp);
    }
    return ret == number;   //判断写入数是否==number
}
