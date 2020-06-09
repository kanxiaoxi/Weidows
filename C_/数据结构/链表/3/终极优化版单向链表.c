/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:32
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-09 19:58:01
 * @FilePath: \demo\C_\���ݽṹ\����\3\�ռ��Ż��浥������.c
 * 3.�ռ��Ż��浥������
 */

//��
    #include<stdio.h>
    #include<stdlib.h>
    #define LengthOfName 50
    
//���� && struct && typedef
    typedef struct stu{
        long long int id;                     //����������-ѧ��
        char name[LengthOfName];   //����������-����
        struct stu *next;                   //����ָ����,ָ����һ���ڵ�
    } NODE;                                     //��struct stu����ΪNODE

    NODE *create_list(int);
    void print(NODE *);
    void insert_change_Node(NODE *,int);
    NODE *list_reversed(NODE *);

int main()
{
    //������ʼ��
        char *Choice_menu[4]={
            "\n************************************************************",
            "\n0: �������/�˳�.\t1 :����/�޸�����.\t2: ��������.",
            "\n3: ",
            "\n************************************************************\n",
        };  //����ѡ��˵�
        int n = 0, choice_num = 1;  //��ʼ��ʱ����ڵ���n,ָ����choice_num
        do{     //����ѭ��
            printf("������Ҫ�����Ľڵ����: ");
            scanf("%d", &n);
        } while (n < 0);
        NODE *Linked_list = create_list(n); //�˴��Ѿ�¼���һ������,�������

    //���ܺ�������
    while(choice_num!=0){   
        printf("%s %s %s %s��������ʵ�ֵĹ������:"
            ,Choice_menu[0],Choice_menu[1],Choice_menu[2],Choice_menu[3]);
        scanf("%d", &choice_num);
        switch(choice_num){
            case 0:{
                printf("�������������� ��������e�˳�����,������:");
                setbuf(stdin, NULL);    //��ջ�����
                char choice = (char)getchar();
                if(choice=='e' || choice=='E')  //����e��E�˳�����
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
    return 0;
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
        for (int j = 1; p != NULL; j++, p = p->next){
            printf("��%d���ڵ�:%lld\t%s\n", j, p->id, p->name);
        }
    }

//����(���) && �޸�����
    void insert_change_Node(NODE *headList,int n){
        NODE *p = headList;     //����NODE���͵��ƶ�ָ��p
        for(int i=0;i<n;i++,p=p->next){
            if(p->next==NULL){
                printf("%dth node hasn't found!\n Input N again or press nothing  to exit :",n);
                scanf("%d", &n);    //����n
                i = 0;
                p = headList;   //������
            }
        } //�ж��Ƿ���ڲ���pָ���n�ڵ�
        char choice = 0;
        while (choice != 'i' || choice != 'c' || choice !='I' || choice != 'C'){
            printf("insert or change node? input 'i' or 'c':");
            setbuf(stdin, NULL);
            choice = getchar();
            switch(choice){
                case 'I' :
                case 'i' :{
                    NODE *insertNode =(NODE *)malloc(sizeof(NODE));
                    printf("input data: ID & name :");
                    scanf("%lld %s", &insertNode->id, &insertNode->name);
                    insertNode->next = p->next;
                    p->next = insertNode;
                    return;
                }
                case 'C' :
                case 'c' :{
                    printf("�������޸ĺ������:");
                    scanf("%lld %s", &p->id, &p->name);
                    return;
                }
                default:
                    printf("�������.������.\n");
                    continue;
            }
        }
    }
    
//��������
    NODE *list_reversed(NODE *List){
        if(List==NULL || List->next==NULL) {    //��֤����ǿ�
            printf("�����С,�޷�����.\n");
            return List;
        }else{
            NODE *forword = List, *temp = List->next, *next = List->next,
                *head = (NODE *)malloc(sizeof(NODE));
            while(next!=NULL){
                next = next->next;          //nextǰ��
                temp->next = forword;   //ָ�뷴ת
                forword = temp;              //forwordǰ��
                temp = next;                    //tempǰ��
            }
            (List->next)->next = NULL;  //ԭ�ڶ����ڵ�ָ��NULL
            free(List);     //ԭͷ�ڵ����
            head->next = forword;   //��ͷ�ڵ�������
            return head;
        }
    }