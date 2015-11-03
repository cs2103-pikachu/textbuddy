#pragma once

#include <stdio.h>
#include <vector>
#include <stack>
#include <fstream>
//#include "Models/Task.h"
#include "Models/Calendar.h"
#include "CommandInvoker.h"

namespace DoLah {

    class DoLahClient {
    public:
        DoLahClient();
        ~DoLahClient();
        void parseAndProcessCommand(std::string);
        Calendar getCalendar() const;

    private:
        std::string settingsFile;
        std::string storageFile;
        DoLah::Calendar calendar;
        DoLah::CommandInvoker commandInvoker;
	};
}

