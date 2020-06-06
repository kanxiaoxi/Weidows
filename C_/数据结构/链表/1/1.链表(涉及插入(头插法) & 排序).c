/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:42:58
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:42:59
 * @FilePath: \demo\C\���ݽṹ\1.����(�漰����(ͷ�巨) & ����).c
 */ 
//1.����(�漰����(ͷ�巨) & ����)
//��
    #include<stdio.h>
    #include<stdlib.h>
//���� && struct && typedef
    //�������޸�
    struct student {
        char name[20];
        int num;
        int math;
    }Class1;          //(�ṹ����������������ǰ��,��Ȼ�п��ܱ����޷�ʶ��)

    typedef struct Node{    //�ڽṹ���ڲ�������NODE,ֻ���ô˴�Node
        int data;  //���·���㹹��ṹ��ʽ�޸ļ򵥿��
        // struct student Class1;     //����������������ݣ�
        struct Node *Next; //����ṹ��ָ�룬ָ����һ�θ��뵱ǰ�ڵ�����������ͬ�Ľڵ�
    } NODE;

    NODE *createList();
    NODE *createNode(int);
    void printList(NODE *);
    void insertNodeByHead(NODE *, int );
    void deleteNodeByData(NODE *, int );
    int length_List(NODE *);
    void Sort_List(NODE *);
    void Sort_List_2(NODE *);

//main
int main()
{
    NODE *list = createList();
/*     {  //����ṹ�����
        struct student info;
        while(1){
            printf("������ѧ��������,ѧ��,��ѧ�ɼ�:");
            scanf("%s%d%d", &info.name, &info.num, &info.math);
            insertNodeByHead(list,info);
            printf("continue(Y/N)?\n");
            setbuf(stdin, NULL);    //������뻺����
            int choice=getchar();
            if (choice=='N'|| choice=='n') break;
        }
    }
 */    
    //����
        insertNodeByHead(list, 1);
        insertNodeByHead(list, 2);
        insertNodeByHead(list, 3);
        insertNodeByHead(list, 4);
        insertNodeByHead(list, 5);
    //delete����
        int num;
        scanf("%d", &num);
        deleteNodeByData(list, num);
    Sort_List(list);
    printf("�ڵ����:%d\n", length_List(list));  
    printList(list);
    // system("pause");������ͣ
    return 0;
}

    // ��������(ͷ)
        NODE *createList(){ 
            NODE *headNode = (NODE *)malloc(sizeof(NODE));
            //�ṹ��ָ��+malloc�ڴ�->�ṹ�����
            //��ͷdata������Ϊ��
            headNode->Next = NULL;
            return headNode;
        }

    //�����ڵ�
        NODE *createNode(int data){ 
            NODE *newNode = (NODE*)malloc(sizeof(NODE));
            newNode->data = data;
            newNode->Next = NULL;
            return newNode;
        }

    //�������
        void printList(NODE *list){
            NODE *pMove = list->Next;   //����һ���ƶ�ָ��ṹ�����
            // printf("name\tnum\tmath\n");
            printf("�Ѵ������нڵ���Ϣ:");
            while(pMove){       //����һ���ṹ���NULL
                // printf("%s\t%d\t%d\n", pMove->Class1.name, 
                //     pMove->Class1.num,   pMove->Class1.math);
                printf("%d\t", pMove->data);  //�����ǰpMove����Ľڵ��data����
                pMove = pMove->Next;    // #��Ҫ#�ƶ�����һ���ڵ�
            }
        }

    //����ڵ�(ͷ�巨)
        void insertNodeByHead(NODE *headNode,int data){
            //����Ҫ����Ľڵ�
                NODE *newNode = createNode(data);
            newNode->Next = headNode->Next;
            headNode->Next = newNode;
        }

    //ɾ������
        void deleteNodeByData(NODE *headNode,int delData){
            NODE *posNode = headNode->Next;
            NODE *posNodeFront = headNode;      //��������ָ��ָ��
            
            while(posNode->data != delData && posNode != NULL){
                posNodeFront = posNode;
                posNode = posNode->Next;    //����ƶ�
                if(posNode==NULL){
                    printf("�޷�ɾ��%d�ڵ�,������.\n",delData);
                    return; //ֱ�ӽ�������,��������ж���
                }
            }
            posNodeFront->Next = posNode->Next;
            free(posNode);  //�ͷ�posNode��ָ�ڵ���ڴ�,Ҳ����ɾ��posNode�ڵ�
        }

    //��������ЧԪ�ظ���
        int length_List(NODE *headNode){
            int len = 0;
            NODE *p=headNode->Next;
            while(p!=NULL){
                len++;
                p = p->Next;
            }
            return len;
        }
        
    //�������е�Ԫ�ؽ�������
        //(ð������     ------ֱ�ӽ�������)
        void Sort_List(NODE *headNode){
            for (NODE *p = headNode->Next; p != NULL;p=p->Next){
                for (NODE *q = p->Next; q != NULL;q=q->Next){   //�����ƶ�ָ��
                    if(p->data>q->data){
                        int temp = p->data;
                        p->data=q->data;
                        q->data = temp;
                    }
                }
            }
        }
        //ֱ��ѡ������   ------ֱ�ӽ�������
        void Sort_List_2(NODE *headNode){
            for (NODE *p = headNode->Next; p != NULL;p=p->Next){
                NODE *t = p;
                for (NODE *q = p->Next; q != NULL;q=q->Next){   //�����ƶ�ָ��
                    if(q->data>p->data) t=q;
                }
                if(t!=p){
                    int temp = t->data;
                    t->data = p->data;
                    p->data = temp;
                }
            }
        }
