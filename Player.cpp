#include "Player.h"
#include <Novice.h>

Player::Player()
{
	Initialize();
}

void Player::Initialize()
{
	pos = { 640,320 };
	speed_ = 5.0f;
}

void Player::Update()
{
	
}

void Player::Draw()
{
	Novice::DrawEllipse((int)pos.x, (int)pos.y, 16, 16, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight()
{
	this->pos.x += this->speed_;
}

void Player::MoveLeft()
{
	this->pos.x -= this->speed_;
}