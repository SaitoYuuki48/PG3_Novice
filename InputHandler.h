#pragma once
#include"Command.h"

class InputHandler
{
public:
	ICommand* HandleInput();

	void AssingMoveLeftCommand2PressKeyA();
	void AssingMoveRightCommand2PressKeyD();

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;
};

