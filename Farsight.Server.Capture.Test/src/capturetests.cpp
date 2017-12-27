#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Farsight { namespace Server { namespace Capture { namespace Test
{
	TEST_CLASS(CaptureTests)
	{
	public:
		TEST_CLASS_INITIALIZE(Setup)
		{
		}

		TEST_CLASS_CLEANUP(Teardown)
		{
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
}}}}