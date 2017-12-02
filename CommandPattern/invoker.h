#include<vector>
#include"command.h"

// the invoker to call Command.execute()
class RemoteControl {
public:
	RemoteControl()
		:undoCommand(nullptr) {
		NoCommand* nocommand = new NoCommand();
		for (int i = 0; i < 7; ++i) {
			onCommands.push_back(nocommand);
			offCommands.push_back(nocommand);
		}
		undoCommand = nocommand;
	}
	void setCommand(const int& slot, Command* onCommand, Command* offCommand);
	void onButtonWasPushed(const int& slot);
	void offButtonWasPushed(const int& slot);
	void undoButtonWasPushed();
private:
	std::vector<Command*> onCommands;
	std::vector<Command*> offCommands;
	Command* undoCommand;  // or we can record the previous state, which is a better implementation.
};