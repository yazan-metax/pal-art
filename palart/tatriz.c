#include "tatriz.h"

void	draw_shape1(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, meta->center.y - h, 40, color, meta);
	draw((meta->center.x + 80) - w, meta->center.y - h, 40, color, meta);
	draw((meta->center.x + 40) - w, (meta->center.y - 40) - h, 40, color, meta);
	draw((meta->center.x + 40) - w, (meta->center.y + 40) - h, 40, color, meta);
}

void	draw_block_v1(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, meta->center.y - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 40) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 80) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 120) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 160) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 200) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 240) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 280) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 320) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 360) - h, 40, color, meta);
}

void	draw_block_v2(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, (meta->center.y + 80) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 120) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 160) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 200) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 240) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 280) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 320) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 360) - h, 40, color, meta);
}

void	draw_block_v3(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, (meta->center.y + 160) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 200) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 240) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 280) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 320) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 360) - h, 40, color, meta);
}

void	draw_block_v4(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, (meta->center.y + 240) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 280) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 320) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 360) - h, 40, color, meta);
}

void	draw_block_v5(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, (meta->center.y + 320) - h, 40, color, meta);
	draw(meta->center.x - w, (meta->center.y + 360) - h, 40, color, meta);
}

void	draw_2_dot(t_meta *meta, int w, int h, int color)
{
	draw(meta->center.x - w, (meta->center.y + 400) - h, 40, color, meta);
	draw((meta->center.x - w) + 80, (meta->center.y + 400) - h, 40, color,
			meta);
}

void	init_drawing(t_meta *meta, int color1, int color2)
{
	draw_shape1(meta, 40, 400, color1);
	draw_block_v1(meta, 40, 320, color1);
	draw_block_v2(meta, 80, 320, color1);
	draw_block_v1(meta, -40, 320, color1);
	draw_block_v2(meta, -80, 320, color1);
	draw_block_v3(meta, -120, 320, color1);
	draw_block_v3(meta, 120, 320, color1);
	draw_block_v4(meta, 160, 320, color1);
	draw_block_v4(meta, -160, 320, color1);
	draw_block_v5(meta, 200, 320, color1);
	draw_block_v5(meta, -200, 320, color1);
	draw_block_v4(meta, 0, 120, color2);
	draw_2_dot(meta, 40, 320, color2);
}

int	main(void)
{
	t_meta meta;

	meta.mlx = mlx_init();
	meta.win = mlx_new_window(meta.mlx, WIDTH, HIGHT, "tatriz");
	meta.center.x = WIDTH / 2;
	meta.center.y = HIGHT / 2;
	meta.mode = 0;
	mlx_key_hook(meta.win, key_press, &meta);
	init_drawing(&meta, RED, TURKUAZ);
	mlx_loop(meta.mlx);
	return (0);
}