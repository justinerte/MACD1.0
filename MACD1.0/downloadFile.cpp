//
//                 downloadFile.cpp
//
//

#include <tchar.h>
#include <urlmon.h>
#include "downloadFile.h"
#include "direct.h"
#include "urlmon.h"


void downloadFile(const std::string & szWebSite, std::stringstream &strStream)
{
	IStream* pStream = 0;
	//LPCSTR  webSite_LPCSTR = szWebSite.c_str();
	URLOpenBlockingStream(0, szWebSite.c_str(), &pStream, 0, 0); // Open WebLink
//	URLDownloadToFile(NULL, szWebSite.c_str(), "\\vmware-host\Shared Folders\нд╦Е\Visual Studio 2015\Projects\MACD1.0\MACD1.0", 0, NULL);//download file
	if (pStream == 0) return;  // failure 

	while (pStream != 0)
	{
		DWORD dwGot = 0;
		char szBuffer[200] = "";

		if (pStream->Read(szBuffer, sizeof(szBuffer) - 1, &dwGot) != S_OK)
			break;

		strStream << szBuffer;
	};

	if (pStream)	pStream->Release();
};
