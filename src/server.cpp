#include "inference_server.h"
#include <iostream>

class InferenceServerImpl : public InferenceServer {
public:
    void load_model(const std::string& name, const std::string& path) override {
        std::cout << "Loading model: " << name << " from " << path << std::endl;
    }
    void start(int port) override {
        std::cout << "Server starting on port " << port << std::endl;
    }
    void stop() override {
        std::cout << "Server stopped" << std::endl;
    }
};

std::unique_ptr<InferenceServer> InferenceServer::create() {
    return std::make_unique<InferenceServerImpl>();
}
