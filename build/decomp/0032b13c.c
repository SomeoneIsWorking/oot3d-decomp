// OoT3D decomp @ 0032b13c  name=FUN_0032b13c  size=68

void FUN_0032b13c(int param_1,uint param_2)

{
  bool bVar1;
  
  if (*(byte *)(param_1 + 0x3235) != param_2) {
    bVar1 = *(int *)(param_1 + 0x3258) == 0x3f800000;
    if (0x3f7fffff < *(int *)(param_1 + 0x3258)) {
      bVar1 = *(char *)(param_1 + 0x3237) == -1;
    }
    if (bVar1) {
      if (0x1e < param_2) {
        param_2 = 0;
      }
      *(undefined4 *)(param_1 + 0x3258) = DAT_0032b180;
      *(byte *)(param_1 + 0x3236) = *(byte *)(param_1 + 0x3235);
      *(char *)(param_1 + 0x3235) = (char)param_2;
    }
  }
  return;
}

