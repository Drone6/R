#pragma once
//�g�p����w�b�_�[
//�����Ƀw�b�_�[��ǉ�
//�g�p����l�[���X�y�[�X
//using namespace GameL;

//�I�u�W�F�N�g�FSin�G�@
class EnemyHawk :public CObj
{
public:
	CObjEnemyHawk(float x, float y);//�R���X�g���N�^
	~CObjEnemyHawk() {};
	void Init();  //�C�j�V�����C�Y
	void Action();//�A�N�V����
	void Draw();  //�h���[
private:
	float m_x;//�G�̂������̈ʒu
	float m_y;//�G�̂������̈ʒu
	float m_vx;//�G�ړ��x�N�g��X
	float m_vy;//�G�ړ��x�N�g��Y
	float m_r; //�T�C���J�[�u�p�̊p�x
};