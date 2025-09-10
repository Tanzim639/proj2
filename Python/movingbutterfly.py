import pygame
import sys
import math

# Initialize Pygame
pygame.init()

# Set up the display
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Butterfly Flying Animation")

# Butterfly properties
butterfly_image = pygame.image.load("random/butterfly.png")  # Replace "butterfly.png" with your butterfly image
butterfly_rect = butterfly_image.get_rect()
butterfly_speed = 5
angle = 0

# Main game loop
clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Update butterfly position
    angle += 0.1
    x = width // 2 + 100 * math.sin(angle)
    y = height // 2 + 50 * math.cos(angle)
    butterfly_rect.center = (x, y)

    # Draw the background
    screen.fill((255, 255, 255))

    # Draw the butterfly
    screen.blit(butterfly_image, butterfly_rect)

    # Update the display
    pygame.display.flip()

    # Cap the frame rate
    clock.tick(60)
