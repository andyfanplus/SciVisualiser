#pragma once
#if defined(WIN32)
#if defined(QTEXTENSIONS_EXPORTS)
#define	QTEXTENSIONS_EXPORT _declspec(dllexport)
#else
#define	QTEXTENSIONS_EXPORT _declspec(dllimport)
#endif // defined(QTEXTENSIONS_EXPORTS)
#else	
#define QTEXTENSIONS_EXPORT
#endif // defined(QTEXTENSIONS_EXPORT)
