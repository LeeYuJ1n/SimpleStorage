// 반복문을 사용해 점 찍기

#include "Framework.h"



int main()
{
    UINT point = 10;

    for (int i = 0; i <= point; ++i)
    {
        for (int j = 0; j <= point; ++j)
        {
            cout << "*" << "\t";
        }

        cout << endl;
    }
}