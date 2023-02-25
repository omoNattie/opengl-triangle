#include "from_hex.h"

std::vector<float> from_hex(float r, float g, float b) {
    return std::vector<float> {r/255.0f, g/255.0f, b/255.0f};
}