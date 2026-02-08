#include <userver/server/handlers/http_handler_base.hpp>
#include <userver/components/component_list.hpp>

namespace{

class EchoHandler final : public userver::server::handlers::HttpHandlerBase {
public:
	static constexpr std::string_view kName = "echo-handler";
	using HttpHandlerBase::HttpHandlerBase;
	std::string HandleRequestThrow(
		const userver::server::http::HttpRequest& request,
		userver::server::request::RequestContext&) const override{
		return request.RequestBody();
	}
};
}
void AppendEchoHandler(userver::components::ComponentList& component_list){
	component_list.Append<EchoHandler>();

}
