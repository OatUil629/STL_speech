#pragma once
#include<iostream>
#include"speaker.h"
#include<vector>
#include<map>
#include<deque>
#include<algorithm>
#include<numeric>
#include<fstream>
using  namespace std;

//演讲管理类
class SpeechManager {
	//比赛选手 容器 12 人
	vector<int>v1;

	//第一轮晋级容器 6人
	vector<int>v2;

	//胜利前三名容器 3人
	vector<int>vVictory;


	//存放编号 以及对应的具体选手容器
	map<int, Speaker> m_Speaker;

	//比赛轮数
	int m_Index;

	bool fileIsEmpty;

	map<int, vector<string>> m_Record;


public:
	//构造函数
	SpeechManager();

	void show_Menu();

	void exitSystem();

	void initSpeech();

	void createSpeaker();

	void startSpeech();

	void speechDraw();//抽签

	void speechContest();//比赛

	void showScore();//显示比赛结果

	void saveRecord();//保存记录

	void loadReacord();

	void showRecord();

	void clearRecord();

	//析构函数
	~SpeechManager();
};