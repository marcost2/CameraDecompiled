
/* atrace_end(unsigned long long) */

void atrace_end(ulonglong param_1)

{
  undefined4 unaff_r7;
  undefined4 in_lr;
  longlong lVar1;
  
  lVar1 = atrace_is_tag_enabled(CONCAT44(in_lr,unaff_r7));
  if (lVar1 == 0) {
    return;
  }
  __ThumbV7PILongThunk_atrace_end_body();
  return;
}

