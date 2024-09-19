
#include "pax/fb.h"
#include "pax/keypad.h"
#include "pax/touchscreen.h"
#include "pax/sound.h"

#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <time.h>
#include <utility>

__attribute__((constructor))
int app_start()
{
    PAXFramebuffer fb;
    PAXKeypad kp;
    PAXTouchscreen ts;
    PAXSound snd;
    return 0;
}
