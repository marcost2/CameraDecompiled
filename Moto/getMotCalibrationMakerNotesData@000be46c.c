
/* qcamera::QCamera2HardwareInterface::getMotCalibrationMakerNotesData(qcamera::MotMakernote&) */

void __thiscall
qcamera::QCamera2HardwareInterface::getMotCalibrationMakerNotesData
          (QCamera2HardwareInterface *this,MotMakernote *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1c;
  undefined local_1a;
  int local_18;
  
  piVar3 = *(int **)(DAT_000be7bc + 0xbe47c);
  local_18 = *piVar3;
  iVar1 = QCameraParametersIntf::getCalibrationInfo((QCameraParametersIntf *)(this + 0x4ac));
  local_1a = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  if (*(char *)(iVar1 + 0x4be) == '\0') {
    iVar2 = DAT_000be7c4 + 0xbe4b4;
  }
  else {
    iVar2 = DAT_000be7c0 + 0xbe4a8;
  }
  __strncpy_chk2(&local_1c,iVar2,3,3,3);
  FUN_000be9c0(&local_24,6,DAT_000be7c8 + 0xbe4ca,*(undefined4 *)(iVar1 + 0x410));
  iVar2 = MotMakernote::addTag(param_1,0x6641,1,1,(void *)(iVar1 + 0x450));
  if ((((((iVar2 == 0) &&
         (iVar2 = MotMakernote::addTag(param_1,0x55e7,3,1,(void *)(iVar1 + 0x44c)), iVar2 == 0)) &&
        (iVar2 = MotMakernote::addTag(param_1,0x55e8,3,1,(void *)(iVar1 + 0x44e)), iVar2 == 0)) &&
       ((iVar2 = MotMakernote::addTag(param_1,0x55e5,3,1,(void *)(iVar1 + 0x448)), iVar2 == 0 &&
        (iVar2 = MotMakernote::addTag(param_1,0x55e6,3,1,(void *)(iVar1 + 0x44a)), iVar2 == 0)))) &&
      (iVar2 = MotMakernote::addTag(param_1,0x6600,1,1,(void *)(iVar1 + 0x6a)), iVar2 == 0)) &&
     (((iVar2 = MotMakernote::addTag(param_1,0x6601,1,1,(void *)(iVar1 + 0x40f)), iVar2 == 0 &&
       (iVar2 = MotMakernote::addTag(param_1,0x6602,1,1,(void *)(iVar1 + 0x2c)), iVar2 == 0)) &&
      ((iVar2 = MotMakernote::addTag(param_1,0x6640,1,1,(void *)(iVar1 + 0x20)), iVar2 == 0 &&
       (iVar2 = MotMakernote::addTag(param_1,0x6604,3,1,(void *)(iVar1 + 0x44)), iVar2 == 0)))))) {
    iVar2 = __strlen_chk(&local_24,6);
    iVar2 = MotMakernote::addTag(param_1,0x6606,2,iVar2 + 1,&local_24);
    if (((((iVar2 == 0) &&
          (iVar2 = MotMakernote::addTag(param_1,0x6612,3,1,(void *)(iVar1 + 0x416)), iVar2 == 0)) &&
         (iVar2 = MotMakernote::addTag(param_1,0x6613,3,1,(void *)(iVar1 + 0x418)), iVar2 == 0)) &&
        ((((iVar2 = MotMakernote::addTag(param_1,0x6614,3,1,(void *)(iVar1 + 0x41a)), iVar2 == 0 &&
           (iVar2 = MotMakernote::addTag(param_1,0x6615,3,1,(void *)(iVar1 + 0x41c)), iVar2 == 0))
          && ((iVar2 = MotMakernote::addTag(param_1,0x6642,3,1,(void *)(iVar1 + 0x41e)), iVar2 == 0
              && ((((iVar2 = MotMakernote::addTag(param_1,0x6643,3,1,(void *)(iVar1 + 0x420)),
                    iVar2 == 0 &&
                    (iVar2 = MotMakernote::addTag(param_1,0x6644,3,1,(void *)(iVar1 + 0x422)),
                    iVar2 == 0)) &&
                   ((iVar2 = MotMakernote::addTag(param_1,0x6645,3,1,(void *)(iVar1 + 0x424)),
                    iVar2 == 0 &&
                    (((iVar2 = MotMakernote::addTag(param_1,0x664e,1,1,(void *)(iVar1 + 0x42c)),
                      iVar2 == 0 &&
                      (iVar2 = MotMakernote::addTag(param_1,0x664f,3,1,(void *)(iVar1 + 0x42e)),
                      iVar2 == 0)) &&
                     (iVar2 = MotMakernote::addTag(param_1,0x6650,3,1,(void *)(iVar1 + 0x430)),
                     iVar2 == 0)))))) &&
                  ((iVar2 = MotMakernote::addTag(param_1,0x6651,3,1,(void *)(iVar1 + 0x432)),
                   iVar2 == 0 &&
                   (iVar2 = MotMakernote::addTag(param_1,0x6652,3,1,(void *)(iVar1 + 0x434)),
                   iVar2 == 0)))))))) &&
         (iVar2 = MotMakernote::addTag(param_1,0x6654,3,1,(void *)(iVar1 + 0x426)), iVar2 == 0))))
       && (((iVar2 = MotMakernote::addTag(param_1,0x6655,3,1,(void *)(iVar1 + 0x428)), iVar2 == 0 &&
            (iVar2 = MotMakernote::addTag(param_1,0x6656,3,1,(void *)(iVar1 + 0x42a)), iVar2 == 0))
           && (iVar1 = MotMakernote::addTag(param_1,0x665d,1,1,(void *)(iVar1 + 0x414)), iVar1 == 0)
           ))) {
      iVar1 = __strlen_chk(&local_1c,3);
      iVar1 = MotMakernote::addTag(param_1,0x6653,2,iVar1 + 1,&local_1c);
      if (iVar1 != 0) {
        iVar1 = -1;
      }
      goto LAB_000be788;
    }
  }
  iVar1 = -1;
LAB_000be788:
  if (*piVar3 != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}

