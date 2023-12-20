#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "묵찌빠 게임" << endl;
    
    srand(GetTickCount64());

    int player = 0;
    int target = 0;

    int playerWin = 0;
    int targetWin = 0;

    Sleep(2000);

    while (true)
    {
        if (player == 3)
        {
            system("cls");
            cout << "[ 안내 ] 플레이어가 최종 승리하였습니다" << endl;
            return 0;
        }

        if (targetWin == 3)
        {
            system("cls");
            cout << "[ 안내 ] 컴퓨터가 최종 승리하였습니다" << endl;
            return 0;
        }
        system("cls");

        // 플레이어 선택
        cout << "--------------------------------------------------------" << endl;
        cout << "현재 점수 현황" << endl;
        cout << "플레이어 : " << playerWin << endl;
        cout << "컴퓨터   : " << targetWin << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "[ 0 ] 묵 / [ 1 ] 찌 / [ 2 ] 빠" << endl;
        cout << "--------------------------------------------------------" << endl;
        cout << "묵찌빠를 선택해주세요 : ";
        cin >> player;

        // 컴퓨터 자동 선택
        target = rand() % 3;

        // 잘못 입력된 경우
        if (player >= 3 || target >= 3)
        {
            system("cls");

            cout << "[ 주의 ] 잘못된 값이 입력되었습니다" << endl;

            Sleep(2000);

            continue;
        }

        // 1차 계산 시작
        if (player == 0 || player == 1 || player == 2 ||
            target == 0 || target == 1 || target == 2)
        {
            system("cls");

            cout << "----------------------------------------------" << endl;
            cout << "플레이어 수 : " << player << endl;
            cout << "컴퓨터 수 : " << target << endl;
            cout << "----------------------------------------------" << endl;
            cout << "다음 수 입력 : ";
            cin >> player;

            target = rand() % 3; // 컴퓨터도 자동으로 다시 수 선택

            if (player > 2)
            {
                cout << endl;

                cout << "[ 주의 ] 잘못된 입력값이 입력되었습니다. 처음 화면으로 돌아갑니다" << endl;
                
                Sleep(2000);
            }

            // 플레이어가 이기는 경우
            if (player == 0 && target == 1 ||
                player == 1 && target == 2 ||
                player == 2 && target == 0)
            {
                playerWin++;

                cout << endl;

                cout << "[ 승리 ] 플레이어가 이겼습니다" << " (현재 점수 : " << playerWin << " ) " << endl;
                cout << "[ 패배 ] 컴퓨터가 졌습니다" << " (현재 점수 : " << targetWin << " ) " << endl;

                Sleep(2000);
                system("cls");
            }

            // 컴퓨터가 이기는 경우
            else if (player == 0 && target == 2 ||
                player == 1 && target == 0 ||
                player == 2 && target == 1)
            {
                targetWin++;

                cout << endl;

                cout << "[ 승리 ] 플레이어가 졌습니다" << " (현재 점수 : " << playerWin << " ) " << endl;
                cout << "[ 패배 ] 컴퓨터가 이겼습니다" << " (현재 점수 : " << targetWin << " ) " << endl;

                Sleep(2000);
                system("cls");
            }

            // 비겼을 경우
            else if (player == 0 && target == 0 ||
                player == 1 && target == 1 ||
                player == 2 && target == 2)
            {
                system("cls");

                cout << "비겼습니다" << endl;

                Sleep(2000);
            }
        }
    }
}