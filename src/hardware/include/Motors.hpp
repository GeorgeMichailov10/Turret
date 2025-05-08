namespace Motors {

auto Zero(int curr_theta, int curr_phi);
auto HorizontalRotation(int degrees);
auto VerticalRotation(int degrees);
auto SimultaneousRotation(int degrees_x, int degrees_y);

auto SetToDefaultScanningPosition(int curr_theta, int curr_phi);
auto RotateUntilStop();

}