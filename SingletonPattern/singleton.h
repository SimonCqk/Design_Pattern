#include<mutex>

class Singleton {
public:
	static Singleton* getInstance() {
		std::lock_guard<std::mutex> lock(mtx);  // for thread safe.
		if (!theSingleton)
			theSingleton = new Singleton;
		return theSingleton;
	}
	// forbid copy ctor/assignment  
	Singleton(const Singleton& s) = delete;
	Singleton operator=(const Singleton& s) = delete;
	// forbid moving copy ctor/assignment
	Singleton(Singleton&& s) = delete;
	Singleton operator=(Singleton&& s) = delete;
private:
	// make default ctor non-public.
	Singleton() = default;

	static std::mutex mtx;  // for thread safe.
	static Singleton* theSingleton;
};