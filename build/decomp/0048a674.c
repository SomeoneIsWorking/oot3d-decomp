// OoT3D decomp @ 0048a674  name=FUN_0048a674  size=400

undefined4 FUN_0048a674(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  uint *puStack_2c;
  int iStack_28;

  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  iStack_28 = param_4;
  local_38 = FUN_0048be88(param_2);
  uVar7 = *param_3;
  uVar1 = uVar7 + local_38 * 0x48 + 3 & 0xfffffffc;
  if (0 < (int)(uVar1 - param_4)) {
    return 0;
  }
  *param_3 = uVar1;
  *(uint *)(param_1 + 0x24) = uVar7;
  uVar1 = 0;
  *(uint *)(param_1 + 0x20) = local_38;
  if (local_38 != 0) {
    do {
      iVar2 = 0;
      if (uVar7 != 0) {
        iVar2 = FUN_00494068();
      }
      local_44 = 0;
      local_40 = 0;
      local_3c = iVar2;
      iVar2 = FUN_0048bea4(local_30,uVar1 | 0x4000000,&local_44);
      if ((iVar2 != 0) && (FUN_00494004(local_3c,local_44), local_40 != 0)) {
        iVar2 = 0;
        if (0 < local_44) {
          do {
            iVar5 = local_40;
            uVar6 = *param_3;
            uVar3 = uVar6 + 0x23 & 0xfffffffc;
            if ((int)(uVar3 - param_4) < 1) {
              *param_3 = uVar3;
              iVar4 = 0;
              if (uVar6 != 0) {
                iVar4 = FUN_00494120(uVar6);
              }
              uVar6 = *param_3 + 0x1f & 0xffffffe0;
              uVar3 = uVar6 + iVar5 + 3 & 0xfffffffc;
              *param_3 = uVar6;
              if (0 < (int)(uVar3 - param_4)) goto LAB_0048a7a8;
              *param_3 = uVar3;
              iVar5 = FUN_004940f0(iVar4,uVar6,iVar5);
              if (iVar5 == 0) goto LAB_0048a7a8;
            }
            else {
LAB_0048a7a8:
              iVar4 = 0;
            }
            if (iVar4 == 0) {
              return 0;
            }
            FUN_00494050(local_3c);
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_44);
        }
        *(int *)(local_3c + 0x28) = local_44;
      }
      uVar1 = uVar1 + 1;
      uVar7 = uVar7 + 0x48;
    } while (uVar1 < local_38);
  }
  return 1;
}
