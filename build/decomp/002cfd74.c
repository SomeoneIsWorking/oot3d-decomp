// OoT3D decomp @ 002cfd74  name=FUN_002cfd74  size=136

void FUN_002cfd74(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    FUN_003102dc(*param_1,0);
  }
  iVar1 = FUN_0030f0ec();
  if (iVar1 != 0) {
    uVar2 = FUN_0030f0ec();
    FUN_002dd484(uVar2,param_1,DAT_002cfdfc,0);
    param_1[1] = (int)param_2;
    param_1[2] = param_3;
    if (*param_1 != 0) {
      *(undefined4 *)(*param_1 + 0xb8) = *param_2;
    }
    if (*param_1 != 0) {
      FUN_002d4a10(*(float *)param_1[2] * (float)param_1[3],*param_1,0);
      return;
    }
  }
  return;
}

