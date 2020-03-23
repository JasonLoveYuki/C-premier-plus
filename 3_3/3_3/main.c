//
//  main.c
//  3_3
//
//  Created by JasonYang on 2019/12/10.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>

int main(void) {
    float vl;
    printf("Enter a floating-point value: ");
    scanf("%f",&vl);
    printf("fixed-point notation: %f\n",vl);
    printf("exponetial notatin: %e\n",vl);
    printf("p notation: %A\n", vl);
    
    return 0;
}
