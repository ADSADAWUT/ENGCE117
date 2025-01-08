#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode {
    char name[20] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

struct studentNode *AddNode(struct studentNode **start, const char *name, int age, char sex, float gpa) ;
void ShowAll(struct studentNode *walk) ;
void InsNode(struct studentNode *now, const char *name, int age, char sex, float gpa) ;
void DelNode(struct studentNode *now) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ;  ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ;  ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ;        ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ;         ShowAll( start ) ;
    DelNode( now ) ;                                ShowAll( start ) ;
    
    return 0 ;
}

void ShowAll(struct studentNode *walk) {
    while (walk != NULL) {
        printf("%s ", walk->name) ;
        walk = walk->next ;
    }
    printf("\n") ;
}

struct studentNode *AddNode(struct studentNode **start, const char *name, int age, char sex, float gpa) {
    struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode)) ;

    strcpy(newNode->name, name) ;
    newNode->next = NULL ;

    if (*start == NULL) {
        *start = newNode ;
    } else {
        struct studentNode *walk = *start ;
        walk->next = newNode ;
    }
}

void InsNode(struct studentNode *now, const char *name, int age, char sex, float gpa) {
    struct studentNode *newNode = (struct studentNode *)malloc(sizeof(struct studentNode)) ;
   
   strcpy(newNode->name, name) ;
    newNode->next = now->next ;
    now->next = newNode ;
}

void DelNode(struct studentNode *now) {
    struct studentNode *walk = now->next ;
    now->next = walk->next ;
    free(walk) ;
}
