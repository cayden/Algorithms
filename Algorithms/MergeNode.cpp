//
//  MergeNode.cpp
//  Algorithms
//  2、合并两个单链表;
//  Created by 崔冉 on 16/11/2.
//  Copyright © 2016年 cuiran. All rights reserved.
//

#include "MergeNode.hpp"
#include <stdio.h>
#include <iostream>
struct NodeL
{
    int value;
    NodeL* next;
    NodeL(int value_=0, NodeL* next_=NULL):value(value_),next(next_){}
};


//合并两个单链表
NodeL* MergeList(NodeL* head1,NodeL* head2)
{
    if (head1==NULL)
        return head2;
    if (head2==NULL)
        return head1;
    
    NodeL* head=NULL;
    if (head1->value<head2->value)
    {
        head=head1;
        head1=head1->next;
    }else{
        head=head2;
        head2=head2->next;
    }
    NodeL* tmpNode=head;
    while (head1 && head2)
    {
        if (head1->value<head2->value)
        {
            head->next=head1;
            head1=head1->next;
        }else{
            head->next=head2;
            head2=head2->next;
        }
        head=head->next;
    }
    if (head1)
    {
        head->next=head1;
    }
    if (head2)
    {
        head->next=head2;
    }
    return tmpNode;
}

void mergeListTest()
{
    NodeL* head1=new NodeL(1);
    NodeL* cur=head1;
    for (int i=3;i<10;i+=2)
    {
        NodeL* tmpNode=new NodeL(i);
        cur->next=tmpNode;
        cur=tmpNode;
    }
    NodeL* head2=new NodeL(2);
    cur=head2;
    for (int i=4;i<10;i+=2)
    {
        NodeL* tmpNode=new NodeL(i);
        cur->next=tmpNode;
        cur=tmpNode;
    }
    NodeL* head=MergeList(head1,head2);
    while (head)
    {
        std::cout<<head->value<<" ";
        head=head->next;
    }
}