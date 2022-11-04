
/* qcamera::QCamera2HardwareInterface::fillFacesData(cam_faces_data_t&, metadata_buffer_t*) */

void __thiscall
qcamera::QCamera2HardwareInterface::fillFacesData
          (QCamera2HardwareInterface *this,cam_faces_data_t *param_1,metadata_buffer_t *param_2)

{
  cam_faces_data_t cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = __aeabi_memclr8(param_1,0x1110);
  if (param_2 != (metadata_buffer_t *)0x0) {
    uVar2 = (uint)(byte)param_2[0x11];
  }
  if (param_2 != (metadata_buffer_t *)0x0 && uVar2 != 0) {
    __aeabi_memcpy8(param_1,param_2 + 0x1128,0x108);
    cVar1 = param_1[4];
    if (10 < (byte)cVar1) {
      cVar1 = (cam_faces_data_t)0xa;
      param_1[4] = (cam_faces_data_t)0xa;
    }
    if (*(int *)(*(int *)(DAT_000d8cec + 0xd8c02) + 0x28) != 0) {
      mm_camera_debug_log(1,3,DAT_000d8cf4 + 0xd8c1c,0xd53,DAT_000d8cf0 + 0xd8c10,cVar1);
    }
    if (param_2[0xf5] != (metadata_buffer_t)0x0) {
      param_1[0x108] = (cam_faces_data_t)0x1;
      __aeabi_memcpy8(param_1 + 0x10c,param_2 + 0x1230,0x50);
    }
    if (param_2[0xf6] != (metadata_buffer_t)0x0) {
      param_1[0x15c] = (cam_faces_data_t)0x1;
      uVar4 = *(undefined8 *)(param_2 + 0x1280);
      uVar5 = *(undefined8 *)(param_2 + 0x1288);
      uVar3 = *(undefined8 *)(param_2 + 0x1296);
      *(undefined8 *)(param_1 + 0x16b) = *(undefined8 *)(param_2 + 0x128e);
      *(undefined8 *)(param_1 + 0x173) = uVar3;
      *(undefined8 *)(param_1 + 0x15d) = uVar4;
      *(undefined8 *)(param_1 + 0x165) = uVar5;
    }
    if (param_2[0xf7] != (metadata_buffer_t)0x0) {
      param_1[0x17b] = (cam_faces_data_t)0x1;
      __aeabi_memcpy8(param_1 + 0x17c,param_2 + 0x12a0,200);
    }
    if (param_2[0xf8] != (metadata_buffer_t)0x0) {
      param_1[0x244] = (cam_faces_data_t)0x1;
      uVar3 = *(undefined8 *)(param_2 + 0x1368);
      uVar4 = *(undefined8 *)(param_2 + 0x1370);
      *(undefined4 *)(param_1 + 0x255) = *(undefined4 *)(param_2 + 0x1378);
      *(undefined8 *)(param_1 + 0x245) = uVar3;
      *(undefined8 *)(param_1 + 0x24d) = uVar4;
    }
    if (param_2[0xf9] != (metadata_buffer_t)0x0) {
      param_1[0x259] = (cam_faces_data_t)0x1;
      __aeabi_memcpy8(param_1 + 0x25c,param_2 + 0x137c,0xf0);
    }
    if (param_2[0xfa] != (metadata_buffer_t)0x0) {
      param_1[0x34c] = (cam_faces_data_t)0x1;
      __aeabi_memcpy8(param_1 + 0x350,param_2 + 0x146c,0xdc0);
      return;
    }
  }
  return;
}

