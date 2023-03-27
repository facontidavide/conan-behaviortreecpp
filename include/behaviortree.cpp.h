#pragma once


#ifdef _WIN32
  #define BEHAVIORTREE_CPP_EXPORT __declspec(dllexport)
#else
  #define BEHAVIORTREE_CPP_EXPORT
#endif

BEHAVIORTREE_CPP_EXPORT void behaviortree_cpp();
