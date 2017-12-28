#pragma once

#include "CommonTypes.h"

namespace Farsight::Server::Capture
{
	class THREADMANAGER
	{
	public:
		THREADMANAGER();
		~THREADMANAGER();
		void Clean();
		DUPL_RETURN Initialize(INT SingleOutput, UINT OutputCount, HANDLE UnexpectedErrorEvent, HANDLE ExpectedErrorEvent, HANDLE TerminateThreadsEvent, HANDLE SharedHandle, _In_ RECT* DesktopDim);
		PTR_INFO* GetPointerInfo();
		void WaitForThreadTermination();

	private:
		DUPL_RETURN InitializeDx(_Out_ DX_RESOURCES* Data);
		void CleanDx(_Inout_ DX_RESOURCES* Data);

		PTR_INFO m_PtrInfo;
		UINT m_ThreadCount;
		_Field_size_(m_ThreadCount) HANDLE* m_ThreadHandles;
		_Field_size_(m_ThreadCount) THREAD_DATA* m_ThreadData;
	};
}