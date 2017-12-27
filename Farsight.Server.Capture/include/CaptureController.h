#pragma once

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
		HANDLE UnexpectedErrorEvent = nullptr;
		HANDLE ExpectedErrorEvent = nullptr;
		HANDLE TerminateThreadsEvent = nullptr;

		HCURSOR Cursor = nullptr;
	};
}