#include <geometry_msgs/TwistStamped.h>
#include <ros/ros.h>


// KDL::TwistStamped targetVelocity;


// tf::TransformListener *tf_listener;


class MoveArmTestNode
{
public:
	MoveArmTestNode();
	// ~MoveArmTestNode();
private:
	ros::Publisher twistStamped_pub;
	geometry_msgs::TwistStamped arm_test_velocity;
	ros::NodeHandle nh;	
};


MoveArmTestNode::MoveArmTestNode(){
	arm_test_velocity.twist.linear.x = 10;
	arm_test_velocity.twist.linear.y = 10;
	arm_test_velocity.twist.linear.z = 10;
	arm_test_velocity.twist.angular.x = 5;
	arm_test_velocity.twist.angular.y = 5;
	arm_test_velocity.twist.angular.z = 5;

	ROS_INFO( "Started publishing Arm Velocity Commands" );
	printf("Started publishing Arm Velocity From PRINTF\n");
	twistStamped_pub.publish(arm_test_velocity);
	// twistStamped_pub = nh.advertise<geometry_msgs::TwistStamped>("/arm_1/arm_controller/cartesian_velocity_command",10);
	twistStamped_pub = nh.advertise<geometry_msgs::TwistStamped>("/arm_1/arm_controller/velocity_command",10);



}

int main(int argc, char**  argv)
{
	ros::init(argc, argv, "move_arm_test_node");
	
	ros::Publisher twistStamped_pub;
	geometry_msgs::TwistStamped arm_test_velocity;
	ros::NodeHandle nh;

	twistStamped_pub = nh.advertise<geometry_msgs::TwistStamped>("/arm_1/arm_controller/velocity_command",10);

	arm_test_velocity.twist.linear.x = 10;
	arm_test_velocity.twist.linear.y = 10;
	arm_test_velocity.twist.linear.z = 10;
	arm_test_velocity.twist.angular.x = 5;
	arm_test_velocity.twist.angular.y = 5;
	arm_test_velocity.twist.angular.z = 5;

	ROS_INFO( "Started publishing Arm Velocity Commands" );
	printf("Started publishing Arm Velocity From PRINTF\n");
	twistStamped_pub.publish(arm_test_velocity);

	// ros::init(argc, argv, "move_arm_test_node");
	// MoveArmTestNode move_arm_test_node;

	ros::spin();

	return 0;
}