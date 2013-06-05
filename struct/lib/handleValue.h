#include <stdio.h>
#include "measured_data.h"

measured_data parseRow(int year, int month, int day, int hour, int minute, float value);

date createDate(int year, int month, int day, int hour, int minute);