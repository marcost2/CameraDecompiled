
/* qcamera::QCamera2HardwareInterface::getAFROIMakerNotesData(qcamera::MotMakernote&) */

int __thiscall
qcamera::QCamera2HardwareInterface::getAFROIMakerNotesData
          (QCamera2HardwareInterface *this,MotMakernote *param_1)

{
  int iVar1;
  
  iVar1 = MotMakernote::addTag(param_1,0x7000,1,1,this + 0x1f64);
  if (iVar1 == 0) {
    iVar1 = MotMakernote::addTag(param_1,0x7001,8,1,this + 0x1f68);
    if (iVar1 == 0) {
      iVar1 = MotMakernote::addTag(param_1,0x7002,8,1,this + 0x1f6c);
      if (iVar1 == 0) {
        iVar1 = MotMakernote::addTag(param_1,0x7003,3,1,this + 0x1f70);
        if (iVar1 == 0) {
          iVar1 = MotMakernote::addTag(param_1,0x7004,3,1,this + 0x1f74);
          if (iVar1 != 0) {
            iVar1 = -1;
          }
          return iVar1;
        }
      }
    }
  }
  return -1;
}

