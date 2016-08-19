/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

extern int32_t AltHold;
extern int32_t vario;

void calculateEstimatedAltitude(uint32_t currentTime);

struct pidProfile_s;
struct barometerConfig_s;
struct rcControlsConfig_s;
struct escAndServoConfig_s;
void configureAltitudeHold(struct pidProfile_s *initialPidProfile, struct barometerConfig_s *intialBarometerConfig, struct rcControlsConfig_s *initialRcControlsConfig, struct escAndServoConfig_s *initialEscAndServoConfig);

struct airplaneConfig_t;
void applyAltHold(struct airplaneConfig_s *airplaneConfig);
void updateAltHoldState(void);
void updateSonarAltHoldState(void);

int32_t altitudeHoldGetEstimatedAltitude(void);
