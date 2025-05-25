#ifndef COMMON_H
#define COMMON_H

#include <sys/time.h>
#include <sys/stat.h>
#include <assert.h>

double GetTime()
{
    struct timeval tv;
    int rc = gettimeofday(&tv, NULL);
    assert(rc == 0);
    return (double) tv.tv_sec + (double) tv.tv_usec / 1e6;
}

void Spin(int howlong)
{
    double t = GetTime();
    while ((GetTime() - t) < (double) howlong) {}
}

#endif  // COMMON_H