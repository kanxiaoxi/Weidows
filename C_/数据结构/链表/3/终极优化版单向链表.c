/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:32
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-10 11:40:46
 * @FilePath: \demo\C_\���ݽṹ\����\3\�ռ��Ż��浥������.c
 * 3.�ռ��Ż��浥������
 */

//��
    #include<stdio.h>
    #include<stdlib.h>
    #define LengthOfName 8
    
//���� && struct && typedef
    typedef struct stu{
        long long int id;                     //����������-ѧ��
        char name[LengthOfName];   //����������-����
        struct stu *next;                   //����ָ����,ָ����һ���ڵ�
    } NODE;                                     //��struct stu����ΪNODE

    NODE *create_list(int);
    void print(NODE *);
    void insert_change_Node(NODE *,int);
    void *list_reversed(NODE *);

int main()
{
    //������ʼ��
        char *Choice_menu[4]={  //ָ������,��Ϊ����ѡ��˵�
            "\n************************************************************",
            "\n0: �������/�˳�.\t1 :����/�޸�����.\t2: ��������.",
            "\n3: ",
            "\n************************************************************\n",
        };  
        int n = 0, choice_num = 1;  //��ʼ��ʱ����ڵ���n,ָ����choice_num
        do{     //����ѭ��,ȷ��n>0
            printf("������Ҫ�����Ľڵ����: ");
            scanf("%d", &n);
        } while (n < 0);
        NODE *Linked_list = create_list(n); //�˴�������¼���һ������,�������

    //���ܺ�������
    while(choice_num!=0){   //��ʼ��ʱ������choice_num
        printf("%s %s %s %s��������ʵ�ֵĹ������:"
            ,Choice_menu[0],Choice_menu[1],Choice_menu[2],Choice_menu[3]);
        scanf("%d", &choice_num);
        switch(choice_num){
            case 0:{
                printf("�������������� ��������q�˳�����,������:");
                setbuf(stdin, NULL);    //��ջ�����
                char choice = (char)getchar();
                if(choice=='q' || choice=='Q')  //����e��E�˳�����
                    printf("ллʹ��!");
                else{
                    print(Linked_list);
                    choice_num = 1; //���ڷ�0״̬,ѭ���������
                }
                break;
            }
            case 1:{
                int n = 0;
                printf("������Եڼ�(N)�Žڵ����:");
                scanf("%d", &n);
                insert_change_Node(Linked_list, n);
                break;
            }
            case 2:{
                list_reversed(Linked_list);
                break;
            }
            default:{
                printf("�������,������.\n");
                break;
            }
        }
    }
    return 0;   //�����������ֹ��������
}

//β�巨��������(����ͷ || β)
    NODE *create_list(int n){
        NODE *head, *node, *end;
        head = (NODE *)malloc(sizeof(NODE));
        end = head;
        for (int i = 0; i < n;i++){
            node = (NODE *)malloc(sizeof(NODE));
            printf("�ֱ������%d��ID,name : ", i + 1);
            scanf("%lld %s", &node->id, &node->name);
            end->next = node;   //end���ϸ��ڵ�,����ָ��ǰ�ڵ�
            end = node;             //��endָ��ǰ�ڵ�
        }
        end->next = NULL;
        //ѡ�񷵻�ָ��
            printf("press any key return head\tor press 'e' to return end:");
            setbuf(stdin, NULL);
            char choice = getchar();
            if(choice=='e' || choice=='E')
                return end;
            else
                return head;
    }

//�������
    void print(NODE *head){
        NODE *p = head->next; //for��ʼ���������޷�ͬʱ��������ͬ���͵ı���
        for (int i = 1; p != NULL; i++, p = p->next){
            printf("��%d���ڵ�:%lld \t %s \n", i, p->id, p->name);
        }
    }

//����(���) && �޸�����
    void insert_change_Node(NODE *headList,int n){
        NODE *p = headList;     //����NODE���͵��ƶ�ָ��p
        for(int i=0;i<n;i++,p=p->next){
            if(p->next==NULL){
                printf("%dth node hasn't found!\t Input N again or press nothing  to exit :",n);
                scanf("%d", &n);    //����n
                i = 0;
                p = headList;   //������
            }
        } //�ж��Ƿ���ڲ���pָ���n�ڵ�
        while(1){
            printf("insert or change node? input 'i' or 'c':");
            setbuf(stdin, NULL);
            char choice = getchar();
            if(choice=='i' || choice=='I'){     //����
                NODE *insertNode =(NODE *)malloc(sizeof(NODE));
                printf("input data: ID & name :");
                scanf("%lld %s", &insertNode->id, &insertNode->name);
                insertNode->next = p->next;
                p->next = insertNode;
                break;
            }else if(choice=='c'|| choice=='C'){    //�޸�
                printf("�������޸ĺ������:");
                scanf("%lld %s", &p->id, &p->name);
                break;
            }else{
                printf("�������.������.\n");
                continue;
            }
        }
    }
    
//��������
    void *list_reversed(NODE *List){
        if(List==NULL || List->next==NULL) {    //��֤����ǿ�
            printf("�����С,�޷�����.\n");
            return List;
        }else{
            NODE *backward = List->next,
                 *temp = (List->next)->next,
                 *forward = (List->next)->next;
            while(forward!=NULL){
                forward = forward->next;          //forwardǰ��
                temp->next = backward;   //ָ�뷴ת
                backward = temp;           //backwardǰ��
                temp = forward;                    //tempǰ��
            }
            (List->next)->next = NULL;  //ԭ�ڶ����ڵ�ָ��NULL
            List->next = backward;
        }
    }
