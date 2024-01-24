#include "tatriz.h"

void	draw_square(int x, int y, int size, int color, t_meta *meta)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			mlx_pixel_put(meta->mlx, meta->win, x + i, y + j, color);
		}
	}
}

void	draw_square_border(int x, int y, int size, int color, t_meta *meta)
{
	for (int i = 0; i < size; i++)
	{
		// draw the Top border
		mlx_pixel_put(meta->mlx, meta->win, x + i, y, color);
		// draw the Bottom border
		mlx_pixel_put(meta->mlx, meta->win, x + i, y + size, color);
	}
	for (int j = 0; j < size; j++)
	{
		// draw the  Left border
		mlx_pixel_put(meta->mlx, meta->win, x, y + j, color);
		//draw the Right border
		mlx_pixel_put(meta->mlx, meta->win, x + size, y + j, color);
	}
}

int	terminate_program(void *param)
{
	t_meta	*meta;

	meta = (t_meta *)param;
	mlx_destroy_window(meta->mlx, meta->win);
	exit(0);
}

int	key_press(int key, void *param)
{
	t_meta	*meta;

	meta = (t_meta *)param;
	printf("Key pressed: %d\n", key);
	if (key == KEY_ESCAPE)
	{
		terminate_program(meta);
	}
	if (key == KEY_1)
	{
		meta->mode = !meta->mode;
		mlx_clear_window(meta->mlx, meta->win);
		init_drawing(meta, WHITE, BLUE);
	}
	if (key == KEY_2)
	{
		meta->mode = !meta->mode;
		mlx_clear_window(meta->mlx, meta->win);
		init_drawing(meta, RED, TURKUAZ);
	}
	if (key == KEY_3)
	{
		meta->mode = !meta->mode;
		init_drawing(meta, CARBON, CARBON);
	}
	return (0);
}

void	draw(int x, int y, int size, int color, t_meta *meta)
{
	if (meta->mode == 0)
	{
		draw_square(x, y, size, color, meta);
	}
	else
	{
		draw_square_border(x, y, size, color, meta);
	}
}
// this is judt for the purpose of trying
void	draw_square_in_square(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, meta->center.y - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 40) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 80) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 120) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 160) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 200) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 240) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 280) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 320) - h, 30, color, meta);
	draw(meta->center.x - w, (meta->center.y + 360) - h, 30, color, meta);
}
