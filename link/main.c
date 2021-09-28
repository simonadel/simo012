#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node
{
    int Data;
    Node *Next, *Prev;
};

Node *head = NULL, *tail = NULL;

void Add(int data)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->Data = data;
    newNode->Prev = newNode->Next = NULL;

    if(head == NULL) // linked list is empty
    {
        head = tail = newNode;
    }
    else
    {
        tail->Next = newNode;
        newNode->Prev = tail;
        tail = newNode;
    }
}

void Display()
{
    Node *current = head;

    while(current != NULL)
    {
        printf("%d \t", current->Data);
        current = current->Next;
    }
}

Node* Search(int data)
{
    Node *current = head;

    while(current != NULL)
    {
        if(current->Data == data)
        {
            return current;
        }

        current = current->Next;
    }

    return NULL;
}

void Delete(int data)
{
    Node *pDelete = Search(data);

    if(pDelete == NULL)
        return ;

    if(pDelete == head)
    {
        if(pDelete == tail)
        {
            head = tail = NULL;
        }
        else
        {
            head = pDelete->Next;
            head->Prev = NULL;
        }
    }
    else if(pDelete == tail)
    {
        tail = pDelete->Prev;
        tail->Next = NULL;
    }
    else
    {
        pDelete->Prev->Next = pDelete->Next;

        pDelete->Next->Prev = pDelete->Prev;
    }


    free(pDelete);
}
/*void Insertnode(int value){

Node * new_node ,*last;
new_node=new Node;
new_node->data=value;

 if(head == NULL)
     head=new_node;
     new_node->next=NULL;


        else
        {
            head = pDelete->Next;
            head->Prev = NULL;
}*/

void InsertAfter(int afterData, int data){
Node *ps = Search(afterData);
    Node *newnode = (Node *) malloc(sizeof(Node));
 newnode->Data=data;
 newnode->Prev=newnode->Next=NULL;

 if( ps==tail){
    ps->Next=newnode;
    newnode->Prev=tail;
    newnode->Next=NULL;
 }
 else{
    newnode->Next=ps->Next;
    ps->Next=newnode;
    newnode->Prev=ps;

 }


}

int GetItemsCount(){
    int count =0;

    Node *current = head;

    while(current != NULL)
    {
       count++;
           current=current->Next;

}
return count;
}
int GetByIndex(int index){
int i=1;

    Node *current = head;

    while(current != NULL)
    {

     if(i==index)
     {
         return current ->Data;
     }
           current=current->Next;
         i++;
    }
    return NULL;
}

//Node* Reverse(Node *head);

int main()
{
    Add(3);
    Add(5);
    Add(7);
    Add(9);



    InsertAfter(5,6);
      Display();

    printf("%i \n",GetItemsCount());
    printf("%i \n",GetByIndex(3));


   //Delete(7);
    return 0;
}

