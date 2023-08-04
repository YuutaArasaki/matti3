#include "SceneManager.h"

#include "TitleScene.h"

#include "GameMainScene.h"

#include "GameClearScene.h"

#include "GameOverScene.h"



/*************************************

*�}�N����`

**************************************/



/*************************************

*�^��`

**************************************/



/*************************************

*�ϐ���`

**************************************/



GAME_MODE Game_Mode;            //�Q�[�����[�h���@(����)

GAME_MODE Next_Mode;            //�Q�[�����[�h���@(��)



/*****************************************

*�v���g�^�C�v�錾

******************************************/




/*****************************************

*�V�[���Ǘ��@�\ : ����������

*���� : �Q�[�����[�h���

*�߂�l : �Ȃ�

******************************************/


int SceneManager_Initialize(GAME_MODE mode)
{

	int Read_Error;


	//�V�[���ǂݍ��ݏ���

	//�^�C�g�����

	Read_Error = TitleScene_Initialize();

	if (Read_Error == D_ERROR)
	{

		return D_ERROR;

	}


	//�Q�[�����C�����

	Read_Error = GameMainScene_Initialivdoze();


	if (Read_Error == D_ERROR)
	{

		return D_ERROR;

	}


	//�Q�[���N���A���

	Read_Error = GameClarScene_Initialize();

	if (Read_Error == D_ERROR)
	{

		return D_ERROR;

	}


	//�Q�[���I�[�o�[���

	Read_Error = GameOverScene_Initialize();

	if (Read_Error == D_ERROR)
	{

		return D_ERROR;

	}


	Game_Mode = mode;

	Next_Mode = Game_Mode;


	return Read_Error;

}


/***************************************

*�V�[���Ǘ��@�\ : �X�V����

*���� : �Ȃ�

*�߂�l : �Ȃ�

****************************************/

void SceneManager_Update(void)
{

	//�O�t���[���ƃQ�[�����[�h������Ă�����V�[����؂�ւ���

	if (Game_Mode != Next_Mode)
	{

		SceneManager_Initialize(Next_Mode);

	}


	//�e��ʂ̍X�V����

	
	switch (Game_Mode)

		//4�y�[�W
}