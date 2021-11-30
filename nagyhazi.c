#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _person
{
    int id;
    int age;
    char *name;
    char *nationality;
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
    
    char row[50];
    FILE *f1, *f2, *f3 ;
    person *person_list;
    f1=fopen("persons.txt", "r");

    while(fscanf(f1,"%s[^\n]", row)==1)
    {
        char * data = strtok(row,";");
        while(data != NULL)
        {
            int person_number = 0;
           
           printf("%s",data);
           person_list->id=*data;
           data=strtok(NULL,";");
           printf("%s",data);
           person_list->name=data;
           data=strtok(NULL,";");
           printf("%s",data);
           person_list->age=(int *)data;
           data=strtok(NULL,";");
           printf("%s",data);
           person_list->nationality=data;
           data=strtok(NULL,";");
           person_list=person_list->next;
            
        }
        
    }

return 0;

}