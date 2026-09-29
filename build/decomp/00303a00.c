// OoT3D decomp @ 00303a00  name=FUN_00303a00  size=144

undefined8
FUN_00303a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  *param_1 = DAT_00303a90;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  FUN_002ea7b0(param_1,param_2,param_3,param_4,param_5,param_6);
  puVar3 = param_1 + 0xc;
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return CONCAT44(uVar2,param_1);
}
