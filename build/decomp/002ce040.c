// OoT3D decomp @ 002ce040  name=FUN_002ce040  size=212

undefined4 FUN_002ce040(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uVar3;
  undefined4 uStack_18;
  
  piVar2 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  coproc_moveto_Data_Synchronization(0);
  uStack_18 = param_4;
  while (FUN_002dbd08(&uStack_18,param_1 + 5), param_1[10] < 1) {
    FUN_002c4464(&uStack_18);
    FUN_002c43ac(param_1 + 1);
  }
  uVar3 = *(undefined4 *)(*param_1 + param_1[9] * 4);
  FUN_00339384(param_1[9] + 1,param_1[8]);
  param_1[9] = extraout_r1;
  param_1[10] = param_1[10] + -1;
  if (0 < param_1[0xc]) {
    FUN_002c44cc(param_1 + 3,1);
  }
  FUN_002c4464(&uStack_18);
  param_1 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  coproc_moveto_Data_Synchronization(0);
  return uVar3;
}

