//25.����
//��
    #include<stdio.h>
    #include<stdlib.h>
//���� && struct && typedef
    //���ݽṹ��
    typedef struct Node{    //�ڽṹ���ڲ�������NODE,ֻ���ô˴�Node
        int data;           //�������������������
        struct Node *Next; //����ṹ��ָ�룬ָ����һ�θ��뵱ǰ�ڵ�����������ͬ�Ľڵ�
    } NODE;

    // ��������
        NODE *createList(){ 
            NODE *headNode = (NODE *)malloc(sizeof(NODE));
            //�ṹ��ָ��+malloc�ڴ�->�ṹ�����
            //��ͷdata������
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
            while(pMove){       //����һ���ṹ��ǿ�
                printf("%d", pMove->data);  //�����ǰpMove����Ľڵ��data����
                pMove = pMove->Next;    // #��Ҫ#�ƶ�����һ���ڵ�
            }
        }

    //��������
        void insertNodeByHead(NODE *headNode,int data){
            //����Ҫ����Ľڵ�
            NODE *newNode = createNode(data);
            newNode->Next = headNode->Next;
            headNode->Next = newNode->Next;
        }

//main
int main()
{
    NODE *list = createList();
    insertNodeByHead(list, 1);
    insertNodeByHead(list, 2);
    insertNodeByHead(list, 3);
    printList(list);
    // system("pause");
    return 0;
}

