
/* qcamera::QCameraParameters::dump() */

void qcamera::QCameraParameters::dump(void)

{
  String8 *in_r0;
  QCameraParameters *in_r1;
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  cam_format_t local_100 [32];
  undefined8 local_80;
  undefined8 uStack120;
  undefined8 local_70;
  undefined8 uStack104;
  undefined8 local_60;
  undefined8 uStack88;
  undefined8 local_50;
  undefined8 uStack72;
  undefined8 local_40;
  undefined4 uStack56;
  undefined4 local_34;
  undefined4 uStack48;
  undefined8 uStack44;
  int local_20;
  
  piVar2 = *(int **)(DAT_000f9120 + 0xf8de8);
  local_20 = *piVar2;
  android::String8::String8(in_r0,(char *)(DAT_000f9124 + 0xf8df8));
  getStreamFormat(in_r1,1,local_100);
  if (local_100[0] - 1 < 7) {
    uVar1 = 0x109;
    switch(local_100[0]) {
    case 1:
      break;
    default:
switchD_000f8e10_caseD_2:
      uVar1 = 0x11;
      break;
    case 3:
      uVar1 = 0x7fa30c01;
      break;
    case 4:
      uVar1 = 0x32315659;
      break;
    case 7:
      uVar1 = 0x7fa30c04;
    }
  }
  else if (local_100[0] == 0x66) {
    uVar1 = 0x7fa30c06;
  }
  else {
    if (local_100[0] != 0x67) goto switchD_000f8e10_caseD_2;
    uVar1 = 0x114;
  }
  iVar3 = *(int *)(DAT_000f9128 + 0xf8e5e);
  if (*(int *)(iVar3 + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000f9130 + 0xf8e7c,0x2cf9,DAT_000f912c + 0xf8e72,uVar1);
  }
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9134 + 0xf8e8e);
  android::String8::append((char *)in_r0);
  android::CameraParameters::getInt((char *)in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f913c + 0xf8eba);
  android::String8::append((char *)in_r0);
  android::CameraParameters::getInt((char *)in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9144 + 0xf8ef2);
  android::String8::append((char *)in_r0);
  android::CameraParameters::getInt((char *)in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f914c + 0xf8f28);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9150 + 0xf8f4a);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9154 + 0xf8f78);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9158 + 0xf8f94);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f915c + 0xf8fb0);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9160 + 0xf8fcc);
  android::String8::append((char *)in_r0);
  android::CameraParameters::getInt((char *)in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9168 + 0xf8ff6);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f916c + 0xf903a);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9170 + 0xf9068);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9174 + 0xf9084);
  android::String8::append((char *)in_r0);
  android::CameraParameters::getInt((char *)in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f917c + 0xf90ae);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9180 + 0xf90ca);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9184 + 0xf90e6);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9188 + 0xf910a);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9554 + 0xf91a0);
  android::String8::append((char *)in_r0);
  isAutoHDREnabled(in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9558 + 0xf91be);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f955c + 0xf91da);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9590 + 0xf91f6);
  android::String8::append((char *)in_r0);
  count_leading_zeroes(*(undefined4 *)(in_r1 + 0x22c));
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9594 + 0xf9218);
  android::String8::append((char *)in_r0);
  count_leading_zeroes(*(int *)(in_r1 + 0x22c) + -5);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f9598 + 0xf923c);
  android::String8::append((char *)in_r0);
  count_leading_zeroes(*(int *)(in_r1 + 0x22c) + -2);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f959c + 0xf9260);
  android::String8::append((char *)in_r0);
  android::CameraParameters::getInt((char *)in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95a4 + 0xf928a);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95a8 + 0xf92a6);
  android::String8::append((char *)in_r0);
  isYUVFrameInfoNeeded(in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95ac + 0xf92c4);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95b0 + 0xf92e0);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95b4 + 0xf92fc);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95b8 + 0xf9318);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95bc + 0xf9334);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95c0 + 0xf9350);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95c4 + 0xf936c);
  android::String8::append((char *)in_r0);
  local_40 = 0;
  uStack56 = 0;
  local_50 = 0;
  uStack72 = 0;
  local_60 = 0;
  uStack88 = 0;
  local_70 = 0;
  uStack104 = 0;
  local_80 = 0;
  uStack120 = 0;
  local_34 = 0;
  uStack48 = 0;
  uStack44 = 0;
  property_get(DAT_000f95c8 + 0xf93b2,&local_80,DAT_000f95cc + 0xf93b4);
  atoi((char *)&local_80);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95d0 + 0xf93ca);
  android::String8::append((char *)in_r0);
  if (in_r1[0x2c9] == (QCameraParameters)0x0) {
    if (in_r1[0x2c8] != (QCameraParameters)0x0) goto LAB_000f942e;
  }
  else if (1 < *(byte *)(*(int *)(in_r1 + 0x1d4) + 0x384f)) goto LAB_000f942e;
  if ((((in_r1[0x2cb] == (QCameraParameters)0x0) && (in_r1[0x2ca] == (QCameraParameters)0x0)) &&
      (in_r1[0x2d9] != (QCameraParameters)0x0)) && (in_r1[0x2d8] != (QCameraParameters)0x0)) {
    in_r1[0x28d] = (QCameraParameters)0x1;
  }
LAB_000f942e:
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95d4 + 0xf9440);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95d8 + 0xf946c);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95dc + 0xf9488);
  android::String8::append((char *)in_r0);
  if (((in_r1[0x2cb] != (QCameraParameters)0x0) && (-1 < *(int *)(in_r1 + 0x37c))) &&
     (*(int *)(iVar3 + 0x28) != 0)) {
    mm_camera_debug_log(1,3,DAT_000f95e4 + 0xf94c6,0x27c0,DAT_000f95e0 + 0xf94bc,
                        *(int *)(in_r1 + 0x37c),*(undefined *)(*(int *)(in_r1 + 0x1d4) + 0x3856));
  }
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95e8 + 0xf94de);
  android::String8::append((char *)in_r0);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95ec + 0xf94fa);
  android::String8::append((char *)in_r0);
  getBurstCountForAdvancedCapture(in_r1);
  FUN_000d6e38(local_100,0x80,0x80,DAT_000f95f0 + 0xf9518);
  android::String8::append((char *)in_r0);
  if (*piVar2 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

