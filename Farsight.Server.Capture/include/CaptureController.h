#pragma once

#include "CommonTypes.h"

namespace Farsight::Server::Capture
{
	enum class CAPTURETYPE { Single };

	class CAPTURECONTROLLER
	{
	public:
		CAPTURECONTROLLER();
		~CAPTURECONTROLLER();

		void Capture(CAPTURETYPE type);

	private:
		// Synchronization
		HANDLE _UnexpectedErrorEvent = nullptr;
		HANDLE _ExpectedErrorEvent = nullptr;
		HANDLE _TerminateThreadsEvent = nullptr;

		OUTPUTMANAGER _OutMgr;
		THREADMANAGER _ThreadMgr;
		DYNAMIC_WAIT _DynamicWait;

		HWND _WindowHandle = nullptr;
		INT _SingleOutput;
		RECT _DeskBounds;
		UINT _OutputCount;

		bool _FirstTime = true;
	};
}