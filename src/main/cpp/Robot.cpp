// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include <AHRS.h>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SmartDashboard.h>

class Robot : public frc::TimedRobot {
 public:
   AHRS gyro{frc::SerialPort::Port::kMXP};

  void RobotPeriodic() {
    frc::SmartDashboard::PutNumber("Gyro Reading", gyro.GetAngle());
    frc::SmartDashboard::PutNumber("Gyro Rate", gyro.GetRate());
  }
   
};

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
