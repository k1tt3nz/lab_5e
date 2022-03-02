#ifndef COURSE_STRING__H
#define COURSE_STRING__H

#include <stdio.h>

//Возвращает количество символов в строке begin.
size_t strLen_(const char *begin);

//Возвращает указатель на первый элемент с кодом ACKII в переменной ch.
char* find(char *begin, char *end, int ch);

//Возвращает указатель на первый символ, отличный от пробельных, начиная с begin,
//если символ не найден, возвращает адрес первого ноль-символа.
char* findNonSpace(char *begin);

//Возвращает указатель на первый пробельный символ, начиная с begin
//или на первый ноль-символ
char* findSpace(char *begin);

//Возвращает указатель на первый справа символ, отличный от пробельных, начиная с rBegin,
//если символ не найден, возвращает адрес rEnd.
char* findNonSpaceReverse(char *rBegin, const char *rEnd);

//Возвращает указатель на первый пробельный символ справа,
//если символ не найден, возвращает rEnd.
char* findSpaceReverse(char *rBegin, const char *rEnd);

//возвращает отрицательное значение, если lhs располагается до rhs в лексикографическом порядке,
//значение - '0', если lhs и rhs равны, иначе – положительное значение.
int strcmp(const char *lhs, const char *rhs);

//Записывает по адресу beginDestination фрагмент памяти, начиная с адреса beginSource до endSource.
//Возвращает указатель на следующий свободный фрагмент памяти в destination.
char *copy_(char *beginSource, const char *endSource, char *beginDestination);

//Записывает по адресу beginDestination элементы из фрагмента памяти, начиная с beginSource и заканчивая endSource,
//удовлетворяющие функции-предикату f. Функция возвращает указатель на следующий свободный для записи фрагмент в памяти.
char *copyIf_(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int));

//Записывает по адресу beginDestination элементы из фрагмента памяти, начиная с rbeginSource и заканчивая rendSource,
//удовлетворяющие функции-предикату f. Функция возвращает значение beginDestination по окончанию работы функции.
char *copyIfReverse_(char *rbeginSource, const char *rendSource, char *beginDestination, int (*f)(int));

#include "string_.c"

#endif //COURSE_STRING__H
