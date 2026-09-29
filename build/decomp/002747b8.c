// OoT3D decomp @ 002747b8  name=FUN_002747b8  size=312

void FUN_002747b8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(DAT_002748f0 + param_2);
  *(short *)(param_1 + 0x1b0) = *(short *)(param_1 + 0x1b0) + 1;
  if ((*(short *)(param_1 + 0x1aa) < 0) || (iVar1 = FUN_0036e864(param_2), iVar1 == 0)) {
    if ((*(short *)(param_1 + 0x1ac) != 4) || (*(char *)(param_1 + 0x1b2) == '\0')) {
      if ((((*(float *)(param_1 + 0x98) < *(float *)(param_1 + 0x1b4) + DAT_002748f4) &&
           ((int)ABS(*(float *)(iVar2 + 0x2c) - *(float *)(param_1 + 0x2c)) < DAT_002748f8)) &&
          (iVar1 = FUN_0037577c(param_2), iVar1 == 0)) &&
         (((*(byte *)(param_1 + 0x1c9) & 1) == 0 || ((*(ushort *)(iVar2 + 0x90) & 1) != 0)))) {
        *(undefined2 *)(param_1 + 0x1b0) = 0;
        if (*(short *)(param_1 + 0x1ae) != 0) {
          return;
        }
        FUN_00367c7c(param_2,*(undefined2 *)(param_1 + 0x116),0);
        FUN_0036e980(param_2,0,8);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x11;
        *(undefined4 *)(param_1 + 0x1a4) = DAT_002748fc;
        return;
      }
      *(undefined2 *)(param_1 + 0x1ae) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x1b2) == '\0') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined1 *)(param_1 + 0x1b2) = 1;
  }
  return;
}
