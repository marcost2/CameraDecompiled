
/* qcamera::QCamera2HardwareInterface::setJpegCallBacks(void (*)(int, camera_memory const*, unsigned
   int, camera_frame_metadata*, void*, unsigned int, void (*)(void*, void*, int), void*, void*),
   void*) */

void __thiscall
qcamera::QCamera2HardwareInterface::setJpegCallBacks
          (QCamera2HardwareInterface *this,FuncDef89 *param_1,void *param_2)

{
  if (*(int *)(*(int *)(DAT_000b43ec + 0xb43b4) + 0x28) != 0) {
    mm_camera_debug_log(1,3,DAT_000b43f4 + 0xb43d0,0x101d,DAT_000b43f0 + 0xb43c4,
                        *(undefined4 *)(this + 0x5c));
  }
  *(void **)(this + 0x4d4) = param_2;
  *(FuncDef89 **)(this + 0x4cc) = param_1;
  (*(code *)PTR_setJpegCallBacks_00119b98)(this + 0x854,param_1,param_2);
  return;
}

