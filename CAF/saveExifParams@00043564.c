
/* qcamera::QCamera3HardwareInterface::saveExifParams(metadata_buffer_t*) */

void __thiscall
qcamera::QCamera3HardwareInterface::saveExifParams
          (QCamera3HardwareInterface *this,metadata_buffer_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (metadata_buffer_t *)0x0) {
    if ((param_1[0x49] != (metadata_buffer_t)0x0) && (*(void **)(this + 0x13c) != (void *)0x0)) {
      __aeabi_memcpy8(*(void **)(this + 0x13c),param_1 + 0x10698,0x1398);
      *(undefined *)(*(int *)(this + 0x13c) + 0x60794) = 1;
    }
    if ((param_1[0x4a] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x13c) != 0)) {
      __aeabi_memcpy8((void *)(*(int *)(this + 0x13c) + 0x1398),param_1 + 0x11a30,0xafcc);
      *(undefined *)(*(int *)(this + 0x13c) + 0x60795) = 1;
    }
    if ((param_1[0x4b] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x13c) != 0)) {
      __aeabi_memcpy8((void *)(*(int *)(this + 0x13c) + 0xc364),param_1 + 0x1c9fc,0xc354);
      *(undefined *)(*(int *)(this + 0x13c) + 0x60796) = 1;
    }
    if ((param_1[0x4c] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x13c) != 0)) {
      __aeabi_memcpy8((void *)((int)DWORD_ARRAY_00017a40 + *(int *)(this + 0x13c) + 0xc78),
                      param_1 + 0x28d50,0x68);
      *(undefined *)(*(int *)(this + 0x13c) + 0x60797) = 1;
    }
    if ((param_1[0x4d] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x13c) != 0)) {
      __aeabi_memcpy8((void *)((int)DWORD_ARRAY_00017a40 + *(int *)(this + 0x13c) + 0xce0),
                      param_1 + 0x28db8,0x12500);
      *(undefined *)(*(int *)(this + 0x13c) + 0x60798) = 1;
    }
    if ((param_1[0x4e] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x13c) != 0)) {
      __aeabi_memcpy8((void *)((int)&__DT_JMPREL[1].r_info + *(int *)(this + 0x13c)),
                      param_1 + 0x3b2b8,
                      (size_t)
                      "rrideMetadataEPNS_24qcamera_hal3_pp_buffer_tEP17mm_camera_buf_defPNS_15jpeg_settings_tERNS_27qcamera_fwk_input_pp_data_tE"
                     );
      *(undefined *)(*(int *)(this + 0x13c) + 0x60799) = 1;
    }
    if ((param_1[0x4f] != (metadata_buffer_t)0x0) && (*(int *)(this + 0x13c) != 0)) {
      __aeabi_memcpy8((void *)(*(int *)(this + 0x13c) + 0x4f618),param_1 + 0x5fcb0,
                      (size_t)&DAT_00011174);
      *(undefined *)(*(int *)(this + 0x13c) + 0x6079a) = 1;
    }
    if ((param_1[0x50] != (metadata_buffer_t)0x0) && (iVar1 = *(int *)(this + 0x13c), iVar1 != 0)) {
      uVar2 = *(undefined4 *)(param_1 + 0x70e24);
      *(undefined4 *)(iVar1 + 0x60790) = *(undefined4 *)(param_1 + 0x70e28);
      *(undefined4 *)(iVar1 + 0x6078c) = uVar2;
      *(undefined *)(*(int *)(this + 0x13c) + 0x6079b) = 1;
    }
  }
  return;
}

