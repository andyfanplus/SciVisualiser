#pragma once
#if defined(WIN32)
#if defined(MAINWINDOW_EXPORTS)
#define	MAINWINDOW_EXPORT _declspec(dllexport)
#else
#define	MAINWINDOW_EXPORT _declspec(dllimport)
#endif // defined(MAINWINDOW_EXPORTS)
#else	
#define MAINWINDOW_EXPORT
#endif // defined(MAINWINDOW_EXPORTS)
