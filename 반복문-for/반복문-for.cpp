// 반복문을 사용해 점 찍기

#include "Framework.h"

using namespace std;

int main()
{
    while (true)
    {
        UINT input  = 0;  // input Value = 0
        UINT input2 = 0;  // input2 Value = 0

        system("cls");

        cout << "원하는 메뉴를 선택해주세요 : ";
        cin >> input;

        switch (input)
        {
        case 1:
            cout << "모양을 선택해주세요 : " << endl;
            cout << "모양 1 = * / 모양 2 = 0" << endl;
            cin >> input2;

            switch (input2)
            {
            case 0:
                system("cls");
                cout << "모양을 선택하지 않았습니다" << endl;
                break;

            case 1:
                system("cls");
                cout << "모양 1을 선택하였습니다" << endl;
                break;

            case 2:
                system("cls");
                cout << "모양 2를 선택하였습니다" << endl;
                break;
            }
            break;

        default:
            system("cls");
            cout << "잘못된 입력입니다." << endl;
            Sleep(3000);
            break;
        }
    }
}