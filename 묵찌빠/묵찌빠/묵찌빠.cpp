#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "묵찌빠 게임" << endl;
    
    srand(GetTickCount64());

    int player_Num1 = 1, player_Num2 = 2, player_Num3 = 3;
    int target_Num1 = 1, target_Num2 = 2, target_Num3 = 3;

    int playerWin = 0;
    int targetWin = 0;

    Sleep(3000);

    while (true)
    {
        int player_Input;
        int target_Input;

        cout << "[ 1 ] 묵 / [ 2 ] 찌 / [ 3 ] 빠" << endl;
        cout << "묵찌빠를 선택해주세요 : ";
        cin >> player_Input;

        target_Input = rand() % 3;
    }
}