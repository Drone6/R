#pragma once
//�g�p����w�b�_�[
#include "GameL\SceneObjManager.h"
//�g�p����l�[���X�y�[�X
using namespace GameL;

//�N���X�I�u�W�F�N�g�F�w�i
class CObjBackground :public CObj
{
public :
	CObjBackground() {};
	~CObjBackground() {};
	void Init(); //�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();//�h���[
private:

	float m_x1; //�w�i�P�̈ʒu���
	float m_x2; //�w�i2�̈ʒu���




};


//GameHead.h�ɏ������ނƂ���
//#include "ObjBackground.h"
//OBJ_BACKGROUND,