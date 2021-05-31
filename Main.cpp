#include "Main.h"


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetMainWindowText("�}�C���X�C�[�p�[");
	ChangeWindowMode(TRUE);						//�E�B���h�E���[�h�ŋN��	
	SetGraphMode(WINDOW_W, WINDOW_H, 32);		//��ʂ̉𑜓x�w��
	SetBackgroundColor(0, 0, 0);			//�w�i�F�w��
	SetWindowSizeChangeEnableFlag(FALSE);		//��ʃT�C�Y�̕ύX��s�ɂ���

	if (DxLib_Init() == -1)
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);



	while (ProcessMessage() == 0)
	{
		//DXlib���g�p�����ŕK�v�ȏI������
		ClearDrawScreen();
		clsDx();
	}


	WaitKey();

	//DXlib���g�p�����ŕK�v�ȏI������
	DxLib_End();
	return 0;
}