static const char norm_fg[] = "#bfbfbf";
static const char norm_bg[] = "#010101";
static const char norm_border[] = "#615050";

static const char sel_fg[] = "#bfbfbf";
static const char sel_bg[] = "#CD3E46";
static const char sel_border[] = "#bfbfbf";

static const char urg_fg[] = "#bfbfbf";
static const char urg_bg[] = "#EE1F25";
static const char urg_border[] = "#EE1F25";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
