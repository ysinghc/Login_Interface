#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ncurses.h>
#include <ctype.h>
#include <stdbool.h>
//main
int main(void){
    //custom data structure
    typedef struct{
        char *username;
        char *password;
        char *name;
    }
    profile;
    //opening database
    FILE *db = fopen("database.csv","a");
    //creating a temp profile
    profile temp;
    //losi function
    int a = 0;
    while(a==0){
        char losi;
        
        printf("(L)ogin\n(S)ignup\n");
        scanf("%c",&losi);
        losi = tolower(losi);
        if(losi == 'l'){
            
            printf("Username:- ");
            scanf("%s", &temp.username);
            printf("Password:- ");
            scanf("%s", &temp.password);
            a++;
        }
        else if(losi == 's'){
            
            printf("Name:- ");
            scanf("%s", &temp.name);
            printf("Username:- ");
            scanf("%s", &temp.username);
            printf("Password:- ");
            scanf("%s", &temp.password);
            a++;
        }
    }

    printf("%s %s %s", &temp.name, &temp.username, &temp.password);
}