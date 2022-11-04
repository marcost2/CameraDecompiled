
/* android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::List() */

List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_ * __thiscall
android::List<qcamera::QCamera3HardwareInterface::PendingFrameDropInfo>::List
          (List_qcamera__QCamera3HardwareInterface__PendingFrameDropInfo_ *this)

{
  *(int *)this = *(int *)(DAT_0003ac1c + 0x3ac0e) + 8;
  List<qcamera::ReprocessBuffer>::prep((List_qcamera__ReprocessBuffer_ *)this);
  return this;
}

