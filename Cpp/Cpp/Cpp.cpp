﻿#include <iostream>

// 지금만들라고 하는 함수들은
// strlen

int StringCount(const char* const _Str)
{
    int Count = 0;

    while (_Str[Count])
    {
        Count++;
    }

    return Count;
}

int main()
{
    // [B][B][B][B][0]

    int Count = strlen("BBBB");
    int MyCount = strlen("BBBB");

    int a = 0;


}

