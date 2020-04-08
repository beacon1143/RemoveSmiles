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
        if (ch != ':') {
          retStr.push_back(':');
          retStr.push_back(ch);
          state = States::default;
        }
        else {
          retStr.push_back(':');
        }
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
        retStr.push_back(':');
        retStr.push_back('-');

        if (ch != ':') {
          retStr.push_back(ch);
          state = States::default;
        }
        else {
          state = States::gotColon;
        }
      }
      break;

    case States::gotColonDashLeft:
      if (ch != '(') {
        if (ch != ':') {
          state = States::default;
          retStr.push_back(ch);
        }
        else {
          state = States::gotColon;
        }
      }
      break;

    case States::gotColonDashRight:
      if (ch != ')') {
        if (ch != ':') {
          state = States::default;
          retStr.push_back(ch);
        }
        else {
          state = States::gotColon;
        }
      }
      break;

    default:
      throw std::runtime_error("Error! Wrong state!\n");
    } // switch
  } // for

  if (state == States::gotColon) {
    retStr.push_back(':');
  }
  else if (state == States::gotColonDash) {
    retStr.push_back(':');
    retStr.push_back('-');
  }

  retStr.shrink_to_fit();
  return retStr;
}
