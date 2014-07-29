// Copyright © 2014 Anh Dinh. All Rights Reserved.
// from piccolo

//  register codes (REGISTER_INITIALIZER) that can be run by calling the
//	global function: RunInitializer

#ifndef INCLUDE_CORE_STATIC_INITIALIZERS_H_
#define INCLUDE_CORE_STATIC_INITIALIZERS_H_

#include <string>
#include <map>

using namespace std;

namespace lapis {

// There exists a separate registry mapping for each value type.
template <class T>
class Registry {
 public:
  typedef map<string, T *> Map;

  static void put(const string &k, T *t) {
    get_map()[k] = t;
  }
  static T *get(const string &k) {
    return get_map()[k];
  }
  static Map &get_map() {
    if (!m_) {
      m_ = new Map;
    }
    return *m_;
  }
 private:
  static Map *m_;
};

template <class T> map<string, T *> *Registry<T>::m_;

template <class T>
struct RegistryHelper {
  RegistryHelper(const string &k, T *t) {
    Registry<T>::put(k, t);
  }
};

struct CodeHelper {
  virtual void Run() = 0;
};

class InitHelper : public CodeHelper {};

void RunInitializers();

}  // namespace lapis

#define REGISTER(type, k, v) static lapis::RegistryHelper<type> rhelper_ ## k (#k, v);
#define REGISTER_CODE(type, k, code)\
struct k ## CodeHelper : public type {\
  void Run() { code; }\
};\
REGISTER(type, k, new k ## CodeHelper);

#define REGISTER_INITIALIZER(k, code) REGISTER_CODE(lapis::InitHelper, k, code);

#endif  // INCLUDE_CORE_STATIC-INITIALIZERS_H_
