
#ifndef STAR_H
# define STAR_H

# include "minilibx/mlx.h"
# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define KEY_ESCAPE 53
# define KEY_H 72
# define KEY_1 18
# define KEY_2 19
# define KEY_3 20

# define RED 0xc1272d
# define GREEN 0x33cc55
# define GREEN2 0X93dc9a
# define FUCSIA 0xff255c
# define BLUE 0x1B8EFA
# define SKYBLUE 0x0000FF
# define CARBON 0x151515
# define WHITE 0xBBBBBB
# define PURPLE 0x9A1F6A
# define BRICK_RED 0xC2294E
# define FLAMINGO 0xEC4B27
# define ORANGE 0xEF8633
# define SAFFRON 0xF3AF3D
# define BLUE2 0X3784f1
# define TURKUAZ 0x40B5AD

# define WIDTH 1440
# define HIGHT 900

typedef struct s_point
{
	int		x;
	int		y;
}			t_point;

typedef struct s_meta
{
	void	*mlx;
	void	*win;
	t_point	center;
	int		mode;
}			t_meta;

void		draw_square(int x, int y, int size, int color, t_meta *meta);
void		draw_square_border(int x, int y, int size, int color, t_meta *meta);
void		draw_square_in_square(t_meta *meta, int w, int h, int color);
int			terminate_program(void *param);
void		draw_2_dot(t_meta *meta, int w, int h, int color);
void		draw_block_v5(t_meta *meta, int w, int h, int color);
void		draw(int x, int y, int size, int color, t_meta *meta);
void		init_drawing(t_meta *meta, int color1, int color2);
int			key_press(int key, void *param);
#endif