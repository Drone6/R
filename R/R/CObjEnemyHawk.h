#pragma once
//使用するヘッダー
//ここにヘッダーを追加
//使用するネームスペース
//using namespace GameL;

//オブジェクト：Sin敵機
class EnemyHawk :public CObj
{
public:
	CObjEnemyHawk(float x, float y);//コンストラクタ
	~CObjEnemyHawk() {};
	void Init();  //イニシャライズ
	void Action();//アクション
	void Draw();  //ドロー
private:
	float m_x;//敵のｘ方向の位置
	float m_y;//敵のｙ方向の位置
	float m_vx;//敵移動ベクトルX
	float m_vy;//敵移動ベクトルY
	float m_r; //サインカーブ用の角度
};