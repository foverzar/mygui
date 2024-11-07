/*
 * This source file is part of MyGUI. For the latest info, see http://mygui.info/
 * Distributed under the MIT License
 * (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
 */

#include "MyGUI_Precompiled.h"
#include "MyGUI_DynLib.h"

namespace MyGUI
{
	DynLib::DynLib(const std::string& name) :
		mName(name),
		mInstance(nullptr)
	{
	}

	DynLib::~DynLib()
	{
	}

	bool DynLib::load()
	{
		// Log library load
		MYGUI_LOG(Info, "Loading library " << mName);

		std::string name = mName;
		const std::string extension = "";

		if (!extension.empty() && name.find(extension) == std::string::npos)
			name += extension;

		return mInstance != 0;
	}


	void DynLib::unload()
	{
		// Log library unload
		MYGUI_LOG(Info, "Unloading library " << mName);
	}

	void* DynLib::getSymbol( const std::string& strName ) const throw()
	{
		return nullptr;
	}

	std::string DynLib::dynlibError() const
	{
		return "no unix error function defined yet";
	}

	std::string DynLib::getName(void) const
	{
		return mName;
	}

} // namespace MyGUI
