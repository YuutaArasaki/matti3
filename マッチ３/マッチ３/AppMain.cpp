/*****************************************

*�v���O���~���O���K

*�}�b�`3�Q�[���̐���

******************************************/


#include "DxLib.h" 

#include "FreamControl.h"

#includ "InputControl.h"

#includ "SceneManager.h"

/******************************************
 
 *�}�N����`

 ******************************************/

#define SCREEN_HEIGHT�@�@(480)    //�X�N���[���T�C�Y�@(����)

#define SCREEN_WIDTH�@�@ (640)    //�X�N���[���T�C�Y�@(��)

#define SCREEN_COLORBIT�@(32)     //�X�N���[���J���[�r�b�g
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�E�B���h�E���[�h�ŋN��

	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������

	if (DxLib_Init() == -1)
	{

		return -1;

	}


	//���͑ҋ@

	WaitKey();


	//Dx���C�u�����g�p�̏I������

	DxLib_End();

	return 0;
}
