import unittest
import waypoint_generator


def point_on_line(p1, p2, intermediate_point):
    dx_int = intermediate_point[0] - p1[0]
    dy_int = intermediate_point[1] - p1[1]

    dx_line = p2[0] - p1[0]
    dy_line = p2[1] - p1[1]
    
    cross = dx_int*dy_line - dy_int*dx_line
    return cross

def test_generate_intermediate_points(p1, p2, nb_test_points):
    """This function receives start and end point of a straight line and number of points that should be tested then it calls the generate_intermediate_points to generate a list of points and it checks them one by one using point_on_line function to see if these point are located on the line or not.
    To Do: I should add some thershold for testing the generated points.
    """
    intermediate_point_list = generate_intermediate_points(p1, p2, nb_test_points)

    for int_point in intermediate_point_list:
        assertEqual(point_on_line(p1, p2, int_point), 0)

def test_generate_from_graph():
    pass

def test_generate_from_formula():
    pass

def test_store_points():
    pass
