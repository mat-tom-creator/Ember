#pragma once

#ifdef EM_PLATFORM_WINDOWS

extern Ember::Application* Ember::CreateApplication();

int main(int argc, char** argv)
{
	printf("Ember Engine");
	auto app = Ember::CreateApplication();
	app->Run();
	delete app;
}

#endif
