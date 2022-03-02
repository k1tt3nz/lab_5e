#include "string_.h"
#include <ctype.h>

size_t strLen_(const char *begin) {
    char *end = begin;
    while (*end != '\0') {
        end++;
    }

    return end - begin;
}

char *find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch) {
        begin++;
    }

    return begin;
}

char *findNonSpace(char *begin) {
    while (isspace(*begin) && *begin != '\0') {
        begin++;
    }

    return begin;
}

char *findSpace(char *begin) {
    while (!isspace(*begin) && *begin != '\0') {
        begin++;
    }

    return begin;
}

char *findNonSpaceReverse(char *rBegin, const char *rEnd) {
    while (isspace(rBegin) && rBegin != rEnd) {
        rBegin--;
    }

    return rBegin;
}

char *findSpaceReverse(char *rBegin, const char *rEnd) {
    while (!isspace(rBegin) && rBegin != rEnd) {
        rBegin--;
    }

    return rBegin;
}

int strcmp(const char *lhs, const char *rhs) {
    while (*lhs == *rhs && *lhs != '\0') {
        lhs++;
        rhs++;
    }

    return *lhs - *rhs;
}

char *copy_(char *beginSource, const char *endSource, char *beginDestination) {
    memcpy(beginDestination, beginSource, endSource - beginSource);

    return beginDestination + (endSource - beginSource) + 1;
}

char *copyIf_(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int)) {
    while (beginSource != endSource)
        if (f(*beginSource))
            memcpy(beginDestination, beginSource++, sizeof(char));

    return beginDestination;
}

char *copyIfReverse_(char *rbeginSource, const char *rendSource, char *beginDestination, int (*f)(int)) {
    while (rbeginSource != rendSource)
        if (f(*rbeginSource))
            memcpy(beginDestination, rbeginSource--, sizeof(char));

    return beginDestination;
}
