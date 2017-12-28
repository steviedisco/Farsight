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

		THREADMANAGER _ThreadMgr;
		DYNAMIC_WAIT DynamicWait;

		bool _FirstTime = true;
	};
}