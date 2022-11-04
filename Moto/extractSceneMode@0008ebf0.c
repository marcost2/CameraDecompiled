
/* qcamera::QCamera3HardwareInterface::extractSceneMode(android::hardware::camera::common::V1_0::helper::CameraMetadata
   const&, unsigned char, metadata_buffer_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::extractSceneMode
          (QCamera3HardwareInterface *this,CameraMetadata *param_1,uchar param_2,
          metadata_buffer_t *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined auStack44 [12];
  int local_20;
  QCamera3HardwareInterface *local_1c;
  int local_18;
  
  piVar3 = *(int **)(DAT_0008ed40 + 0x8ec00);
  local_18 = *piVar3;
  if (param_2 < 2) {
    if (*(int *)(*(int *)(DAT_0008ed54 + 0x8ec0c) + 0x2c) != 0) {
      mm_camera_debug_log(1,4,DAT_0008ed5c + 0x8ec28,0x31f8,DAT_0008ed58 + 0x8ec1c,0);
    }
    if (param_3 == (metadata_buffer_t *)0x0) {
LAB_0008eca2:
      __android_log_print(6,DAT_0008ed60 + 0x8ecb2,DAT_0008ed64 + 0x8ecb4,0,0xd);
      uVar1 = 0xffffffea;
    }
    else {
      uVar1 = 0;
      *(undefined4 *)(param_3 + 0x72eb0) = 0;
      param_3[0xd] = (metadata_buffer_t)0x1;
    }
  }
  else {
    if (param_2 == '\x02') {
      android::hardware::camera::common::V1_0::helper::CameraMetadata::find((uint)auStack44);
      if (local_20 == 0) {
        uVar1 = 0;
        goto LAB_0008ed2e;
      }
      uVar2 = (uint)(byte)*local_1c;
      this[0x118011] = *local_1c;
      if (uVar2 < 0x11) {
        uVar2 = (uint)*(byte *)(*(int *)(DAT_0008ed44 + 0x8ec68) + uVar2 * 8 + 4);
        if (*(int *)(*(int *)(DAT_0008ed48 + 0x8ec74) + 0x2c) != 0) {
          mm_camera_debug_log(1,4,DAT_0008ed50 + 0x8ec8e,0x31e2,DAT_0008ed4c + 0x8ec84,uVar2);
        }
        if (param_3 == (metadata_buffer_t *)0x0) goto LAB_0008eca2;
        *(uint *)(param_3 + 0x72eb0) = uVar2;
        param_3[0xd] = (metadata_buffer_t)0x1;
      }
      else if (*(int *)(*(int *)(DAT_0008ed70 + 0x8ecc6) + 0x20) != 0) {
        mm_camera_debug_log(1,1,DAT_0008ed78 + 0x8ece0,0x1911,DAT_0008ed74 + 0x8ecd4,uVar2);
      }
    }
    uVar1 = 0;
  }
  if (this[0x1ac] != (QCamera3HardwareInterface)0x0) {
    if (param_3 == (metadata_buffer_t *)0x0) {
      __android_log_print(6,DAT_0008ed68 + 0x8ed26,DAT_0008ed6c + 0x8ed28,0,0x109);
      uVar1 = 0xffffffea;
    }
    else {
      *(undefined4 *)(param_3 + 0x77030) = 1;
      *(undefined4 *)(param_3 + 0x7702c) = 0;
      *(undefined4 *)(param_3 + 0x77028) = 1;
      param_3[0x109] = (metadata_buffer_t)0x1;
    }
  }
LAB_0008ed2e:
  if (*piVar3 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

