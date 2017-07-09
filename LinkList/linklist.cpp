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


void create(int n)
{
    LinkList *lastNode = NULL;
    for(int i=0; i< n;i++)
    {
        LinkList *node = new LinkList;
        node->data = i + 1;
        node->next = NULL;
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
    LinkList *node=new LinkList;
    node->data= a;
    node->next=start;
    start=node;
}

void print()
{
    LinkList *temp;
    temp=start;
    do
    {
        cout<<temp->data;
        temp=temp->next;
    }while(temp!=NULL);
    
}























