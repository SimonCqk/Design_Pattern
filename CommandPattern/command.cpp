#include "command.h"

void LightOnCommand::execute()
{
	light.on();
}

void LightOnCommand::undo()
{
	light.off();
}

void LightOffCommand::execute()
{
	light.off();
}

void LightOffCommand::undo()
{
	light.on();
}

void StereoOnWithCDCommand::execute()
{
	stereo.on();
	stereo.setCD();
	stereo.setVolume(50);
}

void StereoOnWithCDCommand::undo()
{

}

void MacroCommand::execute()
{
	for (auto command : commands)
		command->execute();
}
