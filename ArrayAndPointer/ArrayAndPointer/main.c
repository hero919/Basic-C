//
//  main.c
//  ArrayAndPointer
//
//  Created by Zeqing Zhang on 7/26/15.
//  Copyright (c) 2015 Zeqing Zhang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /*
     
     一维指针
   
    int a[10] = {
      2,3,4,5,6,7,8,9,10,11
    };
    
    
    int *p1;
    
    p1 = a;
    
    
    printf("%d\n", *p1);
    
    printf("%d\n", *(p1+1));
    
    
    */
    
    
    int b[][3]={
      2,12,4,5,6,7,8,9
    };
    
    
    
    int *p;
    
    p = b;
    
    
  
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *(p+2));
    printf("%d\n", *(p+3));
    printf("%d\n", *(p+8));
    
    
    
    int **p3;
    
    p3 =b;
    
    printf("%d\n", *p3);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
