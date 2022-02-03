#pragma once

#include "Trajectory.hpp"
#include "Drivetrain.hpp"

;
namespace Autons
{
    inline static constexpr auto straight_auton = []()
    {
        using namespace pathplanner;
        Trajectory::follow(PathPlanner::loadPath("Straight Line", Drivetrain::TRAJ_MAX_SPEED, Drivetrain::TRAJ_MAX_ACCELERATION),
                           [](units::second_t current_time) {});
    };
}