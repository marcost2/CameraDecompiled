
/* qcamera::QCameraParameters::getRelatedCamCalibration(cam_related_system_calibration_data_t*) */

int __thiscall
qcamera::QCameraParameters::getRelatedCamCalibration
          (QCameraParameters *this,cam_related_system_calibration_data_t *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  MotParamStateMachine *this_00;
  double dVar5;
  
  iVar4 = -0x7fffffff;
  if (param_1 != (cam_related_system_calibration_data_t *)0x0) {
    pvVar3 = *(void **)(this + 0x1e0);
    if (pvVar3 == (void *)0x0) {
      if (*(int *)(*(int *)(DAT_000f6604 + 0xf6456) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_000f660c + 0xf6472,0x33a7,DAT_000f6608 + 0xf646a);
      }
    }
    else {
      this_00 = (MotParamStateMachine *)(this + 0xd28);
      iVar4 = MotParamStateMachine::beginInitBatch(this_00);
      if (iVar4 == 0) {
        android::VectorImpl::clear();
        __aeabi_memclr8(pvVar3,0x10f);
        *(undefined *)((int)pvVar3 + 0x117aec) = 0;
        *(undefined *)((int)pvVar3 + 0x106974) = 0;
        *(undefined *)((int)pvVar3 + 0xe1f78) = 0;
        *(undefined *)((int)pvVar3 + 0xcfa74) = 0;
        *(undefined *)((int)pvVar3 + 0xcfa08) = 0;
        *(undefined *)((int)pvVar3 + 0xc36b0) = 0;
        *(undefined *)((int)pvVar3 + 0xb86e0) = 0;
        *(undefined *)((int)pvVar3 + 0xb7340) = 0;
        *(undefined *)((int)pvVar3 + 0xb72e8) = 0;
        *(undefined *)((int)pvVar3 + 0x772c8) = 0;
        MotParamStateMachine::endInitBatch(this_00);
      }
      if (*(int *)(this + 0xd3c) < 1) {
        if (*(int *)(this + 0x1e0) == 0) {
          __android_log_print(6,DAT_000f6610 + 0xf6494,DAT_000f6614 + 0xf6496,0,0xdf);
        }
        else {
          *(undefined *)(*(int *)(this + 0x1e0) + 0xdf) = 1;
        }
        iVar4 = commitGetBatch(this);
        if (iVar4 == 0) {
          if (*(int *)(this + 0x1e0) == 0) {
            __android_log_print(6,DAT_000f6624 + 0xf64f2,DAT_000f6628 + 0xf64f4,0,0xdf);
          }
          else {
            __aeabi_memcpy8(param_1,"Failed to queue CREATE_JPEG_SESSION" +
                                    *(int *)(this + 0x1e0) + 0x19,0x432);
          }
          MotParamStateMachine::endCommitBatch(this_00);
          iVar4 = *(int *)(DAT_000f662c + 0xf6502);
          if (*(int *)(iVar4 + 0x2c) != 0) {
            uVar1 = *(undefined4 *)param_1;
            mm_camera_debug_log(1,4,DAT_000f6634 + 0xf6520,0x33c5,DAT_000f6630 + 0xf6514,uVar1);
            if (*(int *)(iVar4 + 0x2c) != 0) {
              dVar5 = (double)*(float *)(param_1 + 4);
              mm_camera_debug_log(1,4,DAT_000f663c + 0xf654a,0x33c7,DAT_000f6638 + 0xf6542,uVar1,
                                  dVar5);
              if (*(int *)(iVar4 + 0x2c) != 0) {
                mm_camera_debug_log(1,4,DAT_000f6644 + 0xf656a,0x33c9,DAT_000f6640 + 0xf655e,
                                    *(undefined2 *)(param_1 + 8),dVar5);
                if (*(int *)(iVar4 + 0x2c) != 0) {
                  mm_camera_debug_log(1,4,DAT_000f664c + 0xf6588,0x33cb,DAT_000f6648 + 0xf657c,
                                      *(undefined2 *)(param_1 + 10),dVar5);
                  if (*(int *)(iVar4 + 0x2c) != 0) {
                    mm_camera_debug_log(1,4,DAT_000f6654 + 0xf65a6,0x33cd,DAT_000f6650 + 0xf659a,
                                        *(undefined2 *)(param_1 + 0xc),dVar5);
                    if (*(int *)(iVar4 + 0x2c) != 0) {
                      uVar2 = (uint)*(ushort *)(param_1 + 0xe);
                      mm_camera_debug_log(1,4,DAT_000f665c + 0xf65c4,0x33cf,DAT_000f6658 + 0xf65b8,
                                          uVar2,dVar5);
                      if (*(int *)(iVar4 + 0x2c) != 0) {
                        mm_camera_debug_log(1,4,DAT_000f6664 + 0xf65ec,0x33d1,DAT_000f6660 + 0xf65e4
                                            ,uVar2,(double)*(float *)(param_1 + 0x10));
                      }
                    }
                  }
                }
              }
            }
          }
          iVar4 = 0;
        }
        else if (*(int *)(*(int *)(DAT_000f6618 + 0xf64a8) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f6620 + 0xf64c4,0x33b8,DAT_000f661c + 0xf64bc);
        }
      }
      else {
        if (*(int *)(*(int *)(DAT_000f65f8 + 0xf642a) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_000f6600 + 0xf6442,0x33ad,DAT_000f65fc + 0xf643a);
        }
        commitSetBatch(this);
        iVar4 = -0x26;
      }
    }
  }
  return iVar4;
}

