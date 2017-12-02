#include"receivers.h"
#include<vector>

class Command {
public:
	void undo() {};
	virtual void execute() = 0;
};

// which means do nothing
// for initialization
class NoCommand :public Command {
public:
	void execute() {};
};

// to execute a batch of commands.
class MacroCommand :public Command {
public:
	MacroCommand(const std::vector<Command*>& commands)
		:commands(commands) {}
	void execute();
private:
	std::vector<Command*> commands;
};


// some concrete command implemented from class Command
// TO OVERRIDE .execute() interface.
class LightOnCommand :public Command {
public:
	explicit LightOnCommand(const Light& light) :
		light(light) {}
	void execute();
	void undo();
private:
	Light light;
};

class LightOffCommand :public Command {
public:
	explicit LightOffCommand(const Light& light) :
		light(light) {}
	void execute();
	void undo();
private:
	Light light;
};

class StereoOnWithCDCommand :public Command {
public:
	explicit StereoOnWithCDCommand(const Stereo& stereo)
		:stereo(stereo) {}
	void execute();
private:
	Stereo stereo;
};