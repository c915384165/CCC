//
//  complex.c
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//

#include "complex.h"

double real_part (struct complex_struct z)
{
    return z.x;
}

double img_part (struct complex_struct z)
{
    return z.y;
}

double magnitude (struct complex_struct z)
{
    return sqrt(z.x * z.x + z.y * z.y);
}

double angle (struct complex_struct z)
{
    double PI = acos(-1.0);
    if (z.x > 0)
        return atan(z.y/z.x);
    else
        return atan(z.y/z.x) + PI;
}

struct complex_struct make_from_real_img (double x, double y)
{
    struct complex_struct z;
    z.x = x;
    z.y = y;
    return z;
}

struct complex_struct make_from_mag_ang(double r, double A)
{
    struct complex_struct z;
    z.x = r * cos(A);
    z.y = r * sin(A);
    return z;
}

struct complex_struct add_complex (struct complex_struct z1, struct complex_struct z2)
{
    return make_from_real_img(real_part(z1) + real_part(z2), img_part(z1) + img_part(z2));
}

struct complex_struct sub_complex (struct complex_struct z1, struct complex_struct z2)
{
    return make_from_real_img(real_part(z1) - real_part(z2), img_part(z1) - img_part(z2));
}

struct complex_struct mul_complex (struct complex_struct z1, struct complex_struct z2)
{
    return make_from_mag_ang(magnitude(z1) * magnitude(z2), angle(z1) + angle(z2));
}

struct complex_struct div_complex (struct complex_struct z1, struct complex_struct z2)
{
    return make_from_mag_ang(magnitude(z1) / magnitude(z2), angle(z1) - angle(z2));
}

void print_complex (struct complex_struct z)
{
    if (z.x != 0.0 && z.y > 0.0)
        printf("%.1f+%.1fi\n", z.x, z.y);
    else if (z.x != 0.0 && z.y < 0.0)
        printf("%.1f%.1fi\n", z.x, z.y);
    else if (z.x == 0.0 && z.y != 0.0)
        printf("%.1fi\n", z.y);
    else if (z.y == 0.0 && z.x != 0.0)
        printf("%.1f\n", z.x);
    else if (z.y == 0.0 && z.x == 0.0)
        printf("0\n");
}
