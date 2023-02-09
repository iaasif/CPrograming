#include <stdio.h>
int main()
{
    int i, var ;
    char task[300];

    char

    while(1)
    {
        printf("Welcome\n");
        printf("press 1 for add task\npress 2 for update task\npress 3 for complete task\npress 5 for cancel taks\npress 6 for check upcoming task\npress 7 for check task of specific date \npress8 for check completed task\n");

        scanf("%d\n",&var);
        switch(var)
        {
        case 1:
            addTask();
            break;
        case 2:
            updateTask();
            break;
        case 3:
            completeTask();
        case 4 :
            cancleTask();
            break;

        case 5 :
            upcomingTask();
            break;

        case 6 :
            specificDate();
            break;
        case 7 :
            completeTask();
            break;

        }
    }
return 0;
}
