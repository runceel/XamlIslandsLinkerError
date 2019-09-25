#include "pch.h"

#include "App.h"
#include "App.g.cpp"

namespace winrt::BlankApp2::implementation
{
	App::App()
	{
		Initialize();
		AddRef();
		m_inner.as<::IUnknown>()->Release();
	}
	App::~App()
	{
		Close();
	}
}
