#include "handleValue.h"


measured_data parseRow(int year, int month, int day, int hour, int minute, float value) {
    measured_data data;

    data.date = createDate(year, month, day, hour, minute);
    data.value = value;

    return data;
}

date createDate(int year, int month, int day, int hour, int minute) {
    date createdDate;

    createdDate.year = year;
    createdDate.month = month;
    createdDate.day = day;

    createdDate.hour = hour;
    createdDate.minute = minute;

    return createdDate;
}