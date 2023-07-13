#include "TitleScene.h"

#include "DxLib.h"

#include "InputControl.h"

#include "SceneManager.h"

/******************************
*マクロ定義
*******************************/

/*******************************
*型定義
********************************/

/********************************
*変数宣言
*********************************/

int TitleImage;
int TitileBGM;


/********************************
*プロトタイプ宣言
*********************************/



/*********************************
*タイトル画面　; 初期化処理

*引数 ; なし

*戻り値 ; エラー情報

**********************************/

int TitleScene_Initialize(void)
{

	int ret = 0;

	
	//画像読み込み処理

	TitleImage = LoadGraph("images/title.png");

	//音源読み込み処理

	TitileBGM = LoadSoundMem("sounds/title_bgm.mp3");


	if (Titlemage == D_ERROR)
	{
		ret = D_ERROR;
	}
}
