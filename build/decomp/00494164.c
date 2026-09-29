// OoT3D decomp @ 00494164  name=FUN_00494164  size=400

uint FUN_00494164(int *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_80 [72];
  undefined4 local_38;
  int local_34;
  undefined1 local_30;
  undefined1 auStack_2c [12];

  uVar2 = FUN_0048be78(param_1[1]);
  uVar3 = (**(code **)(*param_1 + 0xc))(param_1,uVar2);
  if (uVar3 == 0) {
    local_38 = 0xffffffff;
    local_30 = 0;
    iVar4 = FUN_00495920(param_1[1],param_2,&local_38);
    iVar7 = 0;
    if (iVar4 != 0) {
      iVar7 = local_34;
    }
    if (iVar4 != 0 && iVar7 != 0) {
      iVar4 = FUN_002c46dc(param_1,uVar2,auStack_80,0x2c,0,param_4);
      if (iVar4 == 0x2c) {
        uVar3 = FUN_002c4850(auStack_80);
        uVar5 = FUN_00498dec(auStack_80);
        if (uVar5 <= uVar3) {
          iVar4 = uVar3 + iVar7 * 4 + 4;
          uVar5 = (**(code **)(*param_3 + 8))(param_3,iVar4);
          uVar6 = FUN_0030197c();
          iVar7 = FUN_0030196c();
          bVar11 = uVar5 <= uVar6;
          bVar10 = uVar6 == uVar5;
          if (!bVar11 || bVar10) {
            uVar9 = uVar5 + iVar4;
            bVar11 = iVar7 + uVar6 <= uVar9;
            bVar10 = uVar9 == iVar7 + uVar6;
          }
          if ((!bVar11 || bVar10) &&
             (uVar6 = FUN_002c46dc(param_1,uVar2,uVar5,uVar3,0,param_4), uVar6 == uVar3)) {
            FUN_0030c3b4(auStack_2c,uVar5,1);
            puVar1 = DAT_004942f4;
            puVar8 = (undefined1 *)(uVar5 + uVar3);
            *puVar8 = *DAT_004942f4;
            puVar8[1] = puVar1[1];
            puVar8[2] = puVar1[2];
            puVar8[3] = puVar1[3];
            FUN_002c4814(auStack_2c);
            (**(code **)(*param_1 + 8))(param_1,uVar2,uVar5);
            return uVar5;
          }
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}
