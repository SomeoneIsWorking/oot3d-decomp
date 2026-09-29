// OoT3D decomp @ 00417188  name=FUN_00417188  size=144

void FUN_00417188(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;

  local_10 = param_4;
  if (*param_1 == 0) {
    iVar1 = FUN_00313ce0(0x1500);
    iVar3 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_0041b6a8();
      iVar3 = FUN_0041b868(iVar1,0,uVar2);
    }
    *param_1 = iVar3;
  }
  FUN_0041b7d8();
  local_10 = 1;
  FUN_0041b7f0(*param_1,&local_10);
  FUN_0041b7e4(*param_1);
  iVar3 = DAT_00417218;
  param_1[4] = DAT_00417218;
  param_1[5] = iVar3;
  param_1[6] = iVar3;
  param_1[0xd] = iVar3;
  param_1[0xe] = iVar3;
  param_1[0xf] = iVar3;
  return;
}
