/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] = "black",     /* after initialization */
	[INPUT] = "#005577",  /* during input */
	[FAILED] = "#CC3333", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* play bell on failure */
static const int failbell = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* default message */
static const char *message = "Suckless: Software that sucks less.";

/* text color */
static const char *text_color = "#ffffff";

/* text size (must be a valid size) */
static const char *font_name = "6x10";

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 0;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "shutdown";

/* should [command] be run only once? */
static const int runonce = 0;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 30;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "/usr/bin/xset dpms force off";
