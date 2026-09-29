// OoT3D decomp @ 002bb43c  name=FUN_002bb43c  size=308

undefined4
FUN_002bb43c(undefined4 param_1,int param_2,int param_3,int *param_4,undefined4 *param_5,
            ushort *param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_50 [12];

  puVar3 = DAT_002bb574;
  uVar2 = DAT_002bb570;
  if (*param_6 != DAT_002bb570) {
    puVar10 = DAT_002bb574 + 3;
    psVar9 = (short *)(*(int *)(param_2 + 0x15d8) + (uint)*param_6 * 4);
    while( true ) {
      puVar4 = DAT_002bb578;
      iVar8 = *(int *)(param_2 + 0x15d0) + *psVar9 * 0x20;
      if (((uint)*(ushort *)(iVar8 + 2) & param_3 << 0xd) == 0) {
        iVar5 = *(int *)(param_2 + 0x15d4);
        puVar6 = (undefined4 *)(iVar5 + (*(ushort *)(iVar8 + 2) & 0xffff1fff) * 0xc);
        uVar7 = puVar6[1];
        uVar11 = puVar6[2];
        *DAT_002bb578 = *puVar6;
        puVar4[1] = uVar7;
        puVar4[2] = uVar11;
        puVar6 = (undefined4 *)(iVar5 + (*(ushort *)(iVar8 + 4) & 0xffff1fff) * 0xc);
        uVar7 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar3 = *puVar6;
        puVar3[1] = uVar7;
        puVar3[2] = uVar11;
        puVar6 = (undefined4 *)(iVar5 + (uint)*(ushort *)(iVar8 + 6) * 0xc);
        uVar7 = puVar6[1];
        uVar11 = puVar6[2];
        *puVar10 = *puVar6;
        puVar3[4] = uVar7;
        puVar3[5] = uVar11;
        puVar4[9] = *(undefined4 *)(iVar8 + 0x14);
        puVar4[10] = *(undefined4 *)(iVar8 + 0x18);
        puVar4[0xb] = *(undefined4 *)(iVar8 + 0x1c);
        puVar4[0xc] = *(undefined4 *)(iVar8 + 0x10);
        uVar7 = param_5[1];
        uVar11 = param_5[2];
        puVar4[-4] = *param_5;
        puVar4[-3] = uVar7;
        puVar4[-2] = uVar11;
        puVar4[-1] = param_1;
        iVar5 = FUN_0031e230(puVar4 + -4,puVar4,auStack_50);
        if (iVar5 != 0) {
          *param_4 = iVar8;
          return 1;
        }
        uVar1 = psVar9[1];
      }
      else {
        uVar1 = psVar9[1];
      }
      if (uVar1 == uVar2) break;
      psVar9 = (short *)(*(int *)(param_2 + 0x15d8) + (uint)uVar1 * 4);
    }
  }
  return 0;
}
