#pragma once
#include "Vector2.h"
#include "PlayerBullet.h"
#include <list>

class Player
{
public:
	
	Player();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

	//メンバ関数
	void MoveRight();
	void MoveLeft();

private:
	Vector2 pos;

	float speed_;

	//int size_ = 30;
};

