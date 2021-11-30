#include <stdlib.h>
#include <stdio.h>

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

typedef struct best
{
    struct best *next;
    person data;
}best;

int main()
{
    printf("Hello");
    char c[21];
    FILE *f1, *f2, *f3 ;
    f1=fopen("persons.txt", "r");
    while(fscanf(f1,"%s[^\n]", c)==1)
    {
        printf("%s\n", c);
    }

return 0;

}