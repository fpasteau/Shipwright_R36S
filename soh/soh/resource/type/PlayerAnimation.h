#pragma once

#include <vector>
#include <string>
#include "Resource.h"

namespace SOH {
class PlayerAnimation : public LUS::Resource<int16_t> {
  public:
    using Resource::Resource;

    PlayerAnimation() : Resource(std::shared_ptr<LUS::ResourceInitData>()) {}

    int16_t* GetPointer();
    size_t GetPointerSize();

    std::vector<int16_t> limbRotData;
};
} // namespace SOH