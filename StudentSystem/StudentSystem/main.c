//
//  main.c
//  StudentSystem
//
//  Created by Zeqing Zhang on 7/18/15.
//  Copyright (c) 2015 Zeqing Zhang. All rights reserved.
//

#include <stdio.h>

#include <string.h>






struct student{
    int id;
    int grade;
};

struct student s[100];
static int p = 0;



int mainPage(){
    int number;
    
    printf("%s\n", "Enter 1 to check the student information");
    printf("%s\n","Enter 2 to add the student information");
    scanf("%d", &number);
    //printf("%d", number);
    
    return number;
}



void addStudent(){
    
    
    
    
    int a;
    int b;
    printf("%s", "The student id is: ");
    scanf("%d", &a);
    printf("%s", "\n The student grade is: ");
    scanf("%d", &b);
    
    
    s[p].id=a;
    s[p].grade = b;
    
    p = p + 1;
    
   
}








int main() {
    
    while(1){
        int l;
        l = mainPage();
    if(l ==1){
    
        int y;
        for(y = 0; y <p ;y++ ){
            printf("%d %d\n",s[y].id, s[y].grade);
            
        }
        
        
        
        
        
    }else if(l == 2){
        
        addStudent();
        
        
        
        
        
        
    }else{
        printf("%s","You enter the wrong number");
        
    }
    
    
    
    }
    
    
    
    
    
    
    
    
    
    
    }







