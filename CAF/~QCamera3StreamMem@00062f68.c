
/* qcamera::QCamera3StreamMem::~QCamera3StreamMem() */

QCamera3StreamMem * __thiscall
qcamera::QCamera3StreamMem::_QCamera3StreamMem(QCamera3StreamMem *this,uint param_1,bool param_2)

{
  uint extraout_r1;
  uint extraout_r1_00;
  
  *(int *)this = *(int *)(DAT_00062f9c + 0x62f72) + 8;
  clear(this);
  android::Mutex::_Mutex((Mutex *)(this + 0xe28));
  QCamera3GrallocMemory::_QCamera3GrallocMemory((QCamera3GrallocMemory *)(this + 0x614),extraout_r1)
  ;
  QCamera3GrallocMemory::_QCamera3GrallocMemory((QCamera3GrallocMemory *)(this + 4),extraout_r1_00);
  return this;
}

