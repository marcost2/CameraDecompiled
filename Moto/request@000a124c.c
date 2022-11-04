
/* qcamera::QCamera3RawDumpChannel::request(native_handle const**, unsigned int, int&) */

undefined4
qcamera::QCamera3RawDumpChannel::request(native_handle **param_1,uint param_2,int *param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    return 0;
  }
  uVar1 = QCamera3Channel::start((QCamera3Channel *)param_1);
  return uVar1;
}

