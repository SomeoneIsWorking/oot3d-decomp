// OoT3D decomp @ 004000a0  name=FUN_004000a0  size=96

undefined4 *
FUN_004000a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_18;

  *param_1 = DAT_00400100;
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  if (iVar2 != 0 || iVar1 != 0) {
    local_18 = param_4;
    uVar3 = FUN_0030e680(param_1);
    local_18 = (undefined4)uVar3;
    FUN_0030e5d8(&local_18,(int)((ulonglong)uVar3 >> 0x20),iVar1,iVar2);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return param_1;
}
