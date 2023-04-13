#include "arrays_access.h"

int main()
{
    int times_table[ROWS][COLS];//create empty list
    populate_times_table(times_table, ROWS);
    display_times_table(times_table, ROWS);
}