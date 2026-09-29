// OoT3D decomp @ 00435e60  name=FUN_00435e60  size=84

int FUN_00435e60(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;

  iVar1 = FUN_00449fcc(*param_1 & 0xfffffffe);
  if (-1 < iVar1) {
    param_1[3] = param_3;
    param_1[4] = param_4;
    uVar2 = param_1[2];
    if ((int)(param_4 - (uVar2 + (param_3 < param_1[1]))) < 0 !=
        (SBORROW4(param_4,uVar2) != SBORROW4(param_4 - uVar2,(uint)(param_3 < param_1[1])))) {
      param_1[1] = param_1[3];
      param_1[2] = param_1[4];
    }
  }
  return iVar1;
}
