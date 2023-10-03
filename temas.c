
/* 
 *
 * C O R E S
 *
 *
 * */


/////////// PADRAO

/* /1* Terminal colors (16 first used in escape sequence) *1/ */
/* static const char *colorname[] = { */
/* 	/1* 8 normal colors *1/ */
/* 	"black", */
/* 	"red3", */
/* 	"green3", */
/* 	"yellow3", */
/* 	"blue2", */
/* 	"magenta3", */
/* 	"cyan3", */
/* 	"gray90", */

/* 	/1* 8 bright colors *1/ */
/* 	"gray50", */
/* 	"red", */
/* 	"green", */
/* 	"yellow", */
/* 	"#5c5cff", */
/* 	"magenta", */
/* 	"cyan", */
/* 	"white", */

/* 	[255] = 0, */

/* 	/1* more colors can be added after 255 to use with DefaultXX *1/ */
/* 	"#cccccc", */
/* 	"#555555", */
/* 	"gray90", /1* default foreground colour *1/ */
/* 	"black", /1* default background colour *1/ */
/* }; */

/*/1* */
/* * Default colors (colorname index) */
/* * foreground, background, cursor, reverse cursor */
/* *1/ */
/*unsigned int defaultfg = 258; */
/*unsigned int defaultbg = 259; */
/*unsigned int defaultcs = 256; */
/*static unsigned int defaultrcs = 257; */










/* 	google-dark	
 *
 *
 *
 *
 *
 *  	*/ 
/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1d1f21", /* black   */
  [1] = "#cc342b", /* red     */
  [2] = "#198844", /* green   */
  [3] = "#fba922", /* yellow  */
  [4] = "#3971ed", /* blue    */
  [5] = "#a36ac7", /* magenta */
  [6] = "#3971ed", /* cyan    */
  [7] = "#c5c8c6", /* white   */

  /* 8 bright colors */
  [8]  = "#969896", /* black   */
  [9]  = "#cc342b", /* red     */
  [10] = "#198844", /* green   */
  [11] = "#fba922", /* yellow  */
  [12] = "#3971ed", /* blue    */
  [13] = "#a36ac7", /* magenta */
  [14] = "#3971ed", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#1d1f21", /* background */
  [257] = "#c5c8c6", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;

static unsigned int defaultrcs = 257;




/*
 *
 *
 *
 * grandshell */


/*/1* Terminal colors (16 first used in escape sequence) *1/ */
/*static const char *colorname[] = { */

/*  /1* 8 normal colors *1/ */
/*  [0] = "#000000", /1* black   *1/ */
/*  [1] = "#f25a5a", /1* red     *1/ */
/*  [2] = "#77bb33", /1* green   *1/ */
/*  [3] = "#efc334", /1* yellow  *1/ */
/*  [4] = "#5555dd", /1* blue    *1/ */
/*  [5] = "#c350ff", /1* magenta *1/ */
/*  [6] = "#5af2ee", /1* cyan    *1/ */
/*  [7] = "#bebebe", /1* white   *1/ */

/*  /1* 8 bright colors *1/ */
/*  [8]  = "#222222", /1* black   *1/ */
/*  [9]  = "#ffbbbb", /1* red     *1/ */
/*  [10] = "#dcf692", /1* green   *1/ */
/*  [11] = "#f6df92", /1* yellow  *1/ */
/*  [12] = "#b2baf6", /1* blue    *1/ */
/*  [13] = "#f09fff", /1* magenta *1/ */
/*  [14] = "#5af2ee", /1* cyan    *1/ */
/*  [15] = "#eeeeee", /1* white   *1/ */

/*  /1* special colors *1/ */
/*  [256] = "#000000", /1* background *1/ */
/*  [257] = "#bebebe", /1* foreground *1/ */
/*}; */

/*/1* */
/* * Default colors (colorname index) */
/* * foreground, background, cursor */
/* *1/ */
/*unsigned int defaultfg = 257; */
/*unsigned int defaultbg = 256; */
/*unsigned int defaultcs = 257; */

/*/1* */
/* * Colors used, when the specific fg == defaultfg. So in reverse mode this */
/* * will reverse too. Another logic would only make the simple feature too */
/* * complex. */
/* *1/ */
/*static unsigned int defaultitalic = 7; */
/*static unsigned int defaultunderline = 7; */


/* static unsigned int defaultrcs = 257; */







