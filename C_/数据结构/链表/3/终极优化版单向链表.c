/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:32
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-12 13:29:14
 * @FilePath: \demo\C_\���ݽṹ\����\3\�ռ��Ż��浥������.c
 * 3.�ռ��Ż��浥������
 */

//��
    #include<stdio.h>
    #include<string.h>      //strcmp�õ�
    #include<stdlib.h>      //malloc�����ڴ�,system��������
    #define LengthOfName 10
    
//���� && struct && typedef
    typedef struct stu{
        long long int id;                     //����������-ѧ��
        char name[LengthOfName];   //����������-����
        struct stu *next;                   //����ָ����,ָ����һ���ڵ�
    } NODE;                                     //��struct stu����ΪNODE

    NODE *create_list(int); //��ʼ������¼���һ��int n���ڵ�
    void print(NODE *);     //�Դ�����������
    void insert_change_Node(NODE *, int); //�Դ��������ĵ�int n���ڵ㴦������޸�
    void *list_reversed(NODE *);          //�Դ����������
    void Delete_node(NODE *);          //�Դ������������š�id��name���ַ�ʽɸ��ɾ��
    int Node_length(NODE *);           //�Դ��������ͳ�ƽڵ���������ؽڵ���
    void Sort_List(NODE *);               //�Դ�����������ð������

int main()
{
    //������ʼ��
        char *Choice_menu[5]={  //ָ������,��Ϊ����ѡ��˵�
            "\n************************************************************",
            "\n0: �������/�˳�.\t1:����/�޸Ľڵ�.\t2: ��������.",
            "\n3: ɾ���ڵ�\t\t4:ͳ�ƽڵ���.\t\t5.��ID����",
            "\n************************************************************\n",
            "\n                   �����������ݹ���ϵͳ\n",  //��ӵ�,���ĸ�˳����
        };  
        int n = 0, choice_num = -1;  //��ʼ��ʱ����ڵ���n,ָ����choice_num
        system("cls");
        printf("��ӭʹ��!\n%s%s", Choice_menu[4], Choice_menu[3]);
        do{     //����ѭ��,ȷ��n>0
            printf("���������ʼ��Ҫ�����Ľڵ����: ");
            scanf("%d", &n);
        } while (n < 0);
        NODE *Linked_list = create_list(n); //�˴�������¼���һ������,�������

    //���ܺ�������
    while(choice_num!=0){   //��ʼ��ʱ������choice_num
        system("cls");
        printf("%s %s %s %s %s��������ʵ�ֵĹ������:",Choice_menu[4]
            ,Choice_menu[0],Choice_menu[1],Choice_menu[2],Choice_menu[3]);
        scanf("%d", &choice_num);
        switch(choice_num){
            case 0:{
                printf("�������������� ��������'Q'�˳�����,������:");
                setbuf(stdin, NULL);    //��ջ�����
                char choice = (char)getchar();
                if(choice=='q' || choice=='Q')  //����e��E�˳�����
                    printf("ллʹ��!\t");
                else{
                    print(Linked_list);
                    choice_num = 1; //���ڷ�0״̬,ѭ���������
                }
                break;
            }
            case 1:{
                printf("������Եڼ�(N)�Žڵ����:");
                int n = 0;
                scanf("%d", &n);
                insert_change_Node(Linked_list, n);
                break;
            }
            case 2:{
                list_reversed(Linked_list);
                break;
            }
            case 3:{
                Delete_node(Linked_list);
                break;
            }
            case 4:{
                printf("�ܼƽڵ���Ϊ %d ��.\n", Node_length(Linked_list));
                break;
            }
            case 5:{
                Sort_List(Linked_list);
                break;
            }
            default:{
                printf("�������,������.\n");
                continue;
            }
        }
        system("pause");    //��ͣ,����ȷ����Ϣ
        system("cls");          //����
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
                printf("input id: ID & name :");
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
    
//ɾ���ڵ�
    void Delete_node(NODE *List){
        NODE *pointer = List->next, *pointer_back = List; //�����ƶ�ָ��
        long long int Del_num = 0, Del_id = 0;
        char *Del_name = "", choice = 0;
        while(choice==0){
            printf("A: �ڵ����\tB: id\tC: name ������ɸ������:");
            setbuf(stdin, NULL);
            switch(choice=getchar()){
                case 'a':
                case 'A':{
                    printf("����Ҫɾ���Ľڵ����:");
                    scanf("%lld", &Del_num);
                    break;
                }
                case 'b':
                case 'B':{
                    printf("����Ҫɾ���ڵ��id:");
                    scanf("%lld", &Del_id);
                    break;
                }
                case 'c':
                case 'C':{
                    printf("����Ҫɾ���ڵ��name:");
                    scanf("%s", &Del_name);
                    break;
                }
                default:{
                    printf("�������,������.\n");
                    choice = 0;
                    continue;
                }
            }
        }
        for (int i = 1; pointer != NULL; i++,
        pointer_back = pointer, pointer = pointer->next){   //һֱ�������ƶ�
            if ( i == Del_num || pointer->id == Del_id ||
            strcmp(Del_name, pointer->name)==0 ){
                printf("Press any key to confirm deleting\t%dth node: %lld %s,\tor press 'E' to stop:",i,pointer->id,pointer->name);
                setbuf(stdin, NULL);
                choice=getchar();
                if(choice=='e' || choice == 'E'){
                    return;
                }else{
                    pointer_back->next = pointer->next;
                    free(pointer);
                    return;
                }
            }
        }
        printf("Appointed id not found!\n");
    }

//ͳ�ƽڵ����
    int Node_length(NODE *Linked_list){
        NODE *pointer = Linked_list;
        int cnt = 0;
        while(pointer->next != NULL){
            pointer = pointer->next;
            cnt++;
        }
        return cnt;
    }

//�������е�Ԫ�ؽ�������--ð������
    void Sort_List(NODE *Linked_list){
        for (NODE *p = Linked_list->next; p != NULL; p = p->next){
            for (NODE *q = p->next; q != NULL; q = q->next){
                if(p->id>q->id){
                    int temp_id = p->id;
                    p->id = q->id;
                    q->id = temp_id;
                    char temp_name[LengthOfName] = "";
                    strcpy(temp_name, p->name); //strcpy�в�Ҫ��*s��ʾ�ַ�������
                    strcpy(p->name, q->name);
                    strcpy(q->name, temp_name);

                    /*���󽻻��ڵ�  */
                        // NODE *temp_1 = q;
                        // NODE *temp_2 = q_former;
                        // q_former->next = p_former->next;
                        // q->next = p->next;
                        // p->next = temp_1->next;
                        // p_former->next = temp_2->next;

                    /*��άָ�����׳���(����) */
                        // char **str_1 = (char *)&p->name, **str_2 = (char *)&q->name, **str_temp = (char *)&p->name;
                        // str_1 = str_2;
                        // str_2 = str_temp;
                }
            }
        }
    }