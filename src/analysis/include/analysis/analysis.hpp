#pragma once

#include <vector>
#include <memory>

namespace analysis {

struct Environment {
    static constexpr float radar_threshold = 0.1f;
    static constexpr int theta_idx_count = 360;
    static constexpr int phi_idx_count = 180;
    static constexpr float exploration = 0.1f;
    std::vector<std::vector<float>> environment;

    Environment() : environment(theta_idx_count, std::vector<float>(phi_idx_count, 0.0f)) {}
};

auto env = std::make_unique<Environment>();

// Update the environment distances using the latest scanned values during the environment construction phase.
auto updateEnvironmentAsync(int theta, int phi, const std::vector<float>& radar_values);

// Compares against initial environment for discrepancies.
auto checkForChangesInEnvironment(int theta, int phi, const std::vector<float>& radar_values);

// Locates center mass of object detected.
auto findCenterMass();
  
}