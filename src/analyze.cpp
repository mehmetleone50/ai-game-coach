// analyze.cpp — part of ai-game-coach.

#include "aigamecoach/analyze.h"

#include <cstdio>

namespace aigamecoach {

Analyze::Analyze(const std::string& config_path)
    : config_path_(config_path) {}

void Analyze::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Analyze::run() {
    if (verbose_) std::fprintf(stderr, "[ai-game-coach] analyze: run\n");
    // core logic lives here
    return true;
}

}  // namespace aigamecoach
