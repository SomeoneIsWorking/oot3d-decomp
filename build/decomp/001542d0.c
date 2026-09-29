// OoT3D decomp @ 001542d0  name=FUN_001542d0  size=92

void FUN_001542d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036e168(*(float *)(param_1 + 0xc) + DAT_0015432c,DAT_00154338,DAT_00154334,
                       DAT_00154330,param_1 + 0x2c);
  uVar1 = DAT_00154340;
  if (iVar2 < DAT_0015433c) {
    FUN_00375bcc(param_1,DAT_00154344);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00154348;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}
