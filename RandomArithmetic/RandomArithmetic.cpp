#include "Framework.h"

using namespace std;

int main()
{
	UINT num1, num2, result, input, selectNumber;
	int score = 0, answer = 0;

	cout << "난이도를 선택해주세요" << endl;
	cout << "[ 1 ] 쉬움 / [ 2 ] 어려움" << endl;

	while (true)
	{
		switch (selectNumber)
		{
		case 1:
			while (true)
			{
				srand(GetTickCount64());

				num1 = rand() % 1000 + 1;
				num2 = rand() % 1000 + 1;

				result = num1 + num2;

				cout << "난이도 : 쉬움" << endl;

				cout << endl;

				cout << "남은 기회 : " << 3 - answer << endl;
				cout << num1 << " + " << num2 << " = ";
				cin >> input;

				// 승패 여부 판단
				if (result == input)
				{
					// 여기까지 왔으면 플레이어가 정답을 맞춘 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "정답입니다(점수 +1)" << endl;
					cout << "===================================================" << endl;

					cout << endl;

					score++;

					cout << "===================================================" << endl;
					cout << "현재 점수 : " << score << endl;
					cout << "남은 기회 : " << 3 - answer << endl;
					cout << "===================================================" << endl;
				}
				else
				{
					// 여기까지 왔으면 플레이어가 정답을 맞추지 못 한 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "틀렸습니다" << endl;
					cout << "===================================================" << endl;

					cout << endl;

					answer++;

					cout << "===================================================" << endl;
					cout << "현재 점수 : " << score << endl;
					cout << "남은 기회 : " << 3 - answer << endl;
					cout << "===================================================" << endl;
				}

				if (score >= 3)
				{
					// 여기까지 왔다면 플레이어가 최종적으로 승리한 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "게임에서 승리하셨습니다" << endl;
					cout << "점수 : " << score << endl;
					cout << "===================================================" << endl;
					return 0;
				}

				if (answer >= 3)
				{
					// 여기까지 왔다면 플레이어가 최종적으로 패배한 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "게임에서 패배하셨습니다" << endl;
					cout << "점수 : " << score << endl;
					cout << "===================================================" << endl;
					return 0;
				}
			}

		case 2:
			while (true)
			{
				UINT count = 0;
				srand(GetTickCount64());

				num1 = rand() % 1000 + 1;
				num2 = rand() % 1000 + 1;

				result = num1 + num2;

				cout << "난이도 : 어려움" << endl;

				cout << endl;


				cout << "남은 기회 : " << 3 - answer << endl;
				cout << num1 << " + " << num2 << " = ";
				cin >> input;

				if (count < 5)
				{
					Sleep(1000);
					count++;
				}

				// 승패 여부 판단
				if (result == input)
				{
					// 여기까지 왔으면 플레이어가 정답을 맞춘 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "정답입니다(점수 +1)" << endl;
					cout << "===================================================" << endl;

					cout << endl;

					score++;

					cout << "===================================================" << endl;
					cout << "현재 점수 : " << score << endl;
					cout << "남은 기회 : " << 3 - answer << endl;
					cout << "===================================================" << endl;
				}
				else if (result != input)
				{
					// 여기까지 왔으면 플레이어가 정답을 맞추지 못 한 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "틀렸습니다" << endl;
					cout << "===================================================" << endl;

					cout << endl;

					answer++;

					cout << "===================================================" << endl;
					cout << "현재 점수 : " << score << endl;
					cout << "남은 기회 : " << 3 - answer << endl;
					cout << "===================================================" << endl;
				}

				if (score >= 3)
				{
					// 여기까지 왔다면 플레이어가 최종적으로 승리한 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "게임에서 승리하셨습니다" << endl;
					cout << "점수 : " << score << endl;
					cout << "===================================================" << endl;
					return 0;
				}

				if (answer >= 3)
				{
					// 여기까지 왔다면 플레이어가 최종적으로 패배한 것
					system("cls");
					cout << "===================================================" << endl;
					cout << "게임에서 패배하셨습니다" << endl;
					cout << "점수 : " << score << endl;
					cout << "===================================================" << endl;
					return 0;
				}
			}
		default:
			cout << "잘못된 입력입니다" << endl;
		}
	}
}