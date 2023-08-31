
#include <stdio.h>
#include <stdlib.h>

typedef struct tag_MainValue	//RS485
{
    float	fCurCH1PV;
    float	fCurCH2PV;
    float	fCurCH3PV;
    float	fCurCH4PV;
    float	fCurCH5PV;
    float	fCurCH6PV;
    float	fCurCH7PV;
    float	fCurCH1SV;
    float	fCurCH2SV;
    float	fCurCH3SV;
    float	fCurCH4SV;
    float	fCurCH5SV;
    float	fCurCH6SV;
    float	fCurCH7SV;
    float	fCurCH1MV;
    float	fCurCH2MV;
    float	fCurCH3MV;
    float	fCurCH4MV;
    float	fCurCH5MV;
    float	fCurCH6MV;
    float	fCurCH7MV;
    float	fCurCH1LIMIT;
    float	fCurCH2LIMIT;
    float	fCurCH3LIMIT;
    float	fCurCH4LIMIT;
    float	fCurCH5LIMIT;
    float	fCurCH6LIMIT;
    float	fCurCH7LIMIT;
    float	fCurCH1RAMP;
    float	fCurCH2RAMP;
    float	fCurCH3RAMP;
    float	fCurCH4RAMP;
    float	fCurCH5RAMP;
    float	fCurCH6RAMP;
    float	fCurCH7RAMP;
    float	fCurCH1TempInput;
    float	fCurCH2TempInput;
    float	fCurCH3TempInput;
    float	fCurCH4TempInput;
    float	fCurCH5TempInput;
    float	fCurCH6TempInput;
    float	fCurCH7TempInput;
    float	fMonitorCH1SV;
    float	fMonitorCH2SV;
    float	fMonitorCH3SV;
    float	fMonitorCH4SV;
    float	fMonitorCH5SV;
    float	fMonitorCH6SV;
    float	fMonitorCH7SV;
    struct tag_MainValue* next;

}MAINVALUE;

struct NODE {
    struct NODE* next;
    int data;
};

int main()
{
    struct tag_MainValue* head = malloc(sizeof(struct tag_MainValue));

    struct tag_MainValue* node1 = malloc(sizeof(struct tag_MainValue));

    head->next = node1;
    node1->fCurCH1PV = 10;

    struct tag_MainValue* node2 = malloc(sizeof(struct tag_MainValue));
    node1->next = node2;
    node2->fCurCH1PV = 20;

    node2->next = NULL;

    struct tag_MainValue* curr = head->next;
    while (curr != NULL)
    {
        printf("%f\n", curr->fCurCH1PV);
        curr = curr->next;
    }

    free(node2);
    free(node1);
    free(head);
}

/*
    struct NODE* head = malloc(sizeof(struct NODE));

    struct NODE* node1 = malloc(sizeof(struct NODE));

    head->next = node1;
    node1->data = 10;

    struct NODE* node2 = malloc(sizeof(struct NODE));
    node1->next = node2;
    node2->data = 20;

    node2->next = NULL;

    struct NODE* curr = head->next;
    while (curr != NULL)
    {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    free(node2);
    free(node1);
    free(head);

*/