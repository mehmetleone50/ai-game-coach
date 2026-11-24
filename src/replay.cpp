// replay.cpp — part of ai-game-coach.

#include "aigamecoach/replay.h"

#include <cstdio>

namespace aigamecoach {

Replay::Replay(const std::string& config_path)
    : config_path_(config_path) {}

void Replay::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Replay::run() {
    if (verbose_) std::fprintf(stderr, "[ai-game-coach] replay: run\n");
    // core logic lives here
    return true;
}

}  // namespace aigamecoach
