

#ifndef ROS_DEPS_H

#define ROS_DEPS_H

#include <ros.h>
namespace rosserial_hydrus_node{

extern ros::NodeHandle nh;
void initROSDependencies(void);
void runROSDependencies(void);


}
#endif