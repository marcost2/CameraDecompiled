
/* qcamera::QCamera2HardwareInterface::dumpMetadataToFile(qcamera::QCameraStream*,
   mm_camera_buf_def*, char*) */

void __thiscall
qcamera::QCamera2HardwareInterface::dumpMetadataToFile
          (QCamera2HardwareInterface *this,QCameraStream *param_1,mm_camera_buf_def *param_2,
          char *param_3)

{
  uint uVar1;
  tm *__tp;
  undefined4 uVar2;
  int __fd;
  size_t *__buf;
  size_t *__buf_00;
  uint uVar3;
  size_t *__buf_01;
  size_t *__buf_02;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  char *local_130;
  time_t tStack300;
  undefined8 local_128;
  undefined8 uStack288;
  undefined8 local_118;
  undefined8 uStack272;
  undefined8 local_108;
  undefined8 uStack256;
  undefined8 local_f8;
  undefined8 uStack240;
  undefined8 local_e8;
  undefined8 uStack224;
  undefined8 local_d8;
  undefined8 uStack208;
  undefined8 local_c8;
  undefined8 uStack192;
  undefined8 local_b8;
  undefined8 uStack176;
  undefined8 local_a8;
  undefined8 uStack160;
  undefined8 local_98;
  undefined8 uStack144;
  char acStack132 [92];
  int local_28;
  
  piVar7 = *(int **)(DAT_000d8fec + 0xd8d0a);
  local_28 = *piVar7;
  iVar5 = *(int *)(param_2 + 0x208);
  property_get(DAT_000d8ff0 + 0xd8d22,acStack132,DAT_000d8ff4 + 0xd8d24);
  uVar1 = atoi(acStack132);
  if (param_1 == (QCameraStream *)0x0) {
    if (*(int *)(*(int *)(DAT_000d8ff8 + 0xd8f92) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d9000 + 0xd8faa,0xbf5,DAT_000d8ffc + 0xd8fa2);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    if (uVar1 != 0) {
      uVar3 = uVar1 >> 0x10;
      if (uVar1 >> 0x10 == 0) {
        uVar3 = 10;
      }
      uVar1 = uVar4;
      if (0xff < uVar4) {
        uVar1 = 0;
      }
      if (0xff < uVar3) {
        uVar3 = 0x100;
        uVar4 = uVar1;
      }
      iVar6 = *(int *)(DAT_000d9004 + 0xd8d68);
      if (*(int *)(iVar6 + 0x28) != 0) {
        mm_camera_debug_log(1,3,DAT_000d900c + 0xd8d88,0xc06,DAT_000d9008 + 0xd8d7c,uVar4,uVar3);
      }
      if (uVar4 < uVar3) {
        local_a8 = 0;
        uStack160 = 0;
        local_b8 = 0;
        uStack176 = 0;
        local_c8 = 0;
        uStack192 = 0;
        local_d8 = 0;
        uStack208 = 0;
        local_e8 = 0;
        uStack224 = 0;
        local_f8 = 0;
        uStack240 = 0;
        local_128 = 0;
        uStack288 = 0;
        local_118 = 0;
        uStack272 = 0;
        local_108 = 0;
        uStack256 = 0;
        local_98 = 0;
        uStack144 = 0;
        time(&tStack300);
        __tp = localtime(&tStack300);
        if (__tp != (tm *)0x0) {
          strftime((char *)&local_108,0x80,(char *)(DAT_000d9010 + 0xd8df6),__tp);
        }
        android::String8::String8((String8 *)&local_130,(char *)&local_108);
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
        FUN_000d6e38(&local_128,0x20,0x20,DAT_000d9014 + 0xd8e18);
        android::String8::append((char *)&local_130);
        __fd = open(local_130,0x42,0x1ff);
        if (__fd < 0) {
          if (*(int *)(iVar6 + 0x20) != 0) {
            mm_camera_debug_log(1,1,DAT_000d9044 + 0xd8fc8,0xc3a,DAT_000d9040 + 0xd8fc0,param_3,
                                uVar2);
          }
        }
        else {
          __buf_00 = (size_t *)("Failed to Q new buffer to stream" + iVar5 + 0x10);
          *(undefined4 *)("Failed to Q new buffer to stream" + iVar5 + 0xc) = 6;
          write(__fd,"Failed to Q new buffer to stream" + iVar5 + 0xc,4);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d901c + 0xd8e76,0xc1e,DAT_000d9018 + 0xd8e6a,*__buf_00,
                                uVar2);
          }
          write(__fd,__buf_00,4);
          __buf_01 = (size_t *)("Failed to Q new buffer to stream" + iVar5 + 0x14);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d9024 + 0xd8ea2,0xc21,DAT_000d9020 + 0xd8e96,*__buf_01);
          }
          write(__fd,__buf_01,4);
          __buf = (size_t *)("Failed to Q new buffer to stream" + iVar5 + 0x18);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d902c + 0xd8ed2,0xc24,DAT_000d9028 + 0xd8ec6,*__buf);
          }
          write(__fd,__buf,4);
          __buf_02 = (size_t *)("Failed to Q new buffer to stream" + iVar5 + 0x1c);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d9034 + 0xd8f02,0xc27,DAT_000d9030 + 0xd8ef6,*__buf_02);
          }
          write(__fd,__buf_02,4);
          if (*(int *)(iVar6 + 0x28) != 0) {
            mm_camera_debug_log(1,3,DAT_000d903c + 0xd8f32,0xc2a,DAT_000d9038 + 0xd8f26,
                                *(undefined4 *)("Failed to Q new buffer to stream" + iVar5 + 0x20));
          }
          write(__fd,"Failed to Q new buffer to stream" + iVar5 + 0x20,4);
          write(__fd,"Couldn\'t initialize camera stream %d" + iVar5 + 7,*__buf_00);
          write(__fd,(void *)(iVar5 + 0x872e8),*__buf_01);
          write(__fd,(void *)(iVar5 + 0x972e8),*__buf);
          write(__fd,(void *)(iVar5 + 0xa72e8),*__buf_02);
          close(__fd);
        }
        android::String8::_String8((String8 *)&local_130);
        uVar4 = uVar4 + 1;
      }
    }
    *(uint *)(param_1 + 8) = uVar4;
  }
  if (*piVar7 != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

