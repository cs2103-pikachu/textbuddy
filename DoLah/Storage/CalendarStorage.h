#pragma once
#include "../Models/Calendar.h"
#include <fstream>

class CalendarStorage
{
public:
    CalendarStorage();
    ~CalendarStorage();

    static void save(const DoLah::Calendar &);
    static void load(DoLah::Calendar&);
};

