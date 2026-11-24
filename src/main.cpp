// main.cpp — entry point. Wires config and subsystems together.

#include "aigamecoach/settings.h"
#include "aigamecoach/replay.h"
#include "aigamecoach/analyze.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    aigamecoach::Settings settings = aigamecoach::Settings::load_default();
    aigamecoach::Replay replay(settings.store_path);
    aigamecoach::Analyze analyze(settings.store_path);
    std::fprintf(stderr, "[ai-game-coach] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
