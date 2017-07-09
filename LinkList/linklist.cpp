//
//  linklist.cpp
//  LinkList
//
//  Created by Sunil Pandey on 09/07/17.
//  Copyright © 2017 Sunil Pandey. All rights reserved.
//

#include "linklist.hpp"
#include <iostream>
using namespace std;

typedef struct node{
    struct node * next;
    int data;
} LinkList;

LinkList *start = NULL;
LinkList *createNode(int data)
{
    LinkList *node =new LinkList;
    node->data=data;
    node->next=NULL;
    return node;
}

void create(int n)
{
    LinkList *lastNode = NULL;
    for(int i=0; i< n;i++)
    {
        
        LinkList *node = createNode(i+1);
        if(start == NULL) {
            start = node;
            lastNode = start;
        }else {
            lastNode->next = node;
            lastNode = node;
        }
    }
}


void insertAtStart(int a) {
    LinkList *node = createNode(a);
    node->next=start;
    start=node;
}

void print()
{
    LinkList *temp;
    temp=start;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=NULL);
    
    cout<<"\n";
    
}

void addlast(int data)
{
    LinkList *temp;
    LinkList *node = createNode(data);
    for (temp = start; temp -> next != NULL; temp = temp -> next);
    
    temp->next=node;
}

void insertAtIndex(int index, int data)
{
    LinkList *temp = start;
    for(int i=1;i< index -1;i++)
    {
        temp=temp->next;
    }
    LinkList *node = createNode(data);
    node->next = temp->next;
    temp->next=node;
    
}
