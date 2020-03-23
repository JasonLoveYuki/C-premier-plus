//
//  main.c
//  sndC
//
//  Created by JasonYang on 2019/12/8.
//  Copyright © 2019 JasonYang. All rights reserved.
//

#include <stdio.h>
void one_three(void);
void one(void);
void two(void);
void three(void);
int main()
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");
}
void one_three(void)
{
    one();
    two();
    three();
}
void one(void)
{
    printf("one\n");
}
void two(void)
{
    printf("two\n");
}
void three(void)
{
    printf("three\n");
}
