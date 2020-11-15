#pragma once

#include <string>
#include <stdexcept>

enum class States {
  default = 0,
  gotColon = 1,
  gotColonDash = 2,
  gotColonDashLeft = 3,
  gotColonDashRight = 4
};

std::string RemoveSmiles(const std::string& orig);
