#include "measured_data.h"

int isEqual(measured_data data1, measured_data data2) {
    if ( isEqualDate(data1.date, data2.date) == 1 && data1.value == data2.value) {
        return 1;
    } else {
        return 0;
    }
}

int isEqualDate(date date1, date date2) {
    if (date1.year == date2.year &&
        date1.month == date2.month &&
        date1.day == date2.day)
    {
        return 1;
    } else {
        return 0;
    }
}