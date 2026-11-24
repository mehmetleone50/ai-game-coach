// analyze — part of ai-game-coach.

#pragma once

#include <string>
#include <vector>

namespace aigamecoach {

class Analyze {
public:
    explicit Analyze(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace aigamecoach
