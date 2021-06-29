#pragma once

#include "types.h"
#include "MMBitmap.h"

#if defined(USE_X11)
#include "xdisplay.h"
#endif

/* Returns a raw bitmap of screengrab of the display (to be destroyed()'d by
 * caller), or NULL on error. */
MMBitmapRef copyMMBitmapFromDisplayInRect(MMRect rect);
