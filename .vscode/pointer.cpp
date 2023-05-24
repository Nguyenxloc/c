
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
struct DLLNode{
    int data;
    struct DLLNode*next;
    struct DLLNode*prev;
};
void DLLInsert(struct DLLNode**head, int data, int position){

    int k = 1;
    struct DLLNode*temp, *newNode;
    newNode = (struct DLLNode*)malloc(sizeof(10));
    if(!newNode){
        printf("Momery Error");
        return;
    }
    newNode->data = data;
    if(position==1){
        newNode->next = *head;
        newNode->prev = NULL;
        
        if(*head)
          (*head)->prev = newNode;
        *head = newNode;
        return;
    }
    temp = *head;
    while((k<position - 1) && temp->next!=NULL){
        temp = temp ->next;
        k++;
    }
    if(k!=position){
         printf("Desired position does not exist \n");
    }
    newNode ->next =temp->next;
    newNode ->prev =temp; 
    if(temp ->next)
       temp->next->prev=newNode;
    temp->next = newNode;
    return;
}


int main()
{
    int myAge = 18;
    int **ptr;
   
}
