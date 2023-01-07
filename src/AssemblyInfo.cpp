#include "version.hpp"

using namespace System;
using namespace System::Reflection;
using namespace System::Runtime::CompilerServices;
using namespace System::Runtime::InteropServices;
using namespace System::Security::Permissions;

[assembly:AssemblyTitle(PLUGIN_NAME)];
[assembly:AssemblyDescription(PLUGIN_INTRODUCTION)];
[assembly:AssemblyConfiguration(L"")];
[assembly:AssemblyCompany(PLUGIN_AUTHOR)];
[assembly:AssemblyProduct(PLUGIN_NAME)];
[assembly:AssemblyCopyright(FILE_VERSION_LEGAL_COPYRIGHT)];
[assembly:AssemblyTrademark(L"")];
[assembly:AssemblyCulture(L"")];

[assembly:AssemblyVersion(PLUGIN_ASSEMBLY_VERSION)];
[assembly:AssemblyFileVersion(PLUGIN_ASSEMBLY_FILE_VERSION)];

[assembly:ComVisible(false)];

[assembly:Guid("c5d6cdbc-bece-4f53-a7d9-8c5a1050ab57")];
