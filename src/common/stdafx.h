#ifdef _WIN64
//define something for Windows (64-bit)

#define WIN32_LEAN_AND_MEAN

#elif _WIN32
//define something for Windows (32-bit)

#elif __APPLE__

#if TARGET_IPHONE_SIMULATOR
// iOS Simulator
#elif TARGET_OS_IPHONE
// iOS device
#elif TARGET_OS_MAC
// Other kinds of Mac OS
#else
// Unsupported platform
#endif
#elif __linux
// linux
#elif __unix // all unices not caught above
// Unix
#elif __posix
// POSIX
#endif
