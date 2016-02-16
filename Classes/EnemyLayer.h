/*******************************************************************************
	Author						: JackyFu
	Email                   	: fusijie@vip.qq.com
	QQ  						: 754505629
	Blog						: http://blog.csdn.net/jackystudio
	All Rights Reserved
	
	This piece of code does not have any registered copyright and is free to be 
	used as necessary. The user is free to modify as per the requirements. As a
	fellow developer, all that I expect and request for is to be given the 
	credit for intially developing this reusable code by not removing my name as 
	the author.
*******************************************************************************/
#pragma once
#include "cocos2d.h"
#include "Enemy.h"
#include "SimpleAudioEngine.h"
USING_NS_CC;

const int ENEMY1_MAXLIFE=1;
const int ENEMY2_MAXLIFE=2;
const int ENEMY3_MAXLIFE=5;

enum Level
{
	EASY,
	MIDDLE,
	HARD,
};

class EnemyLayer :
	public CCLayer
{
public:
	EnemyLayer(void);
	~EnemyLayer(void);

	CREATE_FUNC(EnemyLayer);
	virtual bool init();

	void addEnemy1(float dt);
	void enemy1MoveFinished(CCNode* pSender);
	void enemy1Blowup(Enemy* enemy1);
	void removeEnemy1(CCNode* pTarget, void* data);
	void removeAllEnemy1();

	void addEnemy2(float dt);
	void enemy2MoveFinished(CCNode* pSender);
	void enemy2Blowup(Enemy* enemy2);
	void removeEnemy2(CCNode* pTarget, void* data);
	void removeAllEnemy2();

	void addEnemy3(float dt);
	void enemy3MoveFinished(CCNode* pSender);
	void enemy3Blowup(Enemy* enemy3);
	void removeEnemy3(CCNode* pTarget, void* data);
	void removeAllEnemy3();
	void removeAllEnemy();

	CCArray* m_pAllEnemy1;
	CCArray* m_pAllEnemy2;
	CCArray* m_pAllEnemy3;

private:
	CCSpriteFrame* enemy1SpriteFrame;
	CCSpriteFrame* enemy2SpriteFrame;
	CCSpriteFrame* enemy3SpriteFrame_1;
	CCSpriteFrame* enemy3SpriteFrame_2;


};
