#ifndef TEST_LB_STRING__H
#define TEST_LB_STRING__H

void test_strLen_emptyLine();

void test_strLen_notAnEmptyLine();

void test_strLen();

void test_find_found();

void test_find_notFound();

void test_find();


void test_findNonSpace_noSpace();

void test_findNonSpace_onlySpaces();

void test_findNonSpace();

void test_findSpace_noSpace();

void test_findSpace_firstSpace();

void test_findSpace_anyPosSpace();

void test_findSpace();

void test_findSpaceReverse_noSpace();

void test_findSpaceReverse_firstSpace();

void test_findSpaceReverse_anyPosSpace();

void test_findSpaceReverse();

void test_strcmp_strEqual();

void test_strcmp_strNotEqual_lhsLess();

void test_strcmp_strNotEqual_lhsMore();

void test_strcmp();

void test_full_lb_string_();

#include "test_lb_string_.c"

#endif //TEST_LB_STRING__H
