//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/	        /*Update Interval*/	/*Update Signal*/
    {"",        "get-memory",	        5,		        0},
    {"",        "get-date",	        15,		        0},
    {"",        "get-volume",           3600,		        9},
    {"",        "get-weather",          60,		        0}
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
