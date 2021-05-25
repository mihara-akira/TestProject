#include<DxLIb.h>

void Test(void);

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevinstance, _In_ LPSTR Ipcmdline, _In_ int nShowcmd)
{
	SetGraphMode(640,480,32);
	ChangeWindowMode(true);
	SetWindowText("2016208_éOå¥çW");
	if (DxLib_Init() == -1)
	{
		return-1;
	}

	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
	}
}