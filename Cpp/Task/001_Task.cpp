// 001_NumberCount.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
//

#include <iostream>

// ���� ����
// 0 �̿��� ����� �ڸ����� ����.

// 10000
// 1000
// 100
// 1

int NumberCount(int _Value)
{
    // / (�����⸦ �ִ���) ������ ����ϼ���.
    int Result = 0;
    while (true)
    {
        _Value /= 10;
        Result += 1;

    }

    return 0;
}

// �ص� �ǰ� ���ص� �˴ϴ�.
// �� �������� ����
// _Value �� �־��ָ� Buffer�� 
// ���ڸ� ���ڿ��� ����� �Լ�.
void NumberToString(char* Buffer, int BufferSize, int _Value)
{
    return;
}

int main()
{
    // 5
    int Result0 = NumberCount(12358);
    // 4
    int Result1 = NumberCount(5258);
    // 7
    int Result2 = NumberCount(5258111);

    // 0�� ��

    char Buffer[100] = { 0 };

    NumberToString(Buffer, 100, 3712);
    // Buffer == "3712"


}
