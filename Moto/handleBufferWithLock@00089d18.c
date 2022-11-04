
/* WARNING: Could not reconcile some variable overlaps */
/* qcamera::QCamera3HardwareInterface::handleBufferWithLock(camera3_stream_buffer*, unsigned int) */

void __thiscall
qcamera::QCamera3HardwareInterface::handleBufferWithLock
          (QCamera3HardwareInterface *this,camera3_stream_buffer *param_1,uint param_2)

{
  undefined auVar1 [16];
  uint *puVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  int iVar17;
  bool bVar18;
  undefined8 uVar19;
  int iVar20;
  uint local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 uStack100;
  uint local_5c;
  uint local_58 [2];
  undefined8 local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined8 uStack56;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar16 = *(int **)(DAT_0008a094 + 0x89d2a);
  local_28 = *piVar16;
  puVar15 = *(uint **)(DAT_0008a098 + 0x89d38);
  if (1 < *puVar15) {
    if ((**(byte **)(DAT_0008a09c + 0x89d48) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008a0a0 + 0x89d58) + 1) << 0x1d) < 0) {
      atrace_begin_body(DAT_0008a410 + 0x8a3fc);
    }
  }
  if (*(int *)(this + 0x117fd8) - 5U < 2) goto LAB_00089d7e;
  if (this[0x1aa] != (QCamera3HardwareInterface)0x0) {
    handleBuffersDuringFlushLock(this,param_1);
    goto LAB_00089d7e;
  }
  puVar2 = *(uint **)(this + 0x204);
  puVar11 = (uint *)puVar2[0x15];
  if (puVar2 != puVar11) {
    uVar8 = *puVar11;
    puVar14 = puVar11;
    while (uVar8 != param_2) {
      puVar14 = (uint *)puVar14[0x15];
      if (puVar2 == puVar14) goto LAB_00089e4c;
      uVar8 = *puVar14;
    }
    if (puVar2 != puVar14) {
      if (puVar14[0xc] == 0) {
        piVar6 = (int *)((int *)puVar14[4])[4];
        if (piVar6 != (int *)puVar14[4]) {
          iVar13 = *(int *)(DAT_0008a488 + 0x8a108);
          iVar3 = DAT_0008a48c + 0x8a10e;
          iVar17 = DAT_0008a490 + 0x8a114;
          iVar12 = DAT_0008a494 + 0x8a11a;
          do {
            if (*piVar6 == *(int *)param_1) {
              if (piVar6[1] == 0) {
                puVar4 = (undefined8 *)malloc(0x14);
                piVar6[1] = (int)puVar4;
                auVar1 = *(undefined (*) [16])param_1;
                *puVar4 = SUB168(auVar1,0);
                puVar4[1] = SUB168(auVar1 >> 0x40,0);
                *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(param_1 + 0x10);
                if (*(int *)(iVar13 + 0x28) != 0) {
                  uVar10 = 0xffb;
                  uVar9 = 3;
                  iVar20 = iVar3;
                  goto LAB_0008a16a;
                }
              }
              else if (*(int *)(iVar13 + 0x20) != 0) {
                uVar9 = 1;
                uVar10 = 0xff5;
                iVar20 = iVar12;
LAB_0008a16a:
                mm_camera_debug_log(1,uVar9,iVar17,uVar10,iVar20);
              }
            }
            piVar6 = (int *)piVar6[4];
          } while (piVar6 != (int *)puVar14[4]);
        }
        goto LAB_00089d7e;
      }
      android::hardware::camera::common::V1_0::helper::CameraMetadata::CameraMetadata
                ((CameraMetadata *)local_58);
      local_40 = 0;
      uStack56 = 0;
      local_50 = 0;
      local_48 = 0;
      local_2c = 0;
      local_30 = 0;
      uVar19 = systemTime(1);
      if ((camera_metadata *)puVar14[0xd] == (camera_metadata *)0x0) {
        if (*(int *)(*(int *)(DAT_0008a430 + 0x8a19e) + 0x20) != 0) {
          mm_camera_debug_log(1,1,DAT_0008a438 + 0x8a1b6,0xfce,DAT_0008a434 + 0x8a1ae);
        }
      }
      else {
        android::hardware::camera::common::V1_0::helper::CameraMetadata::operator_
                  ((CameraMetadata *)local_58,(camera_metadata *)puVar14[0xd]);
        iVar3 = android::hardware::camera::common::V1_0::helper::CameraMetadata::exists
                          ((CameraMetadata *)local_58,0xe0010);
        if (iVar3 == 0) {
          if (*(int *)(*(int *)(DAT_0008a424 + 0x8a1c0) + 0x24) != 0) {
            mm_camera_debug_log(1,2,DAT_0008a42c + 0x8a1d8,0xfcb,DAT_0008a428 + 0x8a1d0);
          }
        }
        else {
          android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)&local_80);
          uVar19 = *local_74._4_4_;
        }
      }
      local_40 = uVar19;
      local_48 = local_48 & 0xffffffff00000000 | (ulonglong)param_2;
      local_50 = CONCAT44(local_50._4_4_,2);
      if (*(int *)(puVar14[0xc] + 0x10) != -1) {
        iVar3 = sync_wait(*(int *)(puVar14[0xc] + 0x10),0xffffffff);
        close(*(int *)(puVar14[0xc] + 0x10));
        if ((iVar3 != 0) && (*(int *)(*(int *)(DAT_0008a43c + 0x8a210) + 0x20) != 0)) {
          mm_camera_debug_log(1,1,DAT_0008a444 + 0x8a22a,0xfd9,DAT_0008a440 + 0x8a220,iVar3);
        }
      }
      iVar17 = *(int *)(this + 0x270);
      iVar3 = *(int *)(iVar17 + 0x1c);
      if (iVar3 != iVar17) {
        do {
          iVar12 = *(int *)(iVar3 + 0x14);
          while (iVar12 = *(int *)(iVar12 + 0x10), iVar12 != *(int *)(iVar3 + 0x14)) {
            if (*(int *)(iVar12 + 4) == *(int *)(param_1 + 4)) {
              uVar8 = *(uint *)(iVar12 + 8);
              if (((uVar8 & 1) != 0) && (*(int *)(*(int *)(DAT_0008a448 + 0x8a266) + 0x28) != 0)) {
                mm_camera_debug_log(1,3,DAT_0008a450 + 0x8a280,0x35a3,DAT_0008a44c + 0x8a274,
                                    *(int *)(param_1 + 4));
                uVar8 = *(uint *)(iVar12 + 8);
              }
              goto LAB_0008a284;
            }
          }
          iVar3 = *(int *)(iVar3 + 0x1c);
        } while (iVar3 != iVar17);
      }
      uVar8 = 0;
LAB_0008a284:
      uVar5 = *(uint *)(param_1 + 8);
      *(uint *)(param_1 + 8) = uVar5 | uVar8;
      bVar18 = ((uVar5 | uVar8) & 1) != 0;
      piVar6 = (int *)(DAT_0008a454 + 0x8a292);
      iVar3 = *piVar6;
      if (bVar18) {
        piVar6 = *(int **)(iVar3 + 0x20);
      }
      if (bVar18 && piVar6 != (int *)0x0) {
        mm_camera_debug_log(1,1,DAT_0008a45c + 0x8a2b6,0xfdf,DAT_0008a458 + 0x8a2a8,param_2,
                            *(undefined4 *)(param_1 + 4));
      }
      PendingBuffersMap::removeBuf
                ((PendingBuffersMap *)(this + 0x268),*(native_handle ***)(param_1 + 4));
      uStack100 = 0;
      local_6c = 2;
      local_7c = CONCAT44(1,puVar14[0xd]);
      local_74 = CONCAT44(puVar14[0xc],param_1);
      local_80 = param_2;
      iVar17 = FrameNumberRegistry::getFrameworkFrameNumber
                         ((FrameNumberRegistry *)(this + 0x1e4),(uint)local_48,&local_5c);
      if (iVar17 == 0) {
        if (local_5c == 0xffffffff) {
          if (*(int *)(iVar3 + 0x20) != 0) {
            uVar9 = 0x110d;
            iVar17 = DAT_0008a468 + 0x8a3ce;
            iVar12 = DAT_0008a46c + 0x8a3d6;
            goto LAB_0008a304;
          }
        }
        else {
          local_48 = local_48 & 0xffffffff00000000 | (ulonglong)local_5c;
          (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_50);
        }
      }
      else if (*(int *)(iVar3 + 0x20) != 0) {
        uVar9 = 0x1109;
        iVar17 = DAT_0008a460 + 0x8a2fe;
        iVar12 = DAT_0008a464 + 0x8a306;
LAB_0008a304:
        mm_camera_debug_log(1,1,iVar12,uVar9,iVar17);
      }
      iVar17 = FrameNumberRegistry::getFrameworkFrameNumber
                         ((FrameNumberRegistry *)(this + 0x1e4),local_80,&local_5c);
      if (iVar17 == 0) {
        if (local_5c != 0xffffffff) {
          local_80 = local_5c;
          (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_80);
          goto LAB_0008a356;
        }
        if (*(int *)(iVar3 + 0x2c) != 0) {
          uVar9 = 4;
          uVar10 = 0x10ef;
          iVar17 = DAT_0008a478 + 0x8a3e8;
          iVar12 = DAT_0008a47c + 0x8a3f0;
          goto LAB_0008a33e;
        }
      }
      else {
        if (*(int *)(iVar3 + 0x20) != 0) {
          uVar9 = 1;
          uVar10 = 0x10eb;
          iVar17 = DAT_0008a470 + 0x8a338;
          iVar12 = DAT_0008a474 + 0x8a340;
LAB_0008a33e:
          mm_camera_debug_log(1,uVar9,iVar12,uVar10,iVar17);
        }
LAB_0008a356:
        if (*(int *)(iVar3 + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008a484 + 0x8a370,0xfee,DAT_0008a480 + 0x8a366,param_2);
        }
      }
      if ((void *)puVar14[0xc] != (void *)0x0) {
        free((void *)puVar14[0xc]);
        puVar14[0xc] = 0;
      }
      if (puVar14[0xd] != 0) {
        free_camera_metadata();
      }
      uVar8 = puVar14[0x14];
      uVar5 = puVar14[0x15];
      *(uint *)(uVar8 + 0x54) = uVar5;
      *(uint *)(uVar5 + 0x50) = uVar8;
      pvVar7 = (void *)FUN_00098ffc((int)puVar14);
      operator_delete(pvVar7);
      android::hardware::camera::common::V1_0::helper::CameraMetadata::_CameraMetadata
                ((CameraMetadata *)local_58);
      goto LAB_00089d7e;
    }
LAB_00089e4c:
    if (puVar2 != puVar11) {
      iVar12 = *(int *)(DAT_0008a0ac + 0x89e56);
      iVar3 = DAT_0008a0b0 + 0x89e5c;
      iVar17 = DAT_0008a0b4 + 0x89e62;
      do {
        if (((*puVar11 < param_2) && (puVar11[0xc] == 0)) && (*(int *)(iVar12 + 0x24) != 0)) {
          mm_camera_debug_log(1,2,iVar17,0xf98,iVar3,*puVar11,param_2);
          puVar2 = *(uint **)(this + 0x204);
        }
        puVar11 = (uint *)puVar11[0x15];
      } while (puVar2 != puVar11);
    }
  }
  local_74 = 0;
  uStack100 = 0;
  local_6c = 0;
  local_7c = 0x100000000;
  puVar2 = (uint *)(*(uint **)(this + 0x20c))[3];
  local_80 = param_2;
  if (puVar2 != *(uint **)(this + 0x20c)) {
    do {
      piVar6 = *(int **)(*(int *)param_1 + 0x18);
      uVar8 = (**(code **)(*piVar6 + 0x20))(piVar6);
      uVar5 = QCamera3Channel::getStreamID((QCamera3Channel *)piVar6,uVar8);
      uVar8 = puVar2[1];
      bVar18 = uVar8 == uVar5;
      if (bVar18) {
        uVar8 = *puVar2;
      }
      if (bVar18 && uVar8 == param_2) {
        *(undefined4 *)(param_1 + 8) = 1;
        if (*(int *)(*(int *)(DAT_0008a0b8 + 0x89ef2) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008a0c0 + 0x89f12,0xfa8,DAT_0008a0bc + 0x89f02,param_2,uVar5,
                              *(undefined4 *)(this + 0x60));
        }
        uVar8 = puVar2[2];
        uVar5 = puVar2[3];
        *(uint *)(uVar8 + 0xc) = uVar5;
        *(uint *)(uVar5 + 8) = uVar8;
        operator_delete(puVar2);
        break;
      }
      puVar2 = (uint *)puVar2[3];
    } while (puVar2 != *(uint **)(this + 0x20c));
  }
  iVar3 = *(int *)(this + 0x270);
  iVar17 = *(int *)(iVar3 + 0x1c);
  if (iVar17 != iVar3) {
    do {
      iVar12 = *(int *)(iVar17 + 0x14);
      while (iVar12 = *(int *)(iVar12 + 0x10), iVar12 != *(int *)(iVar17 + 0x14)) {
        if (*(int *)(iVar12 + 4) == *(int *)(param_1 + 4)) {
          uVar8 = *(uint *)(iVar12 + 8);
          if (((uVar8 & 1) != 0) && (*(int *)(*(int *)(DAT_0008a0c4 + 0x89f58) + 0x28) != 0)) {
            mm_camera_debug_log(1,3,DAT_0008a0cc + 0x89f72,0x35a3,DAT_0008a0c8 + 0x89f66,
                                *(int *)(param_1 + 4));
            uVar8 = *(uint *)(iVar12 + 8);
          }
          goto LAB_00089f7e;
        }
      }
      iVar17 = *(int *)(iVar17 + 0x1c);
    } while (iVar17 != iVar3);
  }
  uVar8 = 0;
LAB_00089f7e:
  uVar5 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar5 | uVar8;
  if (((uVar5 | uVar8) & 1) != 0) {
    iVar3 = *(int *)(DAT_0008a0d0 + 0x89f92);
    if (*(int *)(iVar3 + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_0008a0d8 + 0x89fb8,0xfb0,DAT_0008a0d4 + 0x89fa2,param_2,
                          *(undefined4 *)(param_1 + 4),*(undefined4 *)param_1,
                          *(undefined4 *)(this + 0x60));
    }
    uStack56 = 0;
    local_2c = 0;
    local_30 = 0;
    local_50 = 1;
    local_40 = 4;
    local_48 = CONCAT44(*(undefined4 *)param_1,param_2);
    iVar17 = FrameNumberRegistry::getFrameworkFrameNumber
                       ((FrameNumberRegistry *)(this + 0x1e4),param_2,local_58);
    if (iVar17 == 0) {
      if (local_58[0] == 0xffffffff) {
        if (*(int *)(iVar3 + 0x20) != 0) {
          uVar9 = 0x110d;
          iVar3 = DAT_0008a414 + 0x8a3b4;
          iVar17 = DAT_0008a418 + 0x8a3bc;
          goto LAB_0008a008;
        }
      }
      else {
        local_48 = local_48 & 0xffffffff00000000 | (ulonglong)local_58[0];
        (**(code **)(*(int *)(this + 0x88) + 4))(*(int *)(this + 0x88),&local_50);
      }
    }
    else if (*(int *)(iVar3 + 0x20) != 0) {
      uVar9 = 0x1109;
      iVar3 = DAT_0008a0dc + 0x8a002;
      iVar17 = DAT_0008a0e0 + 0x8a00a;
LAB_0008a008:
      mm_camera_debug_log(1,1,iVar17,uVar9,iVar3);
    }
  }
  local_74 = local_74 & 0xffffffff00000000 | ZEXT48(param_1);
  iVar3 = *(int *)(DAT_0008a0e4 + 0x8a02a);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_0008a0ec + 0x8a048,0xfbb,DAT_0008a0e8 + 0x8a03a,param_2,
                        *(undefined4 *)(param_1 + 4));
  }
  PendingBuffersMap::removeBuf
            ((PendingBuffersMap *)(this + 0x268),*(native_handle ***)(param_1 + 4));
  iVar17 = FrameNumberRegistry::getFrameworkFrameNumber
                     ((FrameNumberRegistry *)(this + 0x1e4),local_80,(uint *)&local_50);
  if (iVar17 == 0) {
    if ((uint)local_50 == 0xffffffff) {
      if (*(int *)(iVar3 + 0x2c) != 0) {
        mm_camera_debug_log(1,4,DAT_0008a420 + 0x8a194,0x10ef,DAT_0008a41c + 0x8a18c);
      }
    }
    else {
      local_80 = (uint)local_50;
      (***(code ***)(this + 0x88))(*(code ***)(this + 0x88),&local_80);
    }
  }
  else if (*(int *)(iVar3 + 0x20) != 0) {
    mm_camera_debug_log(1,1,DAT_0008a0f4 + 0x8a07c,0x10eb,DAT_0008a0f0 + 0x8a074);
  }
LAB_00089d7e:
  if (1 < *puVar15) {
    if ((**(byte **)(DAT_0008a0a4 + 0x89d8c) & 1) == 0) {
      atrace_setup();
    }
    if ((int)((uint)*(byte *)(*(int *)(DAT_0008a0a8 + 0x89d9c) + 1) << 0x1d) < 0) {
      atrace_end_body();
    }
  }
  if (*piVar16 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

