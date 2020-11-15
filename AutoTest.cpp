#include "AutoTest.hpp"

bool AutoTest(const bool isDevMode) {
  bool retValue = true;

  retValue &= TestEmpty(isDevMode);
  retValue &= TestOneSymb(isDevMode);
  retValue &= TestTwoSymb(isDevMode);
  retValue &= TestSevSymb(isDevMode);

  retValue &= TestColon(isDevMode);
  retValue &= TestColonLeft(isDevMode);
  retValue &= TestColonRight(isDevMode);
  retValue &= TestColonCenter(isDevMode);

  retValue &= TestColonDash(isDevMode);
  retValue &= TestColonDashLeft(isDevMode);
  retValue &= TestColonDashRight(isDevMode);
  retValue &= TestColonDashCenter(isDevMode);

  retValue &= TestHappyOne(isDevMode);
  retValue &= TestHappyOneLeft(isDevMode);
  retValue &= TestHappyOneRight(isDevMode);
  retValue &= TestHappyOneCenter(isDevMode);
  retValue &= TestHappyOneBracket(isDevMode);

  retValue &= TestSadOne(isDevMode);
  retValue &= TestSadOneLeft(isDevMode);
  retValue &= TestSadOneRight(isDevMode);
  retValue &= TestSadOneCenter(isDevMode);
  retValue &= TestSadOneBracket(isDevMode);

  retValue &= TestHappyThree(isDevMode);
  retValue &= TestHappyThreeLeft(isDevMode);
  retValue &= TestHappyThreeRight(isDevMode);
  retValue &= TestHappyThreeCenter(isDevMode);
  retValue &= TestHappyThreeBrackets(isDevMode);

  retValue &= TestSadThree(isDevMode);
  retValue &= TestSadThreeLeft(isDevMode);
  retValue &= TestSadThreeRight(isDevMode);
  retValue &= TestSadThreeCenter(isDevMode);
  retValue &= TestSadThreeBrackets(isDevMode);

  retValue &= TestHappyHappy(isDevMode);
  retValue &= TestHappySad(isDevMode);
  retValue &= TestSadHappy(isDevMode);
  retValue &= TestSadSad(isDevMode);

  retValue &= TestColonHappy(isDevMode);
  retValue &= TestColonDashHappy(isDevMode);
  retValue &= TestColonSad(isDevMode);
  retValue &= TestColonDashSad(isDevMode);

  if (isDevMode) {
    std::cout << '\n';
  }
  return retValue;
}


bool TestEmpty(const bool needOut) {
  if (RemoveSmiles("") != "") {
    if (needOut) {
      std::cout << "TestEmpty failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestEmpty passed...\n";
  }
  return true;
}

bool TestOneSymb(const bool needOut) {
  if (RemoveSmiles("a") != "a") {
    if (needOut) {
      std::cout << "TestOneSymb failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestOneSymb passed...\n";
  }
  return true;
}

bool TestTwoSymb(bool needOut) {
  if (RemoveSmiles("ab") != "ab") {
    if (needOut) {
      std::cout << "TestTwoSymb failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestTwoSymb passed...\n";
  }
  return true;
}

bool TestSevSymb(bool needOut) {
  if (RemoveSmiles("abracadabra") != "abracadabra") {
    if (needOut) {
      std::cout << "TestSevSymb failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSevSymb passed...\n";
  }
  return true;
}


bool TestColon(bool needOut) {
  if (RemoveSmiles(":") != ":") {
    if (needOut) {
      std::cout << "TestColon failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColon passed...\n";
  }
  return true;
}

bool TestColonLeft(bool needOut) {
  if (RemoveSmiles(":a") != ":a") {
    if (needOut) {
      std::cout << "TestColonLeft failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonLeft passed...\n";
  }
  return true;
}

bool TestColonRight(bool needOut) {
  if (RemoveSmiles("a:") != "a:") {
    if (needOut) {
      std::cout << "TestColonRight failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonRight passed...\n";
  }
  return true;
}

bool TestColonCenter(bool needOut) {
  if (RemoveSmiles("a:b") != "a:b") {
    if (needOut) {
      std::cout << "TestColonCenter failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonCenter passed...\n";
  }
  return true;
}


bool TestColonDash(bool needOut) {
  if (RemoveSmiles(":-") != ":-") {
    if (needOut) {
      std::cout << "TestColonDash failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonDash passed...\n";
  }
  return true;
}

bool TestColonDashLeft(bool needOut) {
  if (RemoveSmiles(":-a") != ":-a") {
    if (needOut) {
      std::cout << "TestColonDashLeft failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonDashLeft passed...\n";
  }
  return true;
}

bool TestColonDashRight(bool needOut) {
  if (RemoveSmiles("a:-") != "a:-") {
    if (needOut) {
      std::cout << "TestColonDashRight failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonDashRight passed...\n";
  }
  return true;
}

bool TestColonDashCenter(bool needOut) {
  if (RemoveSmiles("a:-b") != "a:-b") {
    if (needOut) {
      std::cout << "TestColonDashCenter failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonDashCenter passed...\n";
  }
  return true;
}


bool TestHappyOne(bool needOut) {
  if (RemoveSmiles(":-)") != "") {
    if (needOut) {
      std::cout << "TestHappyOne failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyOne passed...\n";
  }
  return true;
}

bool TestHappyOneLeft(bool needOut) {
  if (RemoveSmiles(":-)a") != "a") {
    if (needOut) {
      std::cout << "TestHappyOneLeft failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyOneLeft passed...\n";
  }
  return true;
}

bool TestHappyOneRight(bool needOut) {
  if (RemoveSmiles("a:-)") != "a") {
    if (needOut) {
      std::cout << "TestHappyOneRight failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyOneRight passed...\n";
  }
  return true;
}

bool TestHappyOneCenter(bool needOut) {
  if (RemoveSmiles("a:-)b") != "ab") {
    if (needOut) {
      std::cout << "TestHappyOneCenter failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyOneCenter passed...\n";
  }
  return true;
}

bool TestHappyOneBracket(bool needOut) {
  if (RemoveSmiles(":-)(") != "(") {
    if (needOut) {
      std::cout << "TestHappyOneBracket failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyOneBracket passed...\n";
  }
  return true;
}


bool TestSadOne(bool needOut) {
  if (RemoveSmiles(":-(") != "") {
    if (needOut) {
      std::cout << "TestSadOne failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadOne passed...\n";
  }
  return true;
}

bool TestSadOneLeft(bool needOut) {
  if (RemoveSmiles(":-(a") != "a") {
    if (needOut) {
      std::cout << "TestSadOneLeft failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadOneLeft passed...\n";
  }
  return true;
}

bool TestSadOneRight(bool needOut) {
  if (RemoveSmiles("a:-(") != "a") {
    if (needOut) {
      std::cout << "TestSadOneRight failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadOneRight passed...\n";
  }
  return true;
}

bool TestSadOneCenter(bool needOut) {
  if (RemoveSmiles("a:-(b") != "ab") {
    if (needOut) {
      std::cout << "TestSadOneCenter failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadOneCenter passed...\n";
  }
  return true;
}

bool TestSadOneBracket(bool needOut) {
  if (RemoveSmiles(":-()") != ")") {
    if (needOut) {
      std::cout << "TestSadOneBracket failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadOneBracket passed...\n";
  }
  return true;
}


bool TestHappyThree(bool needOut) {
  if (RemoveSmiles(":-)))") != "") {
    if (needOut) {
      std::cout << "TestHappyThree failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyThree passed...\n";
  }
  return true;
}

bool TestHappyThreeLeft(bool needOut) {
  if (RemoveSmiles(":-)))a") != "a") {
    if (needOut) {
      std::cout << "TestHappyThreeLeft failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyThreeLeft passed...\n";
  }
  return true;
}

bool TestHappyThreeRight(bool needOut) {
  if (RemoveSmiles("a:-)))") != "a") {
    if (needOut) {
      std::cout << "TestHappyThreeRight failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyThreeRight passed...\n";
  }
  return true;
}

bool TestHappyThreeCenter(bool needOut) {
  if (RemoveSmiles("a:-)))b") != "ab") {
    if (needOut) {
      std::cout << "TestHappyThreeCenter failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyThreeCenter passed...\n";
  }
  return true;
}

bool TestHappyThreeBrackets(bool needOut) {
  if (RemoveSmiles(":-)))(((") != "(((") {
    if (needOut) {
      std::cout << "TestHappyThreeBrackets failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyThreeBrackets passed...\n";
  }
  return true;
}


bool TestSadThree(bool needOut) {
  if (RemoveSmiles(":-(((") != "") {
    if (needOut) {
      std::cout << "TestSadThree failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadThree passed...\n";
  }
  return true;
}

bool TestSadThreeLeft(bool needOut) {
  if (RemoveSmiles(":-(((a") != "a") {
    if (needOut) {
      std::cout << "TestSadThreeLeft failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadThreeLeft passed...\n";
  }
  return true;
}

bool TestSadThreeRight(bool needOut) {
  if (RemoveSmiles("a:-(((") != "a") {
    if (needOut) {
      std::cout << "TestSadThreeRight failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadThreeRight passed...\n";
  }
  return true;
}

bool TestSadThreeCenter(bool needOut) {
  if (RemoveSmiles("a:-(((b") != "ab") {
    if (needOut) {
      std::cout << "TestSadThreeCenter failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadThreeCenter passed...\n";
  }
  return true;
}

bool TestSadThreeBrackets(bool needOut) {
  if (RemoveSmiles(":-((()))") != ")))") {
    if (needOut) {
      std::cout << "TestSadThreeBrackets failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadThreeBrackets passed...\n";
  }
  return true;
}


bool TestHappyHappy(bool needOut) {
  if (RemoveSmiles(":-)):-))") != "") {
    if (needOut) {
      std::cout << "TestHappyHappy failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappyHappy passed...\n";
  }
  return true;
}

bool TestHappySad(bool needOut) {
  if (RemoveSmiles(":-)):-((") != "") {
    if (needOut) {
      std::cout << "TestHappySad failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestHappySad passed...\n";
  }
  return true;
}

bool TestSadHappy(bool needOut) {
  if (RemoveSmiles(":-((:-))") != "") {
    if (needOut) {
      std::cout << "TestSadHappy failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadHappy passed...\n";
  }
  return true;
}

bool TestSadSad(bool needOut) {
  if (RemoveSmiles(":-((:-((") != "") {
    if (needOut) {
      std::cout << "TestSadSad failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestSadSad passed...\n";
  }
  return true;
}


bool TestColonHappy(bool needOut) {
  if (RemoveSmiles("::-))))") != ":") {
    if (needOut) {
      std::cout << "TestColonHappy failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonHappy passed...\n";
  }
  return true;
}

bool TestColonDashHappy(bool needOut) {
  if (RemoveSmiles(":-:-))))") != ":-") {
    if (needOut) {
      std::cout << "TestColonDashHappy failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonDashHappy passed...\n";
  }
  return true;
}

bool TestColonSad(bool needOut) {
  if (RemoveSmiles("::-(((") != ":") {
    if (needOut) {
      std::cout << "TestColonSad failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonSad passed...\n";
  }
  return true;
}

bool TestColonDashSad(bool needOut) {
  if (RemoveSmiles(":-:-(((") != ":-") {
    if (needOut) {
      std::cout << "TestColonDashSad failed!!!!!!!!!!\n";
    }
    return false;
  }
  if (needOut) {
    std::cout << "TestColonDashSad passed...\n";
  }
  return true;
}