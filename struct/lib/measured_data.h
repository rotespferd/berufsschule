typedef struct {
    int year;
    int month;
    int day;

    int hour;
    int minute;
} date;

typedef struct {
    date date;
    float value;
} measured_data;

int isEqual(measured_data data1, measured_data data2);
int isEqualDate(date date1, date date2);