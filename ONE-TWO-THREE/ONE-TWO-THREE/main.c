//
//  main.c
//  ONE-TWO-THREE
//
//  Created by Zeqing Zhang on 8/7/15.
//  Copyright (c) 2015 Zeqing Zhang. All rights reserved.
//


/* One - Two -Three
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char a[]){
    
    int cal = 0;
    
        if(a[0]=='o'){
            cal=cal+1;
            
        }
        if(a[1]=='n'){
            cal = cal+1;
        }
        if(a[2]=='e'){
            cal = cal + 1;
    }
    
    

    if(cal>=2){
        return 1;
    }else{
        return 0;
    }
    
    
    
    
}




int determine(char a[]){
    if(strlen(a)==5){
        return 3;
    }else if(check(a)){
        return 1;
    }else{
        return 2;
        
    }
    
    
    
}







int main()
{
    int a;
    while(scanf("%d", &a) != EOF) {
        int b;
        char c[6];
        for(b=0;b<a;b++){
            scanf("%s",c);
            printf("%d\n", determine(c));
            
            
        }
    }
 
    
    
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    char a[100];
    while(scanf("%s", a) != EOF){
        int i;
        int j;
        char h;
        for(i=0;i<strlen(a);i++){
            for(j=i;j<strlen(a);j++){
                if(a[j]<a[i]){
                    char h = a[i];
                    a[i]=a[j];
                    a[j]=h;
                }
            }
            
        }
        printf("%s", a);
        
    }
    
    
    
    

}
































