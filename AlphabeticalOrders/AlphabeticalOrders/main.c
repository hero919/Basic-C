//
//  main.c
//  AlphabeticalOrders
//
//  Created by Zeqing Zhang on 7/18/15.
//  Copyright (c) 2015 Zeqing Zhang. All rights reserved.
//

#include <stdio.h>

int b[5];

void bubble(){
    int a;
    static int v = 4;
    printf("%d\n", v);
    if(v != 1){
        for(a=0;a<v;a++){
            if(b[a]<=b[a+1]){
                ;
            }
            else{
                int c;
                c = b[a];
                b[a] = b[a+1];
                b[a+1]= c;
            }
            
        }
        v = v - 1;
        
        bubble();
    }
    
    
    
    
}





int main() {
    
    
    
    b[0]=10;
    b[1]=5;
    b[2]= 7;
    b[3]=8;
    b[4]= 11;
    
    
    
    
    
    bubble();
    
    int u;
    for(u=0;u<5;u++){
        printf("%d\n", b[u]);
    }
    
    
    
    
    
    
    
}
