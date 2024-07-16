draw_self()
if (flash > 0)
{
	flash--;
	shader_set(ShFlash);
	draw_self();
	shader_reset();
}
