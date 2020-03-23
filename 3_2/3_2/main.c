//
//  main.c
//  thdC.2
//
//  Created by JasonYang on 2019/12/9.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>

int main(void){
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type short has a size of %zd bytes.\n", sizeof(short));
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type long has a size of %zd bytes.\n", sizeof(long));
    printf("Type long long has a size of %zd bytes.\n",
    sizeof(long long));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n",
    sizeof(double));
    printf("Type long double has a size of %zd bytes.\n",
    sizeof(long double));
    printf("Type _Bool has a size of %zd bytes.\n", sizeof(_Bool));
    return 0;
}
