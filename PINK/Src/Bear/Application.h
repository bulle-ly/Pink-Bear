#pragma once
#include"Core.h"

namespace PB {
	class PB_API Application {
	public:
		Application();
		virtual ~Application();
		 void run();
	};
	//�ڿͻ��˱�ʵ�ʶ���
	Application* CreatApplication();
}


