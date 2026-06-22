#pragma once
#include <string>
#include <vector>
#include <memory>

class InferenceServer {
public:
    static std::unique_ptr<InferenceServer> create();
    virtual void load_model(const std::string& name, const std::string& path) = 0;
    virtual void start(int port) = 0;
    virtual void stop() = 0;
    virtual ~InferenceServer() = default;
};
