/*
********GPA Calculator********
enter credit hours and grade:
Credit hours of class effects GPA.  Grade*Hours = Class "points"
User enters...
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <string.h>

double toPoints(char* grade);

typedef struct node_t {
    double hours;
    double grade;
    struct node_t* next;
} node_t;

node_t* head = NULL;

void add_end(double hours, double grade)
{
    node_t* node = malloc(sizeof(node_t) * 1);
    node->hours = hours;
    node->grade = grade;
    node->next = NULL;

    if (head == NULL)
    {
        head = node;
        return;
    }

    node_t *prev = NULL;
    node_t *cur = head;

    while (cur != NULL)
    {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL)
    {
        prev->next = node;
        return;
    }
}

void dump()
{
    node_t* temp = head;

    while (temp != NULL)
    {
        printf("hours: %f    gradeNum: %f\n", temp->hours, temp->grade);
        temp = temp->next;
    }
}

void calculate()
{
    node_t* temp = head;

    double totHours = 0;
    double totPoints = 0;
    double total;

    while (temp != NULL)
    {
        totHours += temp->hours;
        totPoints += temp->hours * temp->grade;
        temp = temp->next;
    }

    printf("\nFinal GPA: %f", totPoints / totHours);
}

int main(void)
{
    double tHours;
    char tempStr[10];
    char tGrade[5];
    double tGradeVal;

    printf("****GPA Calculator****\n");
    printf("For each course, enter the number of credit hours followed by the grade for said course.\nExample: 3.0 B+\nEnter '0 stop' to stop and calculate.\n\nGrades:\n");
    
    do {
        fgets(tempStr, 10, stdin);
        sscanf(tempStr, "%lf %s", &tHours, tGrade);
        tGradeVal = toPoints(tGrade);
        if (tGradeVal != -1.0) add_end(tHours, tGradeVal);
    } while (tGradeVal != -1.0);

    calculate();

    getchar();
}

double toPoints(char *grade)
{ //A+ (4.00)    A (4.00)    A- (3.7)    B+ (3.3)    B (3.00)    B- (2.7)    C+ (2.3)    C (2.00)    C- (1.7)    D+ (1.3)    D (1.00)    D- (0.7)    F (0)
    double value;
    if (strcmp(grade, "A+") == 0) value = 4.0;
    else if (strcmp(grade, "A") == 0) value = 4.0;
    else if (strcmp(grade, "A-") == 0) value = 3.7;
    else if (strcmp(grade, "B+") == 0) value = 3.3;
    else if (strcmp(grade, "B") == 0) value = 3.0;
    else if (strcmp(grade, "B-") == 0) value = 2.7;
    else if (strcmp(grade, "C+") == 0) value = 2.3;
    else if (strcmp(grade, "C") == 0) value = 2.0;
    else if (strcmp(grade, "C-") == 0) value = 1.7;
    else if (strcmp(grade, "D+") == 0) value = 1.3;
    else if (strcmp(grade, "D") == 0) value = 1.0;
    else if (strcmp(grade, "D-") == 0) value = 0.7;
    else if (strcmp(grade, "F") == 0) value = 0.0;
    else if (strcmp(grade, "stop") == 0) value = -1.0;
    else {
        printf("String processing error");
        exit(EXIT_FAILURE);
    }
    return value;
}