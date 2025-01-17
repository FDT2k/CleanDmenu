/*
   ___ _               ___                     
  / __| |___ __ _ _ _ |   \ _ __  ___ _ _ _  _ 
 | (__| / -_) _` | ' \| |) | '  \/ -_) ' \ || |
  \___|_\___\__,_|_||_|___/|_|_|_\___|_||_\_,_|

   Floating and enhanced dmenu build
                                           
*/

static int topbar = 20;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Proxima Nova:size=12"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*              foreground  background */
	[SchemeNorm] = { "#eaeaea", "#283033" },  /* Background color */
	[SchemeSel] = { "#ffffff", "#ea3b0a" }, /* Main selection color */
	[SchemeSelHighlight] = { "#1F2229", "#e6d6ac" }, /* Highlight slectioned color */
	[SchemeNormHighlight] = { "#1F2229", "#283033" }, /* Highlight no-slectioned color */
	[SchemeOut] = { "#000000", "#283033" }, /* Secondary Color */
	[SchemeMid] = { "#eaeaea", "#283033" }, /* Secondary Color */
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 18;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;  /* -bw option; to add border width */
