/*insert a linked list---
insert at first position
insert at before any node 
insert at the last position
*/
#include<iostream>
//structure of linked list
struct NODE {
    int data;
    struct NODE *link;
};

//used functions
void CREATE_NODE (struct NODE *ptr);
void DISPLAY(struct NODE *ptr);
void INSERT_FRONT(struct NODE **head, int value);
void INSERT_END(struct NODE **ptr, int value);

//main method---
int main(){
    struct NODE *head;
    head = (struct NODE*) malloc(sizeof (struct NODE));
    CREATE_NODE(head);
    DISPLAY(head);
    INSERT_FRONT(&head,10);
    DISPLAY(head);
    INSERT_END(&head,20);
    DISPLAY(head);
    return 0;
}

//create link list
void CREATE_NODE (struct NODE *ptr) {
    struct NODE *temp;
    temp=ptr;

    while(1){
        int ch;
        std::cout<<"ENTER THE ELEMENT: ";
        std::cin>> temp->data;
        temp->link = NULL;
        std::cout<<"DO YOU WANT TO CREATE ANOTHER NODE? (1/0) ";
        std::cin>>ch;
        if(ch==0) break;

        temp->link=(struct NODE *) malloc (sizeof(struct NODE));
        temp=temp->link;
    }
}

//display a linked list
void DISPLAY(struct NODE *ptr){
    struct NODE *temp;
    temp=ptr;
    std::cout<<"ELEMENTS ARE: ";
    while(temp != NULL){
        std::cout<<temp->data<<" ";
        temp=temp->link;
    }
    std::cout<<std::endl;
}

//insert data at front of the linked list
void INSERT_FRONT(struct NODE **head, int value){
    struct NODE *NEW_NODE;
    NEW_NODE =(struct NODE*) malloc(sizeof(struct NODE));
    NEW_NODE->data = value;
    NEW_NODE->link = *head;
    *head = NEW_NODE;
}

//insert data at end of the linked list
void INSERT_END(struct NODE **ptr, int value){
    struct NODE *temp;
    temp=*ptr;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    struct NODE *NEW_NODE;
    NEW_NODE = (struct NODE*) malloc (sizeof(struct NODE));
    NEW_NODE->data=value;
    NEW_NODE->link=NULL;
    temp->link=NEW_NODE;
}
