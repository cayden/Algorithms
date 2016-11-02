//
//  MergeSort.cpp
//  Algorithms
//  1、合并排序，将两个已经排序的数组合并成一个数组，其中一个数组能容下两个数组的所有元素;
//  Created by 崔冉 on 16/11/2.
//  Copyright © 2016年 cuiran. All rights reserved.
//

#include "MergeSort.hpp"
#include <stdio.h>
#include <iostream>
MergeSort::MergeSort(){}

void MergeSort :: mergeArray(int a[], int alen, int b[],int blen)
{
 
    int len=alen+blen-1;
    alen--;
    blen--;
    while(alen>=0&&blen>=0){
        
        if(a[alen]>b[blen]){
            
            a[len--]=a[alen--];
            
        }else{
            
            a[len--]=b[blen--];

        }
    }
    
    while (alen>=0)
    {
        a[len--]=a[alen--];
    }
    while (blen>=0)
    {
        a[len--]=b[blen--];
    }
}

void MergeSort::mergeArrayTest(){
    int a[]={2,4,6,8,10,0,0,0,0,0};
    int b[]={1,3,5,7,9};
    mergeArray(a,5,b,5);
    for (int i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        std::cout<<a[i]<<" ";
    }
}