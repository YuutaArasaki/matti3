/*****************************************

*プログラミング実習

*マッチ3ゲームの製作

******************************************/


#include "DxLib.h" 

#include "FreamControl.h"

#includ "InputControl.h"

#includ "SceneManager.h"

/******************************************
 
 *マクロ定義

 ******************************************/

#define SCREEN_HEIGHT　　(480)    //スクリーンサイズ　(高さ)

#define SCREEN_WIDTH　　 (640)    //スクリーンサイズ　(幅)

#define SCREEN_COLORBIT　(32)     //スクリーンカラービット
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//ウィンドウモードで起動

	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理

	if (DxLib_Init() == -1)
	{

		return -1;

	}


	//入力待機

	WaitKey();


	//Dxライブラリ使用の終了処理

	DxLib_End();

	return 0;
}
