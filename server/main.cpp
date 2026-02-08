#include <userver/components/minimal_server_component_list.hpp>
#include <userver/components/run.hpp>

int main(int argc, char* argv[]){
	auto component_list = userver::components::MinimalServerComponentList();
	return userver::components::Run(argc, argv, component_list);

}
