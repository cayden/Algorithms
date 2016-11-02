//
//  main.cpp
//  Algorithms
//
//  Created by 崔冉 on 16/11/2.
//  Copyright © 2016年 cuiran. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
#include "MergeSort.hpp"
using namespace std;

//0 test1 测试
void test1(){
    Circle c(3);
    cout<<"Area="<<c.Area()<<endl;
    
}

//1、合并排序，将两个已经排序的数组合并成一个数组，其中一个数组能容下两个数组的所有元素;
void testMergeSort(){
    MergeSort m;
    m.mergeArrayTest();
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
//    test1();
    testMergeSort();
    
    return 1;
}
