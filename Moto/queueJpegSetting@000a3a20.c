
/* qcamera::QCamera3PicChannel::queueJpegSetting(unsigned int, metadata_buffer_t*) */

undefined4 __thiscall
qcamera::QCamera3PicChannel::queueJpegSetting
          (QCamera3PicChannel *this,uint param_1,metadata_buffer_t *param_2)

{
  undefined auVar1 [16];
  uint *puVar2;
  char *__s;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  QCamera3HardwareInterface *this_00;
  undefined8 uVar9;
  
  this_00 = *(QCamera3HardwareInterface **)(this + 4);
  puVar2 = (uint *)malloc(200);
  if (puVar2 == (uint *)0x0) {
    if (*(int *)(*(int *)(DAT_000a3c10 + 0xa3b5c) + 0x20) != 0) {
      mm_camera_debug_log(1,1,DAT_000a3c18 + 0xa3b74,0x1080,DAT_000a3c14 + 0xa3b6c);
    }
    return 0xfffffff4;
  }
  __aeabi_memclr8(puVar2 + 2,0xc0);
  *puVar2 = param_1;
  puVar2[1] = 0;
  if (param_2 == (metadata_buffer_t *)0x0) {
    *(undefined *)((int)puVar2 + 0xc6) = 0;
    *(undefined *)(puVar2 + 8) = 0;
    *(undefined *)(puVar2 + 5) = 0;
    *(undefined *)(puVar2 + 2) = 0x55;
  }
  else {
    if (param_2[0xaa] != (metadata_buffer_t)0x0) {
      puVar2[1] = *(uint *)(param_2 + 0x73a88);
    }
    *(undefined *)(puVar2 + 2) = 0x55;
    if (param_2[0xab] != (metadata_buffer_t)0x0) {
      *(char *)(puVar2 + 2) = (char)*(undefined4 *)(param_2 + 0x73a8c);
    }
    if (param_2[0xac] != (metadata_buffer_t)0x0) {
      *(char *)((int)puVar2 + 9) = (char)*(undefined4 *)(param_2 + 0x73a90);
    }
    if (param_2[0xad] != (metadata_buffer_t)0x0) {
      uVar7 = *(uint *)(param_2 + 0x73a98);
      puVar2[3] = *(uint *)(param_2 + 0x73a94);
      puVar2[4] = uVar7;
    }
    *(undefined *)(puVar2 + 5) = 0;
    if (param_2[0xa9] != (metadata_buffer_t)0x0) {
      uVar7 = *(uint *)(param_2 + 0x73a80);
      uVar8 = *(uint *)(param_2 + 0x73a84);
      *(undefined *)(puVar2 + 5) = 1;
      puVar2[6] = uVar7;
      puVar2[7] = uVar8;
    }
    *(undefined *)(puVar2 + 8) = 0;
    if (param_2[0xa7] != (metadata_buffer_t)0x0) {
      uVar9 = *(undefined8 *)(param_2 + 0x73a50);
      auVar1 = *(undefined (*) [16])(param_2 + 0x73a40);
      *(undefined *)(puVar2 + 8) = 1;
      *(undefined8 *)(puVar2 + 0xe) = uVar9;
      *(longlong *)(puVar2 + 10) = SUB168(auVar1,0);
      *(longlong *)(puVar2 + 0xc) = SUB168(auVar1 >> 0x40,0);
    }
    if (param_2[0xa8] != (metadata_buffer_t)0x0) {
      *(undefined *)(puVar2 + 0x18) = 0;
      *(undefined8 *)(puVar2 + 0x14) = 0;
      *(undefined8 *)(puVar2 + 0x16) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x12) = 0;
      __strlcpy_chk(puVar2 + 0x10,param_2 + 0x73a58,0x21,0x21);
    }
    *(undefined *)((int)puVar2 + 0xc6) = 0;
    if ((param_2[0x109] != (metadata_buffer_t)0x0) && (*(int *)(param_2 + 0x77028) != 0)) {
      *(undefined *)((int)puVar2 + 0xc6) = 1;
    }
  }
  __s = (char *)QCamera3HardwareInterface::getEepromVersionInfo(this_00);
  puVar3 = (undefined4 *)QCamera3HardwareInterface::getLdafCalib(this_00);
  if (__s == (char *)0x0) {
    if (puVar3 == (undefined4 *)0x0) goto LAB_000a3c00;
    *(undefined *)((int)puVar2 + 0x61) = 1;
    iVar5 = 0;
  }
  else {
    sVar4 = strlen(__s);
    if (puVar3 == (undefined4 *)0x0 && sVar4 == 0) goto LAB_000a3c00;
    *(undefined *)((int)puVar2 + 0x61) = 1;
    sVar4 = strlen(__s);
    if (sVar4 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = snprintf((char *)((int)puVar2 + 0x62),100,(char *)0x64,DAT_000a3c1c + 0xa3bcc,__s);
    }
    if (puVar3 == (undefined4 *)0x0) goto LAB_000a3c00;
  }
  snprintf((char *)((int)puVar2 + iVar5 + 0x62),0xffffffff,(char *)(100 - iVar5),
           DAT_000a3c20 + 0xa3bfe,*puVar3,puVar3[1]);
LAB_000a3c00:
  uVar6 = (*(code *)PTR_processJpegSettingData_00119844)(this + 0x94,puVar2);
  return uVar6;
}

