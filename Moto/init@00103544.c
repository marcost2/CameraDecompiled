
/* qcamera::MotMemThrottle::init(unsigned int, unsigned int, bool, int, int) */

int __thiscall qcamera::MotMemThrottle::init(MotMemThrottle *this,EVP_PKEY_CTX *ctx)

{
  undefined4 in_r2;
  MotMemThrottle in_r3;
  int in_stack_00000000;
  int in_stack_00000004;
  
  this[0x18] = in_r3;
  *(EVP_PKEY_CTX **)(this + 0x10) = ctx;
  *(undefined4 *)(this + 0x14) = in_r2;
  *(int *)(this + 0x28) = in_stack_00000004;
  *(int *)(this + 0x20) = in_stack_00000000;
  *(int *)(this + 0x2c) = in_stack_00000004 >> 0x1f;
  *(int *)(this + 0x24) = in_stack_00000000 >> 0x1f;
  return (int)this;
}

