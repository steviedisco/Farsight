#include "stdafx.h"
#include "CppUnitTest.h"
#include "CaptureController.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Farsight::Server::Capture;

namespace Farsight::Server::Capture::Test
{
	TEST_CLASS(CAPTURECONTROLLER_TESTS)
	{
	public:
		static CAPTURECONTROLLER* _controller;

		TEST_CLASS_INITIALIZE(Setup)
		{
			_controller = new CAPTURECONTROLLER();
		}

		TEST_CLASS_CLEANUP(Teardown)
		{
			SAFE_DELETE(_controller);
		}

		TEST_METHOD(AssertTest)
		{
			Assert::IsTrue(true, L"This should never fail as it is asserting true = true.");
		}

		TEST_METHOD(CaptureSingleFrame)
		{
			
		}

		TEST_METHOD(PersistSingleFrame)
		{
		}

		TEST_METHOD(StreamSingleFrame)
		{
		}

		TEST_METHOD(CaptureMultipleFrames)
		{
		}

		TEST_METHOD(PersistMultipleFrames)
		{
		}

		TEST_METHOD(StreamMultipleFrames)
		{
		}

		TEST_METHOD(ScaleFrame)
		{
		}

		TEST_METHOD(ScaleStream)
		{
		}

		TEST_METHOD(ThirtyFPSStream)
		{
		}

		TEST_METHOD(SixtyFPSStream)
		{
		}

		TEST_METHOD(LowBitrate)
		{
		}

		TEST_METHOD(MediumBitrate)
		{
		}

		TEST_METHOD(HighBitrate)
		{
		}

		TEST_METHOD(ErrorHandling)
		{
		}
	};

	CAPTURECONTROLLER* CAPTURECONTROLLER_TESTS::_controller;
}