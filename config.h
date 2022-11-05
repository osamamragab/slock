/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "#000000",   /* after initialization */
	[INPUT]  = "#1c1e1f",   /* during input */
	[FAILED] = "#cc3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* play bell on failure */
static const int failbell = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* time in seconds to cancel lock with mouse movement */
static int timetocancel = 3;

/* default message */
static const char *message = "wubbalubbadubdub";

/* text color */
static const char *text_color = "#ffffff";

/* text size (must be a valid size) */
static const char *font_name = "10x20";

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 5;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "doas shutdown -P now";

/* should [command] be run only once? */
static const int runonce = 1;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 10*60;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "locker sleep";
