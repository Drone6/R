//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameHead.h"

#include "ObjBackground.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;


//�C�j�V�����C�Y
void CObjBackground::Init()
{

}

//�A�N�V����
void CObjBackground::Action()
{

}

//�h���[
void CObjBackground::Draw()
{
	//�`��J���[��� R=RED G=GREEEN B=Blue A=alpha(���ߏ��)
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src; //�`�挳�؂���ʒu
	RECT_F dst; //�`���\���ʒu

	//�؂���ʒu�̐ݒ�
	src.m_top = 264.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 448.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	//0�Ԗڂɓo�^�����O���t�B�b�N��src�Edst�Ec�̏������ɕ`��
	Draw::Draw(1, &src, &dst, c, 0.0f);


}
//SceneMain.cpp�ɂ������ނ��
/*void CSceneMain::InitScene()
{
  //�O���O���t�B�b�N�t�@�C����ǂݍ���0�Ԗڂɓo�^(512)
  Draw::LoadImage(L"image.png",0,TEX_SIZE_512);

  //�O���O���t�B�b�N�t�@�C����ǂݍ���1�Ԃɓo�^(512)
  Draw::LoadImage(L"BossBack.png",1,TEX_SIZE_512);

  //��l���I�u�W�F�N�g�쐬
  CObjHero* obj=new CObjHero(); //��l���I�u�W�F�N�g
  Objs::InsertObj(obj,OBJ_HERO,10);//��l���I�u�W�F�N�g

  //�w�i�I�u�W�F�N�g�쐬
  CObjBackground* back=new CObjBackground();
  Objs::InsertObj(back,OBJ_BACKGROUND,5);

  //�^�C��������
  m_time=0;

  //�Q�[�����C�����s�����\�b�h
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