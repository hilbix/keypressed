/* $Header$
 *
 * See tino_keypressed.h
 *
 * This Works is placed under the terms of the Copyright Less License,
 * see file COPYRIGHT.CLL.  USE AT OWN RISK, ABSOLUTELY NO WARRANTY.
 *
 * $Log$
 * Revision 1.2  2008-05-30 17:03:51  tino
 * Version now in the binary, too
 *
 * Revision 1.1  2008-05-30 16:59:00  tino
 * First try
 */

/* Encode the version in the binary
 */
#include "keypressed_version.h"
const char version_string[]="VERSION " KEYPRESSED_VERSION;

/* Create the main program
 */
#define TINO_TEST_MAIN
#include "tino_keypressed.h"
