#include "Main.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetMainWindowText("マインスイーパー");
	ChangeWindowMode(TRUE);						//ウィンドウモードで起動	
	SetGraphMode(WINDOW_W, WINDOW_H, 32);		//画面の解像度指定
	SetBackgroundColor(0, 0, 0);			//背景色指定
	SetWindowSizeChangeEnableFlag(FALSE);		//画面サイズの変更を不可にする

	if (DxLib_Init() == -1)
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);



	while (ProcessMessage() == 0)
	{
		//DXlibを使用する上で必要な終了処理
		ClearDrawScreen();
		clsDx();
	}


	WaitKey();

	//DXlibを使用する上で必要な終了処理
	DxLib_End();
	return 0;
}