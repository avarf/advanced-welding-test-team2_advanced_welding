
def generate_from_formula():
    pass

def generate_from_graph(nodes, edges):
    """Receives two 2d lists nodes for the position of graph nodes and edges that defines the connection among nodes and returns a list of points located on the path
    """
    pass

def generate_intermediate_points(p1, p2, nb_points):
    """Returns a list of equally spaced points
    between p1 and p2"""
    x_spacing = (p2[0] - p1[0]) / (nb_points + 1)
    y_spacing = (p2[1] - p1[1]) / (nb_points + 1)
    
    return [[p1[0] + i * x_spacing, p1[1] +  i * y_spacing] 
            for i in range(1, nb_points+1)]


def store_points(path_points, file_name):
    pass
