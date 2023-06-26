#pragma once
#include<iostream>
#include"speaker.h"
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
using  namespace std;

//�ݽ�������
class SpeechManager {
	//����ѡ�� ���� 12 ��
	vector<int>v1;

	//��һ�ֽ������� 6��
	vector<int>v2;

	//ʤ��ǰ�������� 3��
	vector<int>vVictory;


	//��ű�� �Լ���Ӧ�ľ���ѡ������
	map<int, Speaker> m_Speaker;

	//��������
	int m_Index;
public:
	//���캯��
	SpeechManager();

	void show_Menu();

	void exitSystem();

	void initSpeech();

	void createSpeaker();

	void startSpeech();

	void speechDraw();//��ǩ

	void speechContest();//����
	//��������
	~SpeechManager();
};