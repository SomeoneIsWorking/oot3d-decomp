// OoT3D decomp @ 0041acc0  name=FUN_0041acc0  size=392

void FUN_0041acc0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_21c [123];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;

  iVar1 = FUN_00422d20();
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,DAT_0041ae48,0);
    FUN_002fb928(0);
  }
  iVar1 = FUN_00422dfc();
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,DAT_0041ae48,0);
    FUN_002fb928(0);
  }
  iVar1 = FUN_00423490();
  if (iVar1 < 0) {
    FUN_0030e3ac(iVar1,DAT_0041ae48,0);
    FUN_002fb928(0);
  }
  local_30 = 4;
  local_28 = 0x4000;
  local_1c = 0x4000;
  local_18 = 0x2000;
  local_24 = 0x20000;
  local_14 = 1;
  local_13 = 1;
  local_2c = 1;
  local_20 = 3;
  uVar2 = FUN_00423de0(&local_30);
  local_21c[0] = 0;
  uVar3 = FUN_003222dc(param_1[1],uVar2,4,0,0);
  param_1[10] = uVar3;
  FUN_00423bbc(&local_30,uVar3,uVar2);
  uVar2 = FUN_00313b60();
  FUN_004225e8(uVar2,param_1[1]);
  uVar2 = FUN_00324fd0(DAT_0041ae4c);
  local_21c[0] = 0;
  uVar3 = FUN_003222dc(param_1[1],uVar2,4,0,0);
  param_1[0xc] = uVar3;
  FUN_00324f44(local_21c,DAT_0041ae4c,DAT_0041ae50);
  uVar2 = FUN_00324eac(local_21c,uVar3,uVar2,0,0);
  *param_1 = uVar2;
  return;
}
