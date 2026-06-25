// OoT3D decomp @ 003604f0  name=FUN_003604f0  size=100

void FUN_003604f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint in_fpscr;
  
  piVar1 = (int *)FUN_0034807c(*(undefined4 *)(param_1 + 4),param_3);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*piVar1 + *(int *)(*piVar1 + 0x14) + 0x10);
  }
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(DAT_00360558,DAT_00360554,uVar2,DAT_00360554,param_1,param_2,param_3,2);
  return;
}

