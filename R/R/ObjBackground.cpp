//使用するヘッダーファイル
#include "GameL\DrawTexture.h"
#include "GameHead.h"

#include "ObjBackground.h"

//使用するネームスペース
using namespace GameL;


//イニシャライズ
void CObjBackground::Init()
{

}

//アクション
void CObjBackground::Action()
{

}

//ドロー
void CObjBackground::Draw()
{
	//描画カラー情報 R=RED G=GREEEN B=Blue A=alpha(透過情報)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //描画元切り取り位置
	RECT_F dst; //描画先表示位置

	//切り取り位置の設定
	src.m_top = 264.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 448.0f;

	//表示位置の設定
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	//0番目に登録したグラフィックをsrc・dst・cの情報を元に描画
	Draw::Draw(1, &src, &dst, c, 0.0f);


}
//SceneMain.cppにかきこむやつ
/*void CSceneMain::InitScene()
{
  //外部グラフィックファイルを読み込み0番目に登録(512)
  Draw::LoadImage(L"image.png",0,TEX_SIZE_512);

  //外部グラフィックファイルを読み込み1番に登録(512)
  Draw::LoadImage(L"BossBack.png",1,TEX_SIZE_512);

  //主人公オブジェクト作成
  CObjHero* obj=new CObjHero(); //主人公オブジェクト
  Objs::InsertObj(obj,OBJ_HERO,10);//主人公オブジェクト

  //背景オブジェクト作成
  CObjBackground* back=new CObjBackground();
  Objs::InsertObj(back,OBJ_BACKGROUND,5);

  //タイム初期化
  m_time=0;

  //ゲームメイン実行中メソッド
  CSceneMain::Scene()

  m_time++;

  if(m_time==30)
  {
  CObjEnemy* obj=new CObjEnemy(799.0f,400);
  Objs::InsertObj(obj,OBJ_ENEMY,50);

  }
  else if(m_time==80)
  {
  CObjEnemy* obj=new CObjEnemy(799.0f,400);
  Objs::InsertObj(obj,OBJ_ENEMY,50);
  
  }
  else if(m_time==120)
  {
  CObjEnemy* obj=new CObjEnemy(799.0f,200);
  Objs::InsertObj(obj,OBJ_ENEMY,50);
  }
  else if(m_time==200)
  {
  CObjEnemy* obj;
  obj=new CObjEnemy(799.0f,100);
  Objs::InsertObj(obj,OBJ_ENEMY,50);
  obj=new CObjEnemy(799.0f,500);
  Objs::InsertObj(obj,OBJ_ENEMY,50);
  }
  else if(m_time==400)
  {
  CObjEnemy* obj1
  obj1 =new CObjEnemy(799.0f,300);
  Objs::InsertObj(obj1,OBJ_ENEMY,50);
  }

}*/