/**************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 *
 * Copyright (C) 2007 Dan Everton
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ***************************************************************************/

#include "../codec.h"
#include "../lib/codeclib.h"

#if defined(DEBUG) || defined(SIMULATOR)
#undef DEBUGF
#define DEBUGF ci->debugf
#else
#define DEBUGF(...)
#endif

#ifdef ROCKBOX_HAS_LOGF
#undef LOGF
#define LOGF ci->logf
#else
#define LOGF(...)
#endif

extern struct codec_api* ci;

float floor(float x) {
    return ((float)(((int)x)));
} 

//Placeholders (not fixed point, only used when encoding):
float pow(float a, float b) {
    DEBUGF("pow(%f, %f)\n", a, b);
    return 0;
}

float log(float l) {
    DEBUGF("log(%f)\n", l);
    return 0;
}

float fabs(float a) {
    DEBUGF("fabs(%f)\n", a);
    return 0;
}

float sin(float a) {
    DEBUGF("sin(%f)\n", a);
    return 0;
}

float cos(float a) {
    DEBUGF("cos(%f)\n", a);
    return 0;
}

float sqrt(float a) {
    DEBUGF("sqrt(%f)\n", a);
    return 0;
}

float exp(float a) {
    DEBUGF("exp(%f)\n", a);
    return 0;
}

