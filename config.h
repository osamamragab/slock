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

ResourcePref resources[] = {
	{ "background", STRING, &colorname[INIT] },
	{ "backgroundSel", STRING, &colorname[INPUT] },
	{ "color1", STRING, &colorname[FAILED] },
};
