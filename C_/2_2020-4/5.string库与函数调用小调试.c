/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:29:29
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:29:29
 * @FilePath: \demo\C\2_2020-4\5.string���뺯������С����.c
 */ 
//��
    #include<stdio.h>
    #include<stdlib.h>//malloc
    #include <string.h>

//strlen; strcmp; strcpy; strcat; strchr; strstr;����
    /*Ϊ��ֹԽ��(��n����)�а�ȫ�汾��strncpy & strncat & strncmp
        char *strncpy(char *restrict dst,const char *restrict src,size_t n);
        char *strncat(char *restrict s1,const char *restrict s2,size_t n);
        int strncmp(const char *s1,const char *s2,size_t n);*/
    int strlen_test_like(const char *test,const char *like){
        printf("sizeof=%d  ", sizeof(test)); //�����С
        printf("strlen=%d  ", strlen(test)); //�ַ�����

        int cnt = 0;//��������������
        int idx = 0;//���ǳ��õ�i
        while (like[idx]!='\0'){
            cnt++;
            idx++;
        } //��ѭ��cnt�������ɾȥ,����return idx;Ҳ�ǶԵ�
        return cnt;
    } //���Ƶ�strlen(),�ַ��������鶼����*s��ʾ,ͳһд��*s

    int strcmp_like(const char *a,const char *b){
        //����һ,������·(����)
            // int idx = 0;
            // while (a[idx] == b[idx] && a[idx] != '\0'){idx++;}
            // //�˴�ע�ⲻ��д��a == b != c��������ʽ
            // return a[idx] - b[idx];

        //������,����ָ����������
            while(*a == *b && *a != '\0'){*a++;*b++;}
            return *a - *b;

    }//���Ƶ�strcmp()

    char* strcpy_test_like(const char *src,char *dstlike){
        char *dst = (char*)malloc(strlen(src) + 1);
        printf("����ǰa= %s", dst);//fδ��ʼ��,�������
        printf("  ���ƺ�a= %s  ", strcpy(dst, src)); //��b���Ƹ�a,���ҷ���a
        /*strcpy�����ڸ���,����Ϸ�mallocʹ��,������Ҫ�����ַ���
        ת��(dst<-src),�������ڴ��ַ�����������²���Ҫ����,*/
        free(dst);//��ؼ�סfree�ͷ��ڴ�
        
        //like_1����
            // int idx = 0;
            // while(src[idx]!= '\0'){
            //     dstlike[idx] = src[idx];
            //     idx++;}
            // dst[idx] = '\0';
            // return dstlike;
        //like_2ָ��
            char *ret = dstlike;/*����++����ʹdstlike��ƫ,����ret
            ����(���Ǹ���ָ��),�漰�ƶ�ָ��ʱ�ܿ����õ�!!!!!!*/
            while(*dstlike++ = *src++);/*��*dstlike=*src,Ȼ��++,
            ��ֵ���ʽ��ֵ����*src��ֵ,��Ч��*src != '\0'*/
            *dstlike = '\0';
            return ret;//������ʾ���ᳫ�����,�˴�����
    } //��Ҫע�⴫��strcpy�����������������ص���ַ(*restrict)

    void strcat_test(char *restrict s1,char *s3,char *restrict s2){
        s1 = (char *)malloc(strlen(s1) + strlen(s2) + 2);//s1ԭ�ַ���ʧЧ
        //s1 = "Hello";�����ֻ��s1���ƻ�ԭ��С,���������*s
        strcpy(s1, s3);//�ָ�s1�ַ���
        printf("s1+s2=%s\n",strcat(s1, s2));//��s2�ӵ�s1����,������s1(����)
        free(s1);
    }
    void strchr_test(char *s,char c,int n){
        //������
            printf("��ַ:%d  ", strchr(s, c));
            printf("�ַ�:%c  ", *strchr(s, c));
        //������
            printf("��ַ:%d  ", strrchr(s, c));
            printf("�ַ�:%c  ", *strrchr(s,c));
            printf("����ַ���:%s\n",strrchr(s, c));
        //�ҵ�n��char c
            char *p = s;//�漰�ƶ�ָ��ǰ����ָ��
            p = strchr(p, c);//�ȶ�λ��һ��
            int i = 1;
            while(i<n){
                p = strchr(p + 1, c);
                i++;}
            printf("��%d��%c��ַ:%d , ����ַ�:%s\n",n,c, p,p);
        //���char cǰ���ַ���
            // char *s1 = strchr(s, c);
            // *s1 = '\0';
            // printf("%c֮ǰ���ַ���:%s\n", c, s);
            // *s1 = c; �������ͨ���в�ͨ(�޷�ֱ���޸�s)

            char *s1 = (char *)malloc(strlen(s) + 1);
            strcpy(s1, s);
            char *s2 = strchr(s1, c);
            *s2 = '\0';
            printf("%c֮ǰ���ַ���:%s\n", c, s1);
            free(s1);//�����������ڴ��жԸ�������s1����
    }

int main(int argc,char const *argv[]){
    int a = 0;
    //putchar() & getchar() & gets()
        // a = getchar();//�Ǻý��շ�ʽ
        // putchar(a);
        // /*����ԭ��int getchar((int) char) ֻ��������һ���ַ�
        //                 int putchar(void)*/
        // char *b;//����������Ե����ַ���������
        // gets(b);//�ַ������пո�ʱ,scanf�ͼ�����,getsרҵ��ȡ�ַ���
        // printf("%s\n",b);
    
    char *c = "Hello"; char *d = "Hello";
    char *e = "World";
    //test here!
        //strlen_test & strlen_like��ʼ
            printf("strlen_like=%d\n", strlen_test_like(c,c));

        //
        //strcmp  test,cmp=compare����ֵ:=0 c=d, ��c>d, ��c<d
            printf("strcmp(c,d)=%d  ", strcmp(c, d));
            printf("strcmp_like(c, d)=%d  ", strcmp_like(c, d));
            printf("strcmp_like(c, e)=%d\n", strcmp_like(c, e));

        //
        //strcpy  test & like��ʼ����
            char *f = (char *)malloc(strlen(e) + 1);
            printf("����ǰf=%s  ", f);
            printf("���ƺ�f=%s\n", strcpy_test_like(e,f));

        //
        //strcat��ʼ
            strcat_test(c, d, e);
            
        //
        //strchr(const char *,int)����ֵ����Ϊint��ָ��,û�ҵ�(NULL)
            strchr_test(c,'l',2);
            printf("\'el\'����ַ���%s\n", strstr(d, "el"));//���ַ���

    return 0;
}
