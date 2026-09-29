// OoT3D decomp @ 0030a884  name=FUN_0030a884  size=288

uint FUN_0030a884(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int unaff_r5;
  bool bVar4;
  bool bVar5;
  int local_2c [3];

  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (uVar1 != 0) {
    return uVar1;
  }
  local_2c[0] = -1;
  local_2c[1] = 0xffffffff;
  local_2c[2] = 0;
  iVar2 = FUN_002c29a0(param_1[1],param_2,local_2c);
  if (iVar2 != 0) {
    unaff_r5 = local_2c[0];
  }
  if ((iVar2 != 0 && unaff_r5 != 0) &&
     (uVar1 = (**(code **)(*param_3 + 8))(param_3,unaff_r5), uVar1 != 0)) {
    if (param_5 != 0) {
      uVar3 = FUN_0030197c();
      iVar2 = FUN_0030196c();
      bVar5 = uVar1 <= uVar3;
      bVar4 = uVar3 == uVar1;
      if (!bVar5 || bVar4) {
        bVar5 = iVar2 + uVar3 <= uVar1 + unaff_r5;
        bVar4 = uVar1 + unaff_r5 == iVar2 + uVar3;
      }
      if (bVar5 && !bVar4) goto LAB_0030a930;
    }
    iVar2 = FUN_002c46dc(param_1,param_2,uVar1,unaff_r5,0,param_4);
    if (iVar2 == unaff_r5) {
      FUN_00493528(uVar1,unaff_r5);
      goto LAB_0030a96c;
    }
  }
LAB_0030a930:
  uVar1 = 0;
LAB_0030a96c:
  if (uVar1 == 0) {
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,uVar1);
  return uVar1;
}
