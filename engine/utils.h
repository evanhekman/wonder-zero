#pragma once

#include <functional>

class GameState; // forward declaration

using PlayerEffect = std::function<void(GameState*, int)>;
