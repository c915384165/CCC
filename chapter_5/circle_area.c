//
//  circle_area.c
//  C_language_learning
//
//  Created by mac on 2020/2/27.
//  Copyright © 2020 mac. All rights reserved.
//

#include "circle_area.h"


double distance(double x1, double y1, double x2, double y2)
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);

    return distance;
}

double area_c(double radius)
{
    double pi = 3.1416;
    double area_of_c = pi * radius * radius;

    return area_of_c;
}

double area_point(double x1, double y1, double x2, double y2)
{

    return area_c(distance(x1, y1, x2, y2));
}
