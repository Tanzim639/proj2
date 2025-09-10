import matplotlib.pyplot as plt
import numpy as np
from math import atan2

# Function to sort points by angle relative to the first point
def sort_by_angle(points):
    # Use the first point as the reference
    ref_point = points[0]
    # Sort the remaining points by the angle they make with the reference point
    return [ref_point] + sorted(points[1:], key=lambda p: atan2(p[1] - ref_point[1], p[0] - ref_point[0]))

# Function to plot points and visualize the convex hull
def plot_points_with_hull(points1, points2):
    # Sort the convex hull points by angle
    points2 = sort_by_angle(points2)
    
    # Convert points to numpy arrays for easier manipulation
    points1 = np.array(points1)
    points2 = np.array(points2)
    
    # Plot the first set of points
    plt.scatter(points1[:, 0], points1[:, 1], color='blue', label='Points')
    
    # Plot the convex hull points in a different color, connecting them in sequence
    for i in range(len(points2) - 1):
        plt.plot([points2[i][0], points2[i+1][0]], [points2[i][1], points2[i+1][1]], 'r-')
    # Connect the last point to the first to close the hull
    plt.plot([points2[-1][0], points2[0][0]], [points2[-1][1], points2[0][1]], 'r-', label='Convex Hull')

    # Plot the convex hull points
    plt.scatter(points2[:, 0], points2[:, 1], color='red', marker='o', s=100, label='Hull Points')
    
    # Add labels and legend
    plt.xlabel('X-axis') 
    plt.ylabel('Y-axis')
    plt.legend()
    plt.grid()
    plt.show()

# Example points
# points1 = [ (3, 7), (10, 2), (1, 9), (8, 4), (5, 5), (2, 3), (6, 10), (9, 1), (7, 8), (4, 6) ]
points1 =[(41,67),(34,0),(69,24),(78,58),(62,64),(5,45),(81,27),(61,91),(95,42),(27,36),(91,4),(2,53),(92,82),(21,16),(18,95),(47,26),(71,38),(69,12),(67,99),(35,94),(3,11),(22,33),(73,64),(41,11),(53,68),(47,44),(62,57),(37,59),(23,41),(29,78),(16,35),(90,42),(88,6),(40,42),(64,48),(46,5),(90,29),(70,50),(6,1),(93,48),(29,23),(84,54),(56,40),(66,76),(31,8),(44,39),(26,23),(37,38),(18,82),(29,41),(33,15),(39,58),(4,30),(77,6),(73,86),(21,45),(24,72),(70,29),(77,73),(97,12),(86,90),(61,36),(55,67),(55,74),(31,52),(50,50),(41,24),(66,30),(7,91),(7,37),(57,87),(53,83),(45,9),(9,58),(21,88),(22,46),(6,30),(13,68),(0,91),(62,55),(10,59),(24,37),(48,83),(95,41),(2,50),(91,36),(74,20),(96,21),(48,99),(68,84),(81,34),(53,99),(18,38),(0,88),(27,67),(28,93),(48,83),(7,21),(10,17),(13,14),]
# print(len(points1))
# Convex hull points, ideally calculated by a convex hull algorithm like QuickHull or Graham's Scan
# points2 = [ (6, 10), (1, 9), (10, 2), (2, 3), (9, 1) ]
points2 = [(6, 1),  (3, 11),  (0, 88),  (0, 91),  (18, 95),  (48, 99),  (67, 99),  (86, 90),  (92, 82),  (95, 42),  (97, 12),  (91, 4),  (34, 0),  ]

# Plot the points and convex hull
plot_points_with_hull(points1, points2)
