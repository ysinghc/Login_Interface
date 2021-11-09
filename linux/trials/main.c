#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

void welcome(void){
    printf("Welcome\n");
    delay(5000);
    system("clear");
}

char losi(void){
    system("clear");
    printf("(L)ogin\n(S)ignup\n");
    char losi;
    scanf("%c",&losi);
    losi = tolower(losi);
    return losi;
}
int main(void){
    //opening database
    FILE *db = fopen("database.csv","a");
    if(db == NULL){
        printf("Some error opening file\n");
        return 1;
    }

    //custom data-structure for profile
    typedef struct
    {
        char username[20];
        char password[16];
    }
    profile;
    profile template_profile;

    //Welcome Screen for 5 seconds
    welcome();
    
    //login and signup prompt
    do
    {
        char a = losi();

        if(a == 'l'){
            printf("username:- ");
            scanf("%s",template_profile.username);
            printf("password:- ");
            scanf("%s",template_profile.password);
            break;
        }
        else if(a == 's'){
            printf("username:- ");
            scanf("%s",template_profile.username);
            printf("password:- ");
            scanf("%s",template_profile.password);
            break;
        }
        else{
            continue;
        }
    
    }while(1);
    
}