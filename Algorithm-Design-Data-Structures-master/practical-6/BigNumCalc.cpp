#include "BigNumCalc.h"

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

// assume all inputs and results and positive integers

list<int> BigNumCalc::buildBigNum(string numString) {
  list<int> result;
  for (int i = 0; i < numString.length(); i++) {
    result.push_back(numString[i] - '0');
  }
  return result;
}

list<int> BigNumCalc::add(list<int> num1, list<int> num2) {
  list<int> result;
  int carry = 0;
  while (!num1.empty() || !num2.empty()) {
    int digit1 = 0;
    if (!num1.empty()) {
      digit1 = num1.back();
      num1.pop_back();
    }
    int digit2 = 0;
    if (!num2.empty()) {
      digit2 = num2.back();
      num2.pop_back();
    }
    int sum = digit1 + digit2 + carry;
    result.push_front(sum % 10);
    carry = sum / 10;
  }
  if (carry) {
    result.push_front(carry);
  }
  return result;
}

list<int> BigNumCalc::sub(list<int> num1, list<int> num2) {
  list<int> result;
  int borrow = 0;
  while (!num1.empty() || !num2.empty()) {
    int digit1 = 0;
    if (!num1.empty()) {
      digit1 = num1.back();
      num1.pop_back();
    }
    int digit2 = 0;
    if (!num2.empty()) {
      digit2 = num2.back();
      num2.pop_back();
    }
    int diff = digit1 - digit2 - borrow;
    if (diff < 0) {
      diff += 10;
      borrow = 1;
    } else {
      borrow = 0;
    }
    result.push_front(diff);
  }
  return result;
}

list<int> BigNumCalc::mul(list<int> num1, list<int> num2) {
  list<int> result = buildBigNum("0");
  while (!num2.empty()) {
    int carry = 0;
    list<int> curr_result;
    list<int> num1_copy = num1;
    int digit2 = num2.front();
    num2.pop_front();
    while (!num1_copy.empty()) {
      int digit1 = num1_copy.back();
      num1_copy.pop_back();
      int prod = digit1 * digit2 + carry;
      curr_result.push_front(prod % 10);
      carry = prod / 10;
    }
    if (carry) {
      curr_result.push_front(carry);
    }
    for (int i = 0; i < num2.size(); i++) {
      curr_result.push_back(0);
    }
    result = add(result, curr_result);
  }
  return result;
} 