
/* qcamera::FrameNumberRegistry::FrameNumberRegistry() */

FrameNumberRegistry * __thiscall
qcamera::FrameNumberRegistry::FrameNumberRegistry(FrameNumberRegistry *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(FrameNumberRegistry **)this = this + 4;
  pthread_mutex_init((pthread_mutex_t *)(this + 0x10),(pthread_mutexattr_t *)0x0);
  *(undefined4 *)(this + 0xc) = 800;
  return this;
}

