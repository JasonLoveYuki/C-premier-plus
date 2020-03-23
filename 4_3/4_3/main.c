//
//  main.c
//  4_3
//
//  Created by JasonYang on 2019/12/13.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>
#include <float.h>
int main(void) {
    double db=1.0/3.0;
    float ft=1.0/3.0;
    printf("fst:%0.6f, snd:%0.6f\n",db,ft);
    printf("fst:%0.12f, snd:%0.12f\n",db,ft);
    printf("fst:%0.16f, snd:%0.16f\n",db,ft);
    printf("fst:%d, snd:%d\n",FLT_DIG,DBL_DIG);
    printf("Hello, World!\n");
    return 0;
}
