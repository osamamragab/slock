/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "#242933",   /* after initialization */
	[INPUT]  = "#3b4252",   /* during input */
	[FAILED] = "#bf616a",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
	{ "color0", STRING, &colorname[INIT] },
	{ "color4", STRING, &colorname[INPUT] },
	{ "color1", STRING, &colorname[FAILED] },
};
