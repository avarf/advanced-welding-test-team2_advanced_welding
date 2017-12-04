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
	twistStamped_pub = nh.advertise<geometry_msgs::TwistStamped>("/arm_1/arm_controller/cartesian_velocity_command",10);

	// std::cout << 'enter linear x: '<<std::endl;
	// std::cin >> arm_test_velocity.twist.linear.x;

	// std::cout << 'enter linear y: '<<std::endl;
	// std::cin >> arm_test_velocity.twist.linear.y;

	// std::cout << 'enter linear z: '<<std::endl;
	// std::cin >> arm_test_velocity.twist.linear.z;

	// std::cout << 'enter angular x: '<<std::endl;
	// std::cin >> arm_test_velocity.twist.angular.x;

	// std::cout << 'enter linear y: '<<std::endl;
	// std::cin >> arm_test_velocity.twist.angular.y;

	// std::cout << 'enter linear z: '<<std::endl;
	// std::cin >> arm_test_velocity.twist.angular.z;

	arm_test_velocity.twist.linear.x = 10;
	arm_test_velocity.twist.linear.y = 10;
	arm_test_velocity.twist.linear.z = 10;
	arm_test_velocity.twist.angular.x = 5;
	arm_test_velocity.twist.angular.y = 5;
	arm_test_velocity.twist.angular.z = 5;

	twistStamped_pub.publish(arm_test_velocity);

}

int main(int argc, char**  argv)
{
	ros::init(argc, argv, "move_arm_test_node");
	MoveArmTestNode move_arm_test_node;

	ros::spin();

	return 0;
}