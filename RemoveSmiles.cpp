#include "RemoveSmiles.hpp"

std::string RemoveSmiles(const std::string& orig) {
  States state = States::default;
  std::string retStr;
  retStr.reserve(orig.size());

  for (const char ch : orig) {
    switch (state) {
    case States::default:
      if (ch == ':') {
        state = States::gotColon;
      }
      else {
        retStr.push_back(ch);
      }
      break;

    case States::gotColon:
      if (ch == '-') {
        state = States::gotColonDash;
      }
      else {
        state = States::default;
        retStr.push_back(':');
        retStr.push_back(ch);
      }
      break;

    case States::gotColonDash:
      if (ch == '(') {
        state = States::gotColonDashLeft;
      }
      else if (ch == ')') {
        state = States::gotColonDashRight;
      }
      else {
        state = States::default;
        retStr.push_back(':');
        retStr.push_back('-');
        retStr.push_back(ch);
      }
      break;

    case States::gotColonDashLeft:
      if (ch != '(') {
        state = States::default;
        retStr.push_back(ch);
      }
      break;

    case States::gotColonDashRight:
      if (ch != ')') {
        state = States::default;
        retStr.push_back(ch);
      }
      break;

    default:
      throw std::runtime_error("Error! Wrong state!\n");
    } // switch
  } // for

  retStr.shrink_to_fit();
  return retStr;
}
