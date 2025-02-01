const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#010101", /* black   */
  [1] = "#EE1F25", /* red     */
  [2] = "#CD3E46", /* green   */
  [3] = "#DD7285", /* yellow  */
  [4] = "#939393", /* blue    */
  [5] = "#AFAFAF", /* magenta */
  [6] = "#E99B9B", /* cyan    */
  [7] = "#bfbfbf", /* white   */

  /* 8 bright colors */
  [8]  = "#615050",  /* black   */
  [9]  = "#EE1F25",  /* red     */
  [10] = "#CD3E46", /* green   */
  [11] = "#DD7285", /* yellow  */
  [12] = "#939393", /* blue    */
  [13] = "#AFAFAF", /* magenta */
  [14] = "#E99B9B", /* cyan    */
  [15] = "#bfbfbf", /* white   */

  /* special colors */
  [256] = "#010101", /* background */
  [257] = "#bfbfbf", /* foreground */
  [258] = "#bfbfbf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
