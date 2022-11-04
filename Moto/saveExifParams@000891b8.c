
/* qcamera::QCamera3HardwareInterface::saveExifParams(metadata_buffer_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::saveExifParams
          (QCamera3HardwareInterface *this,metadata_buffer_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (metadata_buffer_t *)0x0) {
    if ((param_1[0x49] != (metadata_buffer_t)0x0) && (*(void **)(this + 0x174) != (void *)0x0)) {
      __aeabi_memcpy8(*(void **)(this + 0x174),param_1 + 0x10748,0x1398);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x1a] = '\x01';
    }
    if ((param_1[0x4a] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x174) != 0)) {
      __aeabi_memcpy8((void *)(*(int *)(this + 0x174) + 0x1398),param_1 + 0x11ae0,0xafcc);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x1b] = '\x01';
    }
    if ((param_1[0x4b] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x174) != 0)) {
      __aeabi_memcpy8((void *)(*(int *)(this + 0x174) + 0xc364),param_1 + 0x1caac,0xc354);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x1c] = '\x01';
    }
    if ((param_1[0x4c] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x174) != 0)) {
      __aeabi_memcpy8((void *)((int)&__DT_SYMTAB[0x4c9].st_value + *(int *)(this + 0x174)),
                      param_1 + 0x28e00,0x68);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x1d] = '\x01';
    }
    if ((param_1[0x4d] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x174) != 0)) {
      __aeabi_memcpy8(&__DT_SYMTAB[0x4cf].st_info + *(int *)(this + 0x174),param_1 + 0x28e68,
                      (size_t)&DAT_00012500);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x1e] = '\x01';
    }
    if ((param_1[0x4e] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x174) != 0)) {
      __aeabi_memcpy8("_ZN7qcamera19FrameNumberRegistry21purgeOldEntriesLockedEv" +
                      *(int *)(this + 0x174) + 0x2f,param_1 + 0x3b368,0x249f8);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x1f] = '\x01';
    }
    if ((param_1[0x4f] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x174) != 0)) {
      __aeabi_memcpy8("_ZN7qcamera17QCameraParameters44KEY_QC_SUPPORTED_SKIN_TONE_ENHANCEMENT_MODESE"
                      + *(int *)(this + 0x174) + 0xf,param_1 + 0x5fd60,(size_t)&DAT_00011174);
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x20] = '\x01';
    }
    if ((param_1[0x50] != (metadata_buffer_t)0x0) && (iVar1 = *(int *)(this + 0x174), iVar1 != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x70ed4);
      *(undefined4 *)("error creating a new jpeg encoding session" + iVar1 + 0x16) =
           *(undefined4 *)(param_1 + 0x70ed8);
      *(undefined4 *)("error creating a new jpeg encoding session" + iVar1 + 0x12) = uVar2;
      "error creating a new jpeg encoding session"[*(int *)(this + 0x174) + 0x21] = '\x01';
    }
    if (param_1[0x41] != (metadata_buffer_t)0x0) {
      *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x106e0);
      *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x106ec);
    }
    if (param_1[0xf] != (metadata_buffer_t)0x0) {
      *(undefined4 *)(this + 0x19c) = *(undefined4 *)(param_1 + 0x72eb8);
    }
  }
  return;
}

