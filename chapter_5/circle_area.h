//  例5.1 distance 函数
//  一直两点坐标，求圆形面积
//  circle_area.h
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#ifndef circle_area_h
#define circle_area_h

#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2); // 两点距离
double area_c(double radius); // 半径求圆面积
double area_point(double x1, double y1, double x2, double y2); // 结合两点求圆的面积
#endif /* circle_area_h */
