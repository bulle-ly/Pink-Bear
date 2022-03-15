#pragma once

#ifdef PLATE_WINDOW
	#ifdef BUILD_DLL 
		#define PB_API __declspec(dllexport)
	#else
		#define PB_API __declspec(dllimport)
#endif // BUILD_DLL
#else 
	#error only support window

#endif // PLATE_WINDOW
