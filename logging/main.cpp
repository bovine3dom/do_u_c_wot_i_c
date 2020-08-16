#include <iostream>
#include <plog/Log.h>

int main() {
    plog::init(plog::debug, "logfile.txt");
    LOGD << "boo";
    return 0;
}
