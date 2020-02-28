
//  complex2.c
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//

#include "complex2.h"


double real_part_angle (struct complex_struct_angle z)
{
    return z.r * cos(z.A);
}

double img_part_angle (struct complex_struct_angle z)
{
    return z.r * sin(z.A);
}

double magnitude_angle (struct complex_struct_angle z)
{
    return z.r;
}

double angle_angle (struct complex_struct_angle z)
{
    return z.A;
}

struct complex_struct_angle make_from_real_img_angle(double x, double y)
{
    struct complex_struct_angle z;
    double PI = acos(-1.0);
    z.r = sqrt(x * x + y * y);
    if (x > 0)
        z.A = atan(y / x);
    else
        z.A = atan(y / x) + PI;
    return z;
}

struct complex_struct_angle make_from_mag_ang_ang(double r, double A) {
    struct complex_struct_angle z;
    z.r = r;
    z.A = A;
    return z;
}
