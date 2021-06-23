//// PASTE THIS IN YOUR ADDRESSES HEADER FILE \\\\

using rgetmetatable = void* (__fastcall*)(DWORD rL, int idx); // UPDATE WHEN RBX UPDATE.
rgetmetatable r_lua_getmetatable = (rgetmetatable)(unprotect(ASLR(0x015E60D0))); // UPDATE WHEN RBX UPDATE.

//// PASTE THIS IN YOUR MAIN CPP FILE \\\\

static int getrawmetatable(DWORD RL) { // WONT WORK WITH AXON LOL
	r_lua_getmetatable(LS, -1);
	return 1;
}

//// PASTE THIS IF U USING IMPERIOUS \\\\

r_luaL_register(RL, "getrawmetatable", getrawmetatable); // dont change.
/// credit speedsterkawaii **me**, enjoy getrawmetatable.
