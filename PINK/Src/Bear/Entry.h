#pragma once


#ifdef PLATE_WINDOW

extern PB::Application* PB::CreatApplication();
int main(int argc,char **argv) {
	auto app = PB::CreatApplication();
	app->run();
	delete app;
}
#else 
#error cant support other
#endif // PLATE_WINDOW
