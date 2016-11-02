//
//  MergeSort.cpp
//  Algorithms
//
//  Created by 崔冉 on 16/11/2.
//  Copyright © 2016年 cuiran. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle()
{
    this->r=5.0;
}

Circle::Circle(double R)
{
    this->r=R;
}

double Circle:: Area()
{
    return 3.14*r*r;
}