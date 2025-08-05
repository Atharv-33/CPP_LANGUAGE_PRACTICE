#include <stdio.h>
#include <stdlib.h>


#define OFFSET_OF(type,mem) ((unsigned long long)(&((type *)0)->mem))
#define CONTAINER_OF(addr,type,mem)  ((type *)((unsigned long long)addr - OFFSET_OF(type,mem)))
#define LIST_HEAD(list_name) list_name.next = NULL ,list_name.prev = NULL


struct list_head
{
    struct list_head *next;
    struct list_head *prev;
};

struct generic 
{
    int data;
    struct list_head list;
};

void list_add_tail(struct list_head *head);
void list_add_head(struct list_head *head);

void list_delete_tail(struct list_head *head);
void list_delete_head(struct list_head *head);



void display(struct list_head*);



int main(void)
{
    // first indivisible step
    int option;

    struct list_head *head = (struct list_head*) malloc(sizeof (struct list_head));
   
    head->next = NULL;
    head->prev = NULL;

    while (1)
    {
        printf("\n 1 : Add node at tail  ");
        printf("\n 2 : Add node at head ");
        printf("\n 3 : Delete node at tail  ");
        printf("\n 4 : Delete node at head ");
        printf("\n 5 : Display ");
        printf("\n 6 : Exit ");

        printf("\n Enter option : ");
        scanf("%d",&option);

        switch (option)
        {
            case 1 :list_add_tail(head);
                    break;
            case 2 :list_add_head(head);
                    break;
            case 3: list_delete_tail(head);
                     break;
            case 4 :list_delete_head(head);
                     break;
            case 5 : display(head);
                     break;
            case 6 : printf("\n Thank you ");
                     exit(0);
                     break;
            default:printf(" Enter valid option ");
        }if (option != 5)
             display(head);

    }
}



void list_add_head(struct list_head *head)
{
    struct generic* newBlock;

    newBlock = (struct generic *) malloc(sizeof (struct generic));

    if (NULL == newBlock)
    {
        puts("Error in allocating memory");
        exit(-1);
    }
    
    printf(" \n Enter data : ");
    scanf("%d",&newBlock->data);
    
    newBlock->list.next = newBlock->list.prev = NULL;

    

    if (head->next == NULL)
    {
        head->prev = NULL;
        head->next = &(newBlock->list);

        newBlock->list.prev = head ;
        newBlock->list.next = NULL;
    }
    else
    {
        struct list_head *iter = head->next;

        
        head->next = &(newBlock->list);

        newBlock->list.next = iter;
        
        iter->prev = &(newBlock->list);
        
        newBlock->list.prev = head;

    }
}


void list_add_tail(struct list_head *head)
{
    struct generic* newBlock;

    newBlock = (struct generic *) malloc(sizeof (struct generic));

    if (NULL == newBlock)
    {
        puts("Error in allocating memory");
        exit(-1);
    }
    
    printf(" \n Enter data : ");
    scanf("%d",&newBlock->data);
    
    newBlock->list.next = newBlock->list.prev = NULL;

    

    if (head->next == NULL)
    {
        head->prev = NULL;
        head->next = &(newBlock->list);

        newBlock->list.prev = head ;
        newBlock->list.next = NULL;
    }
    else
    {
        struct list_head *iter = head->next;

        while (iter->next != NULL)
        {
            iter = iter -> next;
        }

        // struct generic* prefix = CONTAINER_OF(iter,)

        iter->next = &(newBlock->list);

        newBlock->list.prev = iter;
        newBlock->list.next = NULL;

    }
}

void display(struct list_head* head)
{
    for (
        struct list_head* iter = head->next;
        iter != NULL;
        iter = iter->next
    )
    {
        struct generic *ptr = CONTAINER_OF(iter,struct generic,list);
        printf(" %d -> ",ptr->data);
    }

}

void list_delete_tail(struct list_head *head)
{
    if (NULL == head->next ) 
    {
        puts(" Empty Link List");
        return;
    }

    struct list_head* iter = head;

    while (iter->next->next != NULL)
    {
        iter = iter->next;
    }

    struct generic* previous = CONTAINER_OF(iter,struct generic,list);

    // printf("\n previous data : %d",previous->data);

    struct generic* to_delete =CONTAINER_OF((previous->list.next),struct generic,list);

    // printf("\n to_delete data : %d",to_delete->data);

    free(to_delete);

    previous->list.next= NULL;

}
void list_delete_head(struct list_head *head)
{
    if (NULL == head->next ) 
    {
        puts(" Empty Link List");
        return;
    }

    struct list_head * iter =head->next;
    struct list_head * next_to_delete = iter->next;

    struct generic* to_delete = CONTAINER_OF(iter,struct generic ,list);

    // head->next = 
    if (next_to_delete == NULL)
    {
        free(to_delete);

        head->next = NULL;
        head->prev = NULL;

        to_delete = NULL;
    }
    else
    {
        struct generic* next_block = CONTAINER_OF(next_to_delete,struct generic ,list);

        head->next = &(next_block->list);

        next_block->list.prev = head;

        to_delete->list.next = NULL;
        to_delete->list.prev = NULL;

        free(to_delete);

        to_delete = NULL;
    }
}