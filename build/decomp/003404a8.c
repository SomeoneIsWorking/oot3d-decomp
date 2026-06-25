// OoT3D decomp @ 003404a8  name=FUN_003404a8  size=112

void FUN_003404a8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint in_fpscr;
  
  piVar1 = (int *)FUN_0034807c(*(undefined4 *)(param_2 + 4),param_4);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(*piVar1 + *(int *)(*piVar1 + 0x14) + 0x10);
  }
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(param_1,DAT_00340518,uVar2,DAT_00340518,param_2,param_3,param_4,0);
  return;
}

