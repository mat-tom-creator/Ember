#pragma once

#include "core.h"

namespace Ember {

	class EMBER_API Application
	{
		public:
			Application();
			virtual ~Application();

			void Run();

	};

	Application* CreateApplication();
}

