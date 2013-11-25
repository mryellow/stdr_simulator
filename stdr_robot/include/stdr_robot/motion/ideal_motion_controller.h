/******************************************************************************
   STDR Simulator - Simple Two DImensional Robot Simulator
   Copyright (C) 2013 STDR Simulator
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
   
   Authors : 
   * Manos Tsardoulias, etsardou@gmail.com
   * Aris Thallas, aris.thallas@gmail.com
   * Chris Zalidis, zalidis@gmail.com 
******************************************************************************/

#ifndef IDEAL_MOTION_CONTROLLER_H
#define IDEAL_MOTION_CONTROLLER_H

#include <stdr_robot/motion/motion_controller_base.h>

namespace stdr_robot {
	
class IdealMotionController : public MotionController {
	
	public:
		
		IdealMotionController(const geometry_msgs::Pose2DPtr& pose, tf::TransformBroadcaster& tf, ros::NodeHandle& n, const std::string& name);
		void velocityCallback(const geometry_msgs::Twist& msg);
		void stop();
		void calculateMotion(const ros::TimerEvent& event);
		~IdealMotionController() {}
				
	
};	
	
	
}


#endif
