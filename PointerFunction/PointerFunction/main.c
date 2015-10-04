//
//  main.c
//  PointerFunction
//
//  Created by Zeqing Zhang on 7/27/15.
//  Copyright (c) 2015 Zeqing Zhang. All rights reserved.
//

#include <stdio.h>
int func(int y);
int func2(int a, int b);

int main(int argc, const char * argv[]) {
    
    //int (*a)(int y);
    
    int (*a)(int);
    
    int (*b)(int,int);
    
    b = &func2;
    
    
    
    //a = func;
    
    a = &func;
    
    printf("%d\n", a(2));
    
    printf("%d\n", (*a)(2));
    
    printf("%d\n", (*b)(2,3));
    
    printf("%d\n", b(2,3));
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    printf("Hello, World!\n");
    return 0;
}


int func(int y){
    return 1+y;
}









int func2(int a, int b){
    return a+b;
}