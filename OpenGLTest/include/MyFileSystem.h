#pragma once

#include <string>
#include <direct.h>

using namespace std;

class FileSystem
{
public:
	static string getPath(string path)
	{
		char* a_cwd = _getcwd(NULL, 0);
		string s_cwd(a_cwd);
		free(a_cwd);
		string fullPath = s_cwd + "/" + path;
		return fullPath;
	}
};