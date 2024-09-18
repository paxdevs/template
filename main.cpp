
#include "fb.h"
#include "keypad.h"

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
    return 0;
}
