#include "stdafx.h"
#include "CaptureController.h"

Farsight::Server::Capture::CAPTURECONTROLLER::CAPTURECONTROLLER()
{
	// Event used by the threads to signal an unexpected error and we want to quit the app
	UnexpectedErrorEvent = CreateEvent(nullptr, TRUE, FALSE, nullptr);

	// Event for when a thread encounters an expected error
	ExpectedErrorEvent = CreateEvent(nullptr, TRUE, FALSE, nullptr);

	// Event to tell spawned threads to quit
	TerminateThreadsEvent = CreateEvent(nullptr, TRUE, FALSE, nullptr);

	// Load simple cursor
	Cursor = LoadCursor(nullptr, IDC_ARROW);
}

Farsight::Server::Capture::CAPTURECONTROLLER::~CAPTURECONTROLLER()
{
	// Clean up
	CloseHandle(UnexpectedErrorEvent);
	CloseHandle(ExpectedErrorEvent);
	CloseHandle(TerminateThreadsEvent);

	DestroyCursor(Cursor);
}

void Farsight::Server::Capture::CAPTURECONTROLLER::Capture(CAPTURETYPE type)
{
}