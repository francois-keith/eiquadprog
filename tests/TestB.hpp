#ifndef TEST_EIQUADPROG_CLASS_B_
#define TEST_EIQUADPROG_CLASS_B_

#include "TestA.hpp"

namespace eiquadprog {
namespace tests {

#if defined _WIN32
#  define TESTAB_DLLAPI __declspec(dllexport)
#else
#  define TESTAB_DLLAPI
#endif

class TESTAB_DLLAPI B {
 protected:
  Eigen::VectorXd solution_;

 public:
  A A_;

  B();
  bool do_something();
};
}  // namespace tests
}  // namespace eiquadprog
#endif /* TEST_EIQUADPROG_CLASS_B_ */
