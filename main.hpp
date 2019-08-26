#ifdef WINSTD
#define _WIN32_WINNT 0x0502
#endif

#include "share/include.hpp"
#include "share/types.hpp"
#include "mjai_manager.hpp"
#include "mjai_client.hpp"
#include "stats.hpp"
#include "pseudo_game.hpp"

#ifdef WINSTD
__declspec(dllimport) void set_tactics(const json11::Json& setup_match_json);
__declspec(dllimport) void set_tactics_one(const json11::Json& setup_match_json);
#else
void set_tactics(const json11::Json& setup_match_json);
void set_tactics_one(const json11::Json& setup_match_json);
#endif
