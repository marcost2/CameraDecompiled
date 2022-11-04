
/* qcamera::QCamera3HardwareInterface::getReprocessibleOutputStreamId(unsigned int&) */

undefined4 __thiscall
qcamera::QCamera3HardwareInterface::getReprocessibleOutputStreamId
          (QCamera3HardwareInterface *this,uint *param_1)

{
  int iVar1;
  QCamera3Stream *this_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int **ppiVar8;
  bool bVar9;
  
  iVar1 = *(int *)(this + 0x1cc);
  if ((iVar1 < 1) || (*(int *)(this + 0x1d0) < 1)) {
    if (*(int *)(*(int *)(DAT_00090c68 + 0x90c24) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_00090c70 + 0x90c3c,0x18d4,DAT_00090c6c + 0x90c34);
    }
  }
  else {
    ppiVar8 = (int **)(*(int ***)(this + 0x3fc))[2];
    if (ppiVar8 != *(int ***)(this + 0x3fc)) {
      iVar6 = *(int *)(DAT_00090c58 + 0x90b9a);
      iVar3 = DAT_00090c5c + 0x90ba0;
      iVar4 = DAT_00090c60 + 0x90ba6;
      iVar5 = DAT_00090c64 + 0x90bac;
      while( true ) {
        iVar7 = **ppiVar8;
        if (((*(int *)(iVar7 + 4) == iVar1) && (*(int *)(iVar7 + 8) == *(int *)(this + 0x1d0))) &&
           (*(int *)(iVar7 + 0xc) == *(int *)(this + 0x1d4))) {
          if ((*(int *)(iVar6 + 0x2c) != 0) &&
             (mm_camera_debug_log(1,4,iVar4,0x18c8,iVar3,*ppiVar8), *(int *)(iVar6 + 0x2c) != 0)) {
            mm_camera_debug_log(1,4,iVar4,0x18ca,iVar5,*(undefined4 *)(iVar7 + 0x10),
                                *(undefined4 *)(this + 0x1d8));
          }
          this_00 = *(QCamera3Stream **)(iVar7 + 0x18);
          bVar9 = this_00 != (QCamera3Stream *)0x0;
          if (bVar9) {
            this_00 = *(QCamera3Stream **)(this_00 + 0x24);
          }
          if (bVar9 && this_00 != (QCamera3Stream *)0x0) {
            uVar2 = QCamera3Stream::getMyServerID(this_00);
            *param_1 = uVar2;
            return 0;
          }
        }
        ppiVar8 = (int **)ppiVar8[2];
        if (ppiVar8 == *(int ***)(this + 0x3fc)) break;
        iVar1 = *(int *)(this + 0x1cc);
      }
    }
  }
  return 0xfffffffe;
}

