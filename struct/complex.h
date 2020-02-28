//
//  complex.h
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//

#ifndef complex_h
#define complex_h
//#include "structure_complex.h"
#include <stdio.h>
#include <math.h>
struct complex_struct {
    double x, y;
};

double real_part (struct complex_struct z);
double img_part (struct complex_struct z);
double magnitude (struct complex_struct z);
double angle (struct complex_struct z);
struct complex_struct make_from_real_img (double x, double y);
struct complex_struct make_from_mag_ang(double r, double A);
struct complex_struct add_complex (struct complex_struct z1, struct complex_struct z2);
struct complex_struct sub_complex (struct complex_struct z1, struct complex_struct z2);
struct complex_struct mul_complex (struct complex_struct z1, struct complex_struct z2);
struct complex_struct div_complex (struct complex_struct z1, struct complex_struct z2);



#endif /* complex_h */
