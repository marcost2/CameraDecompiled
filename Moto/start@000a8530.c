
/* qcamera::QCamera3PostProcessor::start(qcamera::reprocess_config_t const&) */

int __thiscall
qcamera::QCamera3PostProcessor::start(QCamera3PostProcessor *this,reprocess_config_t *param_1)

{
  uint uVar1;
  int iVar2;
  QCamera3PostProcessor QVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  QCamera3HardwareInterface *this_00;
  reprocess_config_t arStack488 [444];
  int local_2c;
  int local_28;
  
  piVar6 = *(int **)(DAT_000a86ec + 0xa853e);
  local_28 = *piVar6;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    this_00 = *(QCamera3HardwareInterface **)(*(int *)(this + 4) + 4);
    uVar1 = (uint)(char)this[0x470];
    if (0 < (int)uVar1) {
      iVar8 = 0;
      do {
        piVar4 = *(int **)(this + iVar8 * 4 + 0x474);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x10))(piVar4);
          (**(code **)(*piVar4 + 4))(piVar4);
          *(undefined4 *)(this + iVar8 * 4 + 0x474) = 0;
          uVar1 = (uint)(byte)this[0x470];
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (char)uVar1);
    }
    this[0x470] = (QCamera3PostProcessor)0x0;
    QVar3 = *(QCamera3PostProcessor *)(this_00 + 0x118016);
    this[0x470] = QVar3;
    iVar8 = *(int *)(DAT_000a86f0 + 0xa85aa);
    if (*(int *)(iVar8 + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000a86f8 + 0xa85c8,0x10e,DAT_000a86f4 + 0xa85bc,(int)(char)QVar3);
      QVar3 = this[0x470];
    }
    __aeabi_memcpy8(arStack488,param_1,0x1c0);
    if ('\0' < (char)QVar3) {
      iVar9 = 0;
      iVar7 = DAT_000a86fc + 0xa85fa;
      iVar5 = DAT_000a8700 + 0xa85fc;
      do {
        if (*(int *)(iVar8 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,iVar5,0x112,iVar7,local_2c,*(undefined4 *)(this + 4));
        }
        iVar2 = QCamera3HardwareInterface::addOfflineReprocChannel
                          (this_00,arStack488,*(QCamera3ProcessingChannel **)(this + 4),
                           (int)(char)iVar9);
        *(int *)(this + iVar9 * 4 + 0x474) = iVar2;
        if (iVar2 == 0) {
          if (*(int *)(iVar8 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a8708 + 0xa8698,0x115,DAT_000a8704 + 0xa868e,iVar9);
          }
          iVar5 = -0x80000000;
          goto LAB_000a86d6;
        }
        iVar9 = iVar9 + 1;
        QVar3 = this[0x470];
        local_2c = iVar2;
      } while (iVar9 < (char)QVar3);
    }
    if ((*(int *)(param_1 + 0x1a8) == 1) && ('\0' < (char)QVar3)) {
      iVar7 = 0;
      do {
        iVar5 = (**(code **)(**(int **)(this + iVar7 * 4 + 0x474) + 0xc))();
        if (iVar5 != 0) {
          if (*(int *)(iVar8 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000a8710 + 0xa86c0,0x120,DAT_000a870c + 0xa86b6,iVar7);
          }
          if (*(int **)(this + iVar7 * 4 + 0x474) != (int *)0x0) {
            (**(code **)(**(int **)(this + iVar7 * 4 + 0x474) + 4))();
          }
          *(undefined4 *)(this + iVar7 * 4 + 0x474) = 0;
          goto LAB_000a86d6;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (char)this[0x470]);
    }
  }
  iVar5 = 0;
  QCameraCmdThread::sendCmd((QCameraCmdThread *)(this + 0x5c0),1,'\x01','\0');
LAB_000a86d6:
  if (*piVar6 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}

