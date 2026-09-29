// OoT3D decomp @ 0030e990  name=FUN_0030e990  size=464

int FUN_0030e990(uint *param_1,uint *param_2,undefined4 *param_3,uint *param_4)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  int unaff_r6;
  ushort *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 auStack_15c [256];
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint *puStack_34;
  uint *local_30;
  undefined4 *local_2c;
  uint *puStack_28;

  uVar6 = param_4[1];
  puVar7 = (ushort *)param_4[2];
  uVar3 = DAT_0030eb60 ^ *param_4;
  if (0 < (int)(uVar6 * 2) >> 1) {
    puVar2 = puVar7 + -1;
    if ((int)(uVar6 << 0x1f) < 0) {
      uVar3 = (uint)*puVar7 ^ (uVar3 >> 5 | uVar3 << 0x1b);
      puVar2 = puVar7;
    }
    uVar1 = puVar2[1];
    for (iVar5 = (int)(uVar6 * 2) >> 2; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar3 = (uint)uVar1 ^ (uVar3 >> 5 | uVar3 << 0x1b);
      uVar1 = puVar2[3];
      uVar3 = (uint)puVar2[2] ^ (uVar3 >> 5 | uVar3 << 0x1b);
      puVar2 = puVar2 + 2;
    }
  }
  local_38 = 0;
  puStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  FUN_00339384(uVar3,param_1[2]);
  iVar5 = param_1[1] + (uint)CARRY4(*param_1,extraout_r1 * 4);
  iVar5 = FUN_00302540(param_1[3],iVar5,*param_1 + extraout_r1 * 4,iVar5,&local_5c,4);
  if ((-1 < iVar5) && (iVar5 = DAT_0030eb64, local_5c != 0xffffffff)) {
    uVar3 = local_5c;
    do {
      puVar9 = auStack_15c;
      uVar4 = param_1[4] + uVar3;
      iVar8 = param_1[5] + (uint)CARRY4(param_1[4],uVar3);
      iVar5 = FUN_00302540(param_1[7],param_1[5],uVar4,iVar8,&local_58,0x20,uVar4,puVar9);
      if ((-1 < iVar5) &&
         ((unaff_r6 = local_3c, local_3c == 0 ||
          (iVar5 = FUN_00302540(param_1[7],0,uVar4 + 0x20,iVar8 + (uint)(0xffffffdf < uVar4),puVar9,
                                local_3c), -1 < iVar5)))) {
        iVar5 = 0;
      }
      if (iVar5 < 0) break;
      if (*param_4 == local_58 && uVar6 * 2 == unaff_r6) {
        uVar4 = thunk_FUN_0030250c(puVar7,auStack_15c,uVar6 & 0x7fffffff);
        iVar5 = 1 - uVar4;
        if (1 < uVar4) {
          iVar5 = 0;
        }
        if (iVar5 != 0) {
          iVar5 = 0;
          local_38 = uVar3;
          break;
        }
      }
      iVar5 = DAT_0030eb64;
      uVar3 = local_40;
    } while (local_40 != 0xffffffff);
  }
  if (-1 < iVar5) {
    *local_30 = local_38;
    *local_2c = local_54;
    local_2c[1] = uStack_50;
    local_2c[2] = uStack_4c;
    local_2c[3] = uStack_48;
    local_2c[4] = uStack_44;
    iVar5 = 0;
  }
  return iVar5;
}
