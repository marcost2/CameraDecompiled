
/* qcamera::QCamera3HeapMemory::~QCamera3HeapMemory() */

void __thiscall
qcamera::QCamera3HeapMemory::_QCamera3HeapMemory(QCamera3HeapMemory *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)QCamera3GrallocMemory::_QCamera3GrallocMemory
                             ((QCamera3GrallocMemory *)this,param_1);
  __ThumbV7PILongThunk__ZdlPv(pvVar1);
  return;
}

