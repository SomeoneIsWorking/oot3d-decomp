// OoT3D decomp @ 001e7f64  name=FUN_001e7f64  size=92

void FUN_001e7f64(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_001e7fc0;
  if (iVar3 != 0) {
    FUN_0037422c(DAT_001e7fc0,param_1 + 0x1a4,7);
    uVar2 = DAT_001e7fc4;
    *(undefined4 *)(param_1 + 0x6c) = uVar1;
    *(undefined4 *)(param_1 + 0x7dc) = uVar2;
  }
  FUN_00370378(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),0xb6);
  return;
}
