#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct _person
{
    int id;
    int age;
    char name[50];
    char nationality[4];
    struct _person *next;
} person;

typedef struct _trick_per_person
{
    int person_id;
    int points;
    char *trick_names;
    struct _trick_per_person * next;
}trick_per_person;

typedef struct _trick
{
    char trick_id[20];
    int points;
    struct _trick *next;
} trick;

void name(char *str, FILE *f1)
{
    int i = 0;
    while (fscanf(f1, "%c", &str[i]) == 1 && str[i] != ';')
    {
        i++;
    }
    str[i] = '\0';
}

void fill_person_list(person *head)
{
    FILE *f1;

    f1 = fopen("persons.txt", "r");
    if (f1 == NULL)
    {
        printf("Error while opening file.\n");
        return;
    }
        fscanf(f1, "%d;", &head->id);
        name(head->name, f1);
        fscanf(f1, "%d;", &head->age);
        fscanf(f1, "%s", head->nationality);
        int id;
        person *p=head;
    while (fscanf(f1, "%d;", &id) == 1)
    {
        person *q = (person *)malloc(sizeof(person));
        q->id=id;
        name(q->name, f1);
        fscanf(f1, "%d;", &q->age);
        fscanf(f1, "%s", q->nationality);
        p->next=q;
        q->next=NULL;
        p = q;
    }
    fclose(f1);
}
    person * youngest(person *head)
{
    if(head==NULL && head->next==NULL)
    {
        return head;
    }
    if(head->next->next==NULL)
    {
        if(head->age >= head->next->age)
        {
            person *p=head;
            head = head->next;
            head->next=p;
            p->next=NULL;
            return head;
        }
        return head;
    }
    person *q=head;
    person *r=head->next;
    person *s=head->next->next;
    while(s != NULL)
    {
        if(head->age >= r->age)
        {
            q->next=s;
            r->next=head;
            head=r;
            r=s;
            s=s->next;
            continue;
        }
        q=q->next;
        r=r->next;
        s=s->next;
    }
    if(r->age <= head->age)
    {
        s->next=NULL;
        r->next=head;
        head=r;
    }
    return head;
}
int get_points_by_trickname(char *trickname, trick *head)
{
    if()
}
/* végigmegyünk a trick_name listán és az abban lévő összes elemre meghívjuk a 
get_points_by_trickname fv.-t és az onnan visszakapot értéket hozzáadjuk az előzőekhez*/
int get_points_by_tricklist(char *trickname_list, trick *head) 
{
    int sum=0;

    return sum;
}
int main()
{
    person *head = (person *)malloc(sizeof(person));

    fill_person_list(head);
    person *newhead = youngest(head);
    return 0;
}