
/* atrace_begin(unsigned long long, char const*) */

void atrace_begin(ulonglong param_1,char *param_2)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  longlong lVar1;
  
  lVar1 = atrace_is_tag_enabled(CONCAT44(in_lr,unaff_r4));
  if (lVar1 == 0) {
    return;
  }
  __ThumbV7PILongThunk_atrace_begin_body();
  return;
}

