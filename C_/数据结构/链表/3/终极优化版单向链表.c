/*
 * @Author: Weidows
 * @Date: 2020-05-03 01:18:32
 * @LastEditors: Weidows
 * @LastEditTime: 2020-06-06 23:43:03
 * @FilePath: \demo\C_\数据结构\链表\3\终极优化版单向链表.c
 * 3.终极优化版单向链表
 */

//库
    #include<stdio.h>
    #include<stdlib.h>
    #define LengthOfName 50
    
//函数 && struct && typedef
    typedef struct stu{
        long long int id;                     //链表数据域-学号
        char name[LengthOfName];   //链表数据域-姓名
        struct stu *next;                   //链表指针域,指向下一个节点
    } NODE;                                     //把struct stu命名为NODE

    NODE *create_list(int);
    void print(NODE *);
    void insert_change_Node(NODE *,int);
    NODE *list_reversed(NODE *);

int main()
{
    //创建初始化
        int n;
        printf("输入想要创建的节点个数: ");
        scanf("%d", &n);
        NODE *head = create_list(n);
    //函数功能测试
        insert_change_Node(head, 2);
        // head=list_reversed(head);
        print(head);
        
    return 0;
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
        while(n!=0){
            printf("return head or end? Input 'h' or 'e':");
            setbuf(stdin, NULL);
            char choice = getchar();
            switch(choice){
                case 'H':   //无break意思就是H/h都执行下面的命令
                case 'h': return head; break;
                case 'E':
                case 'e': return end; break;
                default : printf("输入错误.请重试.\n"); break;
            }
        }
    }

//输出链表
    void print(NODE *head){
        NODE *p = head->next; //for初始条件域内无法同时定义多个不同类型的变量
        for (int j = 1; p != NULL; j++, p = p->next){
            printf("第%d个节点:%lld\t%s\n", j, p->id, p->name);
        }
    }

//插入(后插) && 修改链表
    void insert_change_Node(NODE *headList,int n){
        NODE *p = headList;     //创建NODE类型的移动指针p
        for(int i=0;i<n;i++,p=p->next){
            if(p->next==NULL){
                printf("%dth node hasn't found!\n",n);
                return;
            }
        } //判断是否存在并把p指向第n节点
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
                    printf("请输入修改后的数据:");
                    scanf("%lld %s", &p->id, &p->name);
                    return;
                }
                default:
                    printf("输入错误.请重试.\n");
                    continue;
            }
        }
    }
    
//倒置链表
    NODE *list_reversed(NODE *List){
        if(List==NULL || List->next==NULL) {    //保证链表非空
            printf("链表过小,无法倒置.\n");
            return List;
        }else{
            NODE *forword = List, *temp = List->next, *next = List->next, *head = (NODE *)malloc(sizeof(NODE));
            while(next!=NULL){
                next = next->next;          //next前进
                temp->next = forword;   //指针反转
                forword = temp;              //forword前进
                temp = next;                    //temp前进
            }
            (List->next)->next = NULL;  //原第二个节点指向NULL
            free(List);     //原头节点清除
            head->next = forword;   //新头节点连接上
            return head;
        }
    }
