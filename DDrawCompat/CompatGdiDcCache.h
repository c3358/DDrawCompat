#pragma once

#define CINTERFACE
#define WIN32_LEAN_AND_MEAN

#include <ddraw.h>
#include <Windows.h>

namespace CompatGdiDcCache
{
	struct CachedDc
	{
		IDirectDrawSurface7* surface;
		HDC dc;
		DWORD cacheId;
	};

	void clear();
	CachedDc getDc();
	bool init();
	void releaseDc(const CachedDc& cachedDc);
	void setDdLockThreadId(DWORD ddLockThreadId);
	void setSurfaceMemory(void* surfaceMemory, LONG pitch);
	void updatePalette(DWORD startingEntry, DWORD count);
}
