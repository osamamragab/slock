/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

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

/* default message */
static const char *message = "wubbalubbadubdub";

/* text color */
static const char *text_color = "#ffffff";

/* text size (must be a valid size) */
static const char *font_name = "lucidasans-14";
