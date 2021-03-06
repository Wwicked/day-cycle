#if defined _day_cycle_included
	#endinput
#endif
#define _day_cycle_included

/*
	Sets light level.

	@param light Valid light-symbol.

	@noreturn
*/
native set_light(light[]);

/*
	Gets current light level symbol.
	
	@param output Array to get current light symbol.

	@noreturn
*/
native get_light(output[]);

/*
	Returns index of given light.

	@param light Light symbol.

	@return Index of given light or -1 if light symbol is invalid.
*/
native get_light_index(const light[]);

/*
	Gets all available light levels.

	@param output Array to get the light symbols.

	@noreturn
*/
native get_light_levels(output[]);

/*
	Gets amount of light levels.

	@return Amount of light levels
*/
native get_light_levels_count();

/*
	Returns if it's night time.

	@return True if it's night, false otherwise.
*/
native bool:is_night();

/*
	Executes every time the lights change.

	@param new_light Light that triggered the forward.
*/
forward light_changed(new_light[]);

/*
	Executes when day part is changed to night or day.

	@param night Holds new day-part. True = night, false = day.
*/
forward day_part_changed(bool:night);