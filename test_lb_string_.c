#include "test_lb_string_.h"
#include "string_.h"

#include <assert.h>

void test_strLen_emptyLine() {
    char str[0];

    assert(strLen_(str) == 0);
}

void test_strLen_notAnEmptyLine() {
    char str[] = "hello";

    assert(strLen_(str) == 5);
}

void test_strLen() {
    test_strLen_emptyLine();
    test_strLen_notAnEmptyLine();
}


void test_find_found() {
    char str[5] = "Hello";
    int letter = 'l';

    assert(find(str, &str[5], letter) == &str[2]);
}

void test_find_notFound() {
    char str[5] = "Hello";
    int letter = 'i';

    assert(find(str, &str[5], letter) == &str[5]);
}

void test_find() {
    test_find_found();
    test_find_notFound();
}

void test_findNonSpace_noSpace() {
    char str[5] = "hello";

    assert(findNonSpace(str) == &str[0]);
}

void test_findNonSpace_onlySpaces() {
    char str[3] = "   ";

    assert(findNonSpace(str) == &str[3]);
}

void test_findNonSpace() {
    test_findNonSpace_noSpace();
    test_findNonSpace_onlySpaces();
}

void test_findSpace_noSpace() {
    char str[] = "Space";

    assert(findSpace(str) == &str[5]);
}

void test_findSpace_firstSpace() {
    char str[] = " Space";

    assert(findSpace(str) == &str[0]);
}

void test_findSpace_anyPosSpace() {
    char str1[] = "Hello world";
    assert(findSpace(str1) == &str1[5]);

    char str2[] = "I love OP";

    assert(findSpace(str2) == &str2[1]);
}

void test_findSpace() {
    test_findSpace_noSpace();
    test_findSpace_firstSpace();
    test_findSpace_anyPosSpace();
}

/*void test_findNonSpaceReverse_noSpace() {
    char str[] = "Space";
    assert(findNonSpaceReverse(str[strLen_(str) - 1], str) == &str[5]);
}

void test_findNonSpaceReverse_firstSpace() {
    char str[] = "";
    assert(findNonSpaceReverse());
}

void test_findNonSpaceReverse_anyPosSpace() {
    char str[] = "";
    assert(findNonSpaceReverse());
}

void test_findSpaceReverse() {
    test_findNonSpaceReverse_noSpace();
    test_findNonSpaceReverse_firstSpace();
    test_findNonSpaceReverse_anyPosSpace();
}*/


void test_strcmp_strEqual(){
    char str1[] = "Hello";
    char str2[] = "Hello";

    assert(strcmp(str1,str2) == 0);
}

void test_strcmp_strNotEqual_lhsLess(){
    char str1[] = "Hell";
    char str2[] = "Hello";

    assert(strcmp(str1,str2) < 0);
}

void test_strcmp_strNotEqual_lhsMore(){
    char str1[] = "Hello";
    char str2[] = "Hell";

    assert(strcmp(str1,str2) > 0);
}

void test_strcmp(){
    test_strcmp_strEqual();
    test_strcmp_strNotEqual_lhsLess();
    test_strcmp_strNotEqual_lhsMore();
}

void test_full_lb_string_() {
    test_strLen();
    test_find();
    test_findNonSpace();
    //test_findSpaceReverse();
    test_strcmp();
}