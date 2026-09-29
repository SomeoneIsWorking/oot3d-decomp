// OoT3D decomp @ 0024f670  name=FUN_0024f670  size=264

void FUN_0024f670(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;

  uVar1 = DAT_0024f778;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    *(undefined4 *)(param_1 + 0x6c) = DAT_0024f778;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    FUN_0036e168(uVar1,DAT_0024f780,DAT_0024f77c,uVar1,param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0xa50) = 0;
  }
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 == 0) {
    if ((int)*(float *)(param_1 + 0x1e0) == 0xf || (int)*(float *)(param_1 + 0x1e0) == 0x1e) {
      FUN_00375bcc(param_1,DAT_0024f788);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 2) != '\x06') {
      bVar3 = *(short *)(param_1 + 0x1c) == 0;
      if (-1 < *(short *)(param_1 + 0x1c)) {
        bVar3 = *(short *)(DAT_0024f784 + 2) == -1;
      }
      if (bVar3) {
        FUN_00375c10(param_2,(int)*(short *)(param_1 + 0xa68));
        FUN_00373d0c(param_2);
      }
      else {
        *(undefined2 *)(DAT_0024f784 + 2) = 0xffff;
      }
      FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
    }
    if (*(short *)(param_1 + 0xa70) < 1) {
      *(undefined2 *)(param_1 + 0xa70) = 0;
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    iVar2 = *(short *)(param_1 + 0xa70) + -5;
    *(short *)(param_1 + 0xa70) = (short)iVar2;
    *(char *)(param_1 + 0xd0) = (char)iVar2;
  }
  return;
}
