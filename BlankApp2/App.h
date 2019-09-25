#pragma once
#include "App.g.h"
#include "App.xaml.g.h"
#include "App.base.h"

namespace winrt::BlankApp2::implementation
{
    struct App : AppT2<App>
    {
        App();
		~App();
    };
}

namespace winrt::BlankApp2::factory_implementation
{
	class App : public AppT<App, implementation::App>
	{
	};
}
