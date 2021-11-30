#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _person
{
    int id;
    int age;
    char name[21];
    char nationality[4];
    struct person *next;
}person;

typedef struct _trick
{
    char trick_id[20];
    int points;
    struct trick *next;
}trick;



int main()
{
    
    char c[50];
    FILE *f1, *f2, *f3 ;
    f1=fopen("persons.txt", "r");

    while(fscanf(f1,"%s[^\n]", c)==1)
    {
        char * data = strtok(c,";");
        while(data!=NULL)
        {
            printf("%s\n", data);
            data=strtok(NULL,";");
        }
        
    }

return 0;

}