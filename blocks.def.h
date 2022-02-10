// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/  /*Update Interval*/  /*Update Signal*/
    {"",     "status-test",        5,                  1},
    {"",     "status-internet",    5,                  2},
    {"",     "status-volume",      0,                  3},
    {"",     "status-cpu",         5,                  4},
    {"",     "status-ram",         5,                  5},
    {"",     "status-battery",     60,                 6},
    {"",     "status-datetime",    60,                 7},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
