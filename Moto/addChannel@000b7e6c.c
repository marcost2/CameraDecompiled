
/* qcamera::QCamera2HardwareInterface::addChannel(qcamera::qcamera_ch_type_enum_t) */

undefined4 __thiscall
qcamera::QCamera2HardwareInterface::addChannel
          (QCamera2HardwareInterface *this,qcamera_ch_type_enum_t param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = addZSLChannel(this);
    return uVar1;
  case 1:
    uVar1 = addCaptureChannel(this);
    return uVar1;
  case 2:
    uVar1 = addPreviewChannel(this);
    return uVar1;
  case 3:
    uVar1 = addVideoChannel();
    return uVar1;
  case 4:
    uVar1 = addSnapshotChannel(this);
    return uVar1;
  case 5:
    uVar1 = addRawChannel(this);
    return uVar1;
  case 6:
    uVar1 = (*(code *)PTR_addMetaDataChannel_00119d14)();
    return uVar1;
  case 7:
    uVar1 = (*(code *)PTR_addAnalysisChannel_00119d18)();
    return uVar1;
  case 8:
    uVar1 = addCallbackChannel(this);
    return uVar1;
  default:
    return 0x80000000;
  }
}

