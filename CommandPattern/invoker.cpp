#include "invoker.h"

void RemoteControl::setCommand(const int & slot, Command * onCommand, Command * offCommand)
{
	if (slot > onCommands.size() || slot > offCommands.size())
		return;
	onCommands[slot] = onCommand;
	offCommands[slot] = offCommand;
}

void RemoteControl::onButtonWasPushed(const int & slot)
{
	onCommands[slot]->execute();
	undoCommand = onCommands[slot];
}

void RemoteControl::offButtonWasPushed(const int & slot)
{
	offCommands[slot]->execute();
	undoCommand = offCommands[slot];
}

void RemoteControl::undoButtonWasPushed()
{
	undoCommand->undo();
}
