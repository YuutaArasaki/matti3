#include "TitleScene.h"

#include "DxLib.h"

#include "InputControl.h"

#include "SceneManager.h"

/******************************
*�}�N����`
*******************************/

/*******************************
*�^��`
********************************/

/********************************
*�ϐ��錾
*********************************/

int TitleImage;
int TitileBGM;


/********************************
*�v���g�^�C�v�錾
*********************************/



/*********************************
*�^�C�g����ʁ@; ����������

*���� ; �Ȃ�

*�߂�l ; �G���[���

**********************************/

int TitleScene_Initialize(void)
{

	int ret = 0;

	
	//�摜�ǂݍ��ݏ���

	TitleImage = LoadGraph("images/title.png");

	//�����ǂݍ��ݏ���

	TitileBGM = LoadSoundMem("sounds/title_bgm.mp3");


	if (Titlemage == D_ERROR)
	{
		ret = D_ERROR;
	}
}
