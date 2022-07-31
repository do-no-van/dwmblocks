// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/  /*Command*/  /*Update Interval*/  /*Update Signal*/
    /* {"",     "status-test",        5,                  1}, */
    {"",     "$HOME/.local/bin/status/status-internet",    5,                  2},
    {"",     "$HOME/.local/bin/status/status-volume",      180,                3},
    {"",     "$HOME/.local/bin/status/status-cpu",         5,                  4},
    {"",     "$HOME/.local/bin/status/status-ram",         5,                  5},
    {"",     "$HOME/.local/bin/status/status-battery",     60,                 6},
    {"",     "$HOME/.local/bin/status/status-datetime",    60,                 7},
};

// sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
