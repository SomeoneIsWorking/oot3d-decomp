// OoT3D decomp @ 00493dbc  name=FUN_00493dbc  size=116

void FUN_00493dbc(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r2;
  int iVar3;
  bool bVar4;

  uVar1 = FUN_0030dd98();
  FUN_00497e24(uVar1,param_1);
  uVar2 = param_1[2];
  if ((uVar2 & 0x70) == 0) {
    param_1[2] = -1;
  }
  else {
    bVar4 = (uVar2 & 0x20) == 0;
    iVar3 = extraout_r2;
    if (bVar4) {
      iVar3 = *param_1;
    }
    if (bVar4) {
      param_1[1] = iVar3;
    }
    param_1[2] = uVar2 & 7;
  }
  param_1[6] = param_1[6] & 7;
  if (*param_1 == 0) {
    param_1[2] = -1;
  }
  if (param_1[1] == 0) {
    param_1[2] = -1;
  }
  if (param_1[4] == 0) {
    param_1[6] = -1;
  }
  param_1[5] = param_1[4];
  return;
}
