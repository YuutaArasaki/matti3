#include"GameOverScene.h"

#include"DxLib.h"

#include"SceneManager.h"

/******************************************

*�ϐ��錾

*******************************************/


int GameOverImage;

int GameOverSE;

int GameOverFlag;


/*******************************************

*�v���g�^�C�v�錾

********************************************/


/********************************************

*�Q�[���I�[�o�[��� : ����������

*���� : �Ȃ�

*�߂�l : �G���[���

*********************************************/

int GameOverScene_Initialize(void)
{

	int ret = 0;

	//�摜�ǂݍ���

	GameOverImage = LoadGraph("images/gameover.png");

	//�����ǂݍ���

	GameOverSE = LoadSoundMem("sounds/gameover_se.mp3");


	GameOverFlag = FALSE;


	//�G���[�`�F�b�N

	if (GameOverImage == D_ERROR)
	{

		ret = D_ERROR;

	}

	if (GameOverSE == D_ERROR)
	{

		ret = D_ERROR;

	}


	return ret;

}



/******************************************

*�Q�[���I�[�o�[��� : �X�V����

*���� : �Ȃ�

*�߂�l : �Ȃ�

*******************************************/

void GameOverScene_Update(void)
{

	//�Q�[���I�[�o�[���ʉ��Đ��`�F�b�N

	if (CheckSoundMem(GameOverSE) == 0)
	{

		if (GameOverFlag == 0)
		{

			Change_Scene(E_GAME_OVER);

		}
		else
		{

			PlaySoundMem(GameOverSE, DX_PLAYTYPE_BACK);

			GameOverFlag = TRUE;

		}
	}
}



/**************************************************

*�Q�[���I�[�o�[��� : �`�揈��

*���� : �Ȃ�

*�߂�l : �Ȃ�

***************************************************/

void GameOverScene_Draw(void)
{

	//�Q�[���I�[�o�[��ʕ\��

	DrawGraph(0, 0, GameOverImage, FALSE);

}