#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "generic_poll_server.h"


int64_t	dummy_emu_info(SOCKET socket, char **args, int ac);
int64_t	dummy_emu_status(SOCKET socket, char **args, int ac);
int64_t	dummy_emu_pause(SOCKET socket, char **args, int ac);
int64_t	dummy_emu_stop(SOCKET socket, char **args, int ac);
int64_t	dummy_emu_reset(SOCKET socket, char **args, int ac);
int64_t	dummy_emu_resume(SOCKET socket, char **args, int ac);
int64_t	dummy_emu_reload(SOCKET socket, char **args, int ac);
int64_t	dummy_load_game(SOCKET socket, char **args, int ac);
int64_t	dummy_game_info(SOCKET socket, char **args, int ac);
int64_t	dummy_cores_list(SOCKET socket, char **args, int ac);
int64_t	dummy_core_info(SOCKET socket, char **args, int ac);
int64_t	dummy_core_current_info(SOCKET socket, char **args, int ac);
int64_t	dummy_core_load(SOCKET socket, char **args, int ac);
int64_t	dummy_core_memories(SOCKET socket, char **args, int ac);
int64_t	dummy_core_memory_read(SOCKET socket, char **args, int ac);
int64_t	dummy_core_memory_write(SOCKET socket, char **args, int ac);
int64_t	dummy_np(SOCKET socket, char **args, int ac);
int64_t	dummy_load_state(SOCKET socket, char **args, int ac);
int64_t	dummy_save_state(SOCKET socket, char **args, int ac);
	
bool    write_to_memory(SOCKET socket, char* data, uint32_t size);
