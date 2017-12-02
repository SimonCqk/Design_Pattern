#include<string>

// receivers to receive a concrete request and do corresponding actions.

class Light {
public:
	Light(const std::string& name) :
		name(name) {}
	void on();
	void off();
private:
	std::string name;
};

class Stereo {
public:
	Stereo(const std::string& name) :
		name(name) {}
	void on();
	void setCD();
	void setVolume(const int& new_volume);
private:
	int volume;
	std::string name;
};