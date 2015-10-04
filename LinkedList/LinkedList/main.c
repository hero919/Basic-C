//
//  main.c
//  LinkedList
//
//  Created by Zeqing Zhang on 7/18/15.
//  Copyright (c) 2015 Zeqing Zhang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct element{
    int value;
    struct element* next;
};


struct element bot;



struct element* instead;

struct element* instead2;



int pop(){
    instead = &bot;
    int a;
    
    if(bot.next != NULL){
    while(instead->next != NULL){
        instead2 = instead;
        instead = instead->next;
        
    }
    instead2->next = NULL;
        
        a = instead->value;
        free(instead);
    
    return a;
    
    
    }
    
    else{
        return 0;
    }
    
    
    
    
}




void push(struct element a){
   
    instead = &bot;
    
    
    while(instead->next != NULL){
        printf("%d",1);
        instead = instead->next;
        
    }
    
    instead->next = (struct element*)malloc(sizeof(struct element));
    
    instead->next->value = a.value;
    
    instead->next->next = NULL;
    
}



int main() {
    bot.next = NULL;
    struct element a;
    a.next = NULL;
    a.value = 10;
    
    struct element b;
    b.next = NULL;
    b.value = 30;
    
    push(a);
    
    
    int y;
    
    struct element* v = &bot;
    for(y = 0; y<1; y++){
        printf("%d\n", v->next->value);
        v = v->next;
        
    }
    
    
    
    
    
    pop();
    v = &bot;
    for(y = 0; y<1; y++){
        printf("%d\n", v->next->value);
        v = v->next;
        
    }
    
   
}




























