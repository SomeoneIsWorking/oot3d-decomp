// OoT3D decomp @ 0011230c  name=FUN_0011230c  size=248

void FUN_0011230c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = FUN_00369a48();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xa4c) = DAT_00112404;
    *(undefined4 *)(param_1 + 0x13c) = DAT_00112408;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  iVar1 = (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe));
  if (iVar1 + 0x4000U < 0x8001) {
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),6,4000,100);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0xa3c,param_1 + 0xa42,
                 0x4300);
    return;
  }
  uVar2 = DAT_00112410;
  if (-1 < iVar1) {
    uVar2 = 0x2000;
  }
  FUN_00375a18(param_1 + 0xa3e,uVar2,6,DAT_0011240c,0x100);
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0xc,1000,100);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  return;
}
