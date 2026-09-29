// OoT3D decomp @ 00369960  name=FUN_00369960  size=224

void FUN_00369960(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
  if (iVar1 + 0x4000U < 0x8001) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),6,4000,100);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x28a,param_1 + 0x290,
                 0x4300);
    return;
  }
  if (iVar1 < 0) {
    FUN_00375a18(param_1 + 0x28c,DAT_00369a44,6,DAT_00369a40,0x100);
  }
  else {
    FUN_00375a18(param_1 + 0x28c,0x2000,6,DAT_00369a40,0x100);
  }
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0xc,1000,100);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  return;
}
