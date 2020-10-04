//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/	        /*Update Interval*/	/*Update Signal*/
    {"",        "get-cpu",	        1,		        8},
    {"",        "get-memory",	        1,		        8},
    {"",        "get-volume",           3600,		        9},
    {"",        "get-battery",          60,		        10},
    {"",        "kblayout get",         3600,		        11},
    //{"",        "get-conn",             60,		        8},
    {"",        "get-weather",          60,		        8},
    {"",        "get-date",	        15,		        8}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
