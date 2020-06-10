/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:32
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-10 11:40:46
 * @FilePath: \demo\C_\数据结构\链表\3\终极优化版单向链表.c
 * 3.终极优化版单向链表
 */

//库
    #include<stdio.h>
    #include<stdlib.h>
    #define LengthOfName 8
    
//函数 && struct && typedef
    typedef struct stu{
        long long int id;                     //链表数据域-学号
        char name[LengthOfName];   //链表数据域-姓名
        struct stu *next;                   //链表指针域,指向下一个节点
    } NODE;                                     //把struct stu命名为NODE

    NODE *create_list(int);
    void print(NODE *);
    void insert_change_Node(NODE *,int);
    void *list_reversed(NODE *);

int main()
{
    //创建初始化
        char *Choice_menu[4]={  //指针数组,作为函数选择菜单
            "\n************************************************************",
            "\n0: 输出链表/退出.\t1 :插入/修改链表.\t2: 倒置链表.",
            "\n3: ",
            "\n************************************************************\n",
        };  
        int n = 0, choice_num = 1;  //初始化时链表节点数n,指令数choice_num
        do{     //保险循环,确保n>0
            printf("输入想要创建的节点个数: ");
            scanf("%d", &n);
        } while (n < 0);
        NODE *Linked_list = create_list(n); //此处创建并录入第一批数据,链表成型

    //功能函数调用
    while(choice_num!=0){   //初始化时定义了choice_num
        printf("%s %s %s %s请输入想实现的功能序号:"
            ,Choice_menu[0],Choice_menu[1],Choice_menu[2],Choice_menu[3]);
        scanf("%d", &choice_num);
        switch(choice_num){
            case 0:{
                printf("按任意键输出链表 或者输入q退出程序,请输入:");
                setbuf(stdin, NULL);    //清空缓冲区
                char choice = (char)getchar();
                if(choice=='q' || choice=='Q')  //输入e或E退出所有
                    printf("谢谢使用!");
                else{
                    print(Linked_list);
                    choice_num = 1; //置于非0状态,循环程序继续
                }
                break;
            }
            case 1:{
                int n = 0;
                printf("请输入对第几(N)号节点操作:");
                scanf("%d", &n);
                insert_change_Node(Linked_list, n);
                break;
            }
            case 2:{
                list_reversed(Linked_list);
                break;
            }
            default:{
                printf("输入错误,请重试.\n");
                break;
            }
        }
    }
    return 0;   //保险起见把终止放在外面
}

//尾插法创建链表(返回头 || 尾)
    NODE *create_list(int n){
        NODE *head, *node, *end;
        head = (NODE *)malloc(sizeof(NODE));
        end = head;
        for (int i = 0; i < n;i++){
            node = (NODE *)malloc(sizeof(NODE));
            printf("分别输入第%d个ID,name : ", i + 1);
            scanf("%lld %s", &node->id, &node->name);
            end->next = node;   //end是上个节点,令其指向当前节点
            end = node;             //让end指向当前节点
        }
        end->next = NULL;
        //选择返回指针
            printf("press any key return head\tor press 'e' to return end:");
            setbuf(stdin, NULL);
            char choice = getchar();
            if(choice=='e' || choice=='E')
                return end;
            else
                return head;
    }

//输出链表
    void print(NODE *head){
        NODE *p = head->next; //for初始条件域内无法同时定义多个不同类型的变量
        for (int i = 1; p != NULL; i++, p = p->next){
            printf("第%d个节点:%lld \t %s \n", i, p->id, p->name);
        }
    }

//插入(后插) && 修改链表
    void insert_change_Node(NODE *headList,int n){
        NODE *p = headList;     //创建NODE类型的移动指针p
        for(int i=0;i<n;i++,p=p->next){
            if(p->next==NULL){
                printf("%dth node hasn't found!\t Input N again or press nothing  to exit :",n);
                scanf("%d", &n);    //重置n
                i = 0;
                p = headList;   //都重置
            }
        } //判断是否存在并把p指向第n节点
        while(1){
            printf("insert or change node? input 'i' or 'c':");
            setbuf(stdin, NULL);
            char choice = getchar();
            if(choice=='i' || choice=='I'){     //插入
                NODE *insertNode =(NODE *)malloc(sizeof(NODE));
                printf("input data: ID & name :");
                scanf("%lld %s", &insertNode->id, &insertNode->name);
                insertNode->next = p->next;
                p->next = insertNode;
                break;
            }else if(choice=='c'|| choice=='C'){    //修改
                printf("请输入修改后的数据:");
                scanf("%lld %s", &p->id, &p->name);
                break;
            }else{
                printf("输入错误.请重试.\n");
                continue;
            }
        }
    }
    
//倒置链表
    void *list_reversed(NODE *List){
        if(List==NULL || List->next==NULL) {    //保证链表非空
            printf("链表过小,无法倒置.\n");
            return List;
        }else{
            NODE *backward = List->next,
                 *temp = (List->next)->next,
                 *forward = (List->next)->next;
            while(forward!=NULL){
                forward = forward->next;          //forward前进
                temp->next = backward;   //指针反转
                backward = temp;           //backward前进
                temp = forward;                    //temp前进
            }
            (List->next)->next = NULL;  //原第二个节点指向NULL
            List->next = backward;
        }
    }
