/** \file CCNxPlugin.h
 * \brief Simple header used in the ccnx plug-in definition
 */

#ifndef CCNXPLUGIN_H
#define CCNXPLUGIN_H

#ifdef WIN32
/*
 * The following ifdef block is the standard way of creating macros which make exporting 
 * from a DLL simpler. All files within this DLL are compiled with the TESTPLUG_EXPORTS
 * symbol defined on the command line. this symbol should not be defined on any project
 * that uses this DLL. This way any other project whose source files include this file see 
 * TESTPLUG_API functions as being imported from a DLL, whereas this DLL sees symbols
 * defined with this macro as being exported.
 */
#ifdef TESTPLUG_EXPORTS
#define TESTPLUG_API __declspec(dllexport)
#else
#define TESTPLUG_API __declspec(dllimport)
#endif

#endif // WIN32

#endif // CCNXPLUGIN_H