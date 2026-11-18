#include<stdio.h>
#include"student.h"
#include<stdlib.h>

void Add_new_record(void)
{
    sll *node;
    sll *temp;
    int roll = 1;

    node = malloc(sizeof(sll));

    if(node == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    /* Find smallest available roll number */
    while(1)
    {
        temp = head;

        while(temp != NULL)
        {
            if(temp->roll_number == roll)
                break;

            temp = temp->next;
        }

        if(temp == NULL)
            break;

        roll++;
    }

    node->roll_number = roll;

    printf("Enter name: ");
    scanf(" %[^\n]", node->name);

    printf("Enter percentage: ");
    scanf("%f", &node->percent);

    node->next = NULL;

    if(head == NULL)
    {
        head = node;
    }
    else
    {
        temp = head;

        while(temp->next != NULL)
            temp = temp->next;

        temp->next = node;
    }

    count++;

    printf("Added successfully\n");
    printf("Roll Number = %d\n", node->roll_number);
}
