//
//  complex2.h
//  C_language_learning
//
//  Created by mac on 2020/2/25.
//  Copyright © 2020 mac. All rights reserved.
//

#ifndef complex2_h
#define complex2_h

#include <stdio.h>
#include <math.h>

struct complex_struct_angle {
    double r, A;
};

double angle_angle(struct complex_struct_angle z);

double real_part_angle(struct complex_struct_angle z);

double img_part_angle(struct complex_struct_angle z);

double magnitude_angle(struct complex_struct_angle z);

struct complex_struct_angle make_from_mag_ang_ang(double r, double A);

struct complex_struct_angle make_from_real_img_angle(double x, double y);

#endif /* complex2_h */
