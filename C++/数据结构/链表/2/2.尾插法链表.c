/*
 * @Author: Weidows
 * @Date: 2020-05-29 00:43:53
 * @LastEditors: Weidows
 * @LastEditTime: 2020-05-29 00:44:12
 * @FilePath: \demo\C\���ݽṹ\2.β�巨����.c
 */ 
//2.β�巨����
//��
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
//����ȫ�ֱ���MAXΪ14 
#define MAX 14

struct list    //�����ڵ� 
{ 
	char string;
	struct list *next;
};
typedef struct list node;
typedef node* link;

char string[MAX]={'I',' ','l','o','v','e',' ','p','r','o','g','r','a','m'};//���ݿ� 

link create_list(link head)   //β�巨����
{
	link pointer,newpointer;
	int i;
	
	head=(link)malloc(sizeof(node));//��̬�����ڴ� 
	
	if(head==NULL)//�ж��Ƿ����ɹ� (��ֹ�ڴ�й¶)
		printf("exit\n");
	
	else
	{
		head->string=string[0];
		head->next=NULL;
		pointer=head;
		
		for(i=1;i<MAX;i++)
		{
			newpointer=(link)malloc(sizeof(node));
			
			if(newpointer==NULL)
   				printf("exit\n");
	        else
			{
				newpointer->string=string[i];//β�巨�ľ��� 
				newpointer->next=NULL;
				
				pointer->next=newpointer;   //�������ڶ����ڵ��nextָ���½ڵ�
				pointer=newpointer;     //Ȼ���ٰ�pointerָ���½ڵ�
			}      
		}
	}  
	return head;
}

void printf_list(link head)  //�����ӡ�б��� 
{ 
    link temp;
    temp=head;
    
	while(temp!=NULL)
	{
		printf("%c",temp->string);
		temp=temp->next;
	}
} 


void free_list(link head)  //����һ���ͷ������� 
{
	link temp;

	while(head!=NULL)
	{
		temp=head;
		head=head->next;
		free(temp);
	}
}

int main()
{
    link head = create_list(head);
    if(head!=NULL)
	{
		printf_list(head);
		free_list(head);
	}
	
	return 0;
}
