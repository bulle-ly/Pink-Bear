#pragma once
#include"Core.h"

namespace PB {
	class PB_API Application {
	public:
		Application();
		virtual ~Application();
		 void run();
	};
	//在客户端被实际定义
	Application* CreatApplication();
}


