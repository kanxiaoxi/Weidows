#include <stdio.h>//  <>��ָ��ȥ�ұ�����Ŀ¼
#include"max.h" //  ""�����ҵ�ǰ��ĿĿ¼,���ұ�����Ŀ¼
// #include"max.c"������ֱ���ҵ��Ǹ��ļ�����,������ʹ��

static int min(int a, int b);//�����⹫���ĺ���,ֻ���ڱ��ļ�ʹ��
static int a = 0;            //ͬ��,�о�̬���ر���

int min(int a, int b){  //��Ȼ����ʱ˵����int�͵ĺ���,������ʱintҲ����д
	return a < b ? a : b;
}

int main(int argc, char *argv[]) {
    int a = 5;
    int b = 6;
    printf("max=%d    ", max(a, b));
    printf("min=%d\n", min(a, b));
    printf("max.c��ȫ�ֱ���i=%d\n", i);
    return (0);
}
