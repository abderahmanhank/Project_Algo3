#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    printf("====================The menu=====================\n");
    printf("1. Add a new request.\n");
    printf("2. Display a request by the id.\n");
    printf("3. Display a request by costumer name.\n");
    printf("4. Update an intervention's status.\n");
    printf("5. Delete a request.\n");
    printf("6. Close an intervention.\n");         // market as completed
    printf("7. Display pending interventions.\n"); // not completed interventions
    printf("8. Sort the requests by date.\n");
    printf("9. Sort the requests by priority.\n");
    printf("10. Display all interventions\n");
    printf("11. Counting interventions.\n");
    printf("12. Free the memory space\n");
    printf("13. Exist.\n");
    printf("==================================================\n");

    return 0;
}