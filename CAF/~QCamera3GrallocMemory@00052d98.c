
/* qcamera::QCamera3GrallocMemory::~QCamera3GrallocMemory() */

QCamera3GrallocMemory * __thiscall
qcamera::QCamera3GrallocMemory::_QCamera3GrallocMemory(QCamera3GrallocMemory *this,uint param_1)

{
  *(int *)this = *(int *)(DAT_00052db4 + 0x52da2) + 8;
  android::Mutex::_Mutex((Mutex *)(this + 0x608));
  return this;
}

