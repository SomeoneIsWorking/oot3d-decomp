// OoT3D decomp @ 0030a9a4  name=FUN_0030a9a4  size=360

undefined4
FUN_0030a9a4(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 auStack_30 [12];

  uVar1 = FUN_0048be78(param_1[1]);
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1,uVar1);
  if ((iVar2 != 0) || (iVar2 = FUN_00494164(param_1,param_2,param_4,param_5), iVar2 != 0)) {
    FUN_0030c3b4(auStack_30,iVar2,1);
    iVar2 = FUN_0030a560(auStack_30,param_3);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_004958d8(auStack_30,param_3);
    uVar3 = (**(code **)(*param_4 + 8))(param_4,iVar2 + 0x20);
    uVar4 = FUN_0030197c();
    iVar5 = FUN_0030196c();
    bVar9 = uVar3 <= uVar4;
    bVar8 = uVar4 == uVar3;
    if (!bVar9 || bVar8) {
      uVar6 = uVar3 + iVar2 + 0x20;
      bVar9 = iVar5 + uVar4 <= uVar6;
      bVar8 = uVar6 == iVar5 + uVar4;
    }
    if (!bVar9 || bVar8) {
      local_50 = DAT_0030ab0c;
      uStack_4c = uVar1;
      local_48 = param_3;
      FUN_0034338c(uVar3,&local_50,0x20);
      iVar7 = uVar3 + 0x20;
      local_50 = FUN_004958f0(auStack_30,param_3);
      uStack_4c = param_5;
      iVar5 = FUN_002c46dc(param_1,uVar1,iVar7,iVar2);
      if (iVar5 == iVar2) {
        FUN_0030c388(auStack_30,param_3,iVar7);
        FUN_00493528(iVar7,iVar2);
        return 1;
      }
    }
  }
  return 0;
}
