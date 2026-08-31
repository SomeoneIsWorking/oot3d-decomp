// OoT3D decomp @ 00454760  name=FUN_00454760  size=244

/* WARNING: Removing unreachable block (ram,0x0034339c) */
/* WARNING: Removing unreachable block (ram,0x003433a8) */
/* WARNING: Removing unreachable block (ram,0x003433ac) */
/* WARNING: Removing unreachable block (ram,0x003433b0) */
/* WARNING: Removing unreachable block (ram,0x003433b4) */
/* WARNING: Removing unreachable block (ram,0x003433b8) */
/* WARNING: Removing unreachable block (ram,0x003433bc) */

undefined8 FUN_00454760(int *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar6;
  byte extraout_r3;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  byte extraout_r12;
  uint uVar17;
  bool bVar18;
  bool bVar19;

  param_1[4] = param_3;
  iVar2 = (**(code **)(*(int *)*puRam004547b4 + 0xc))
                    ((int *)*puRam004547b4,param_3 + 0x10,uRam004547b8,0x30);
  *param_1 = iVar2;
  puVar3 = (uint *)(iVar2 + 0xfU & 0xfffffff0);
  param_1[2] = (int)puVar3;
  bVar16 = extraout_r12;
  bVar6 = extraout_r3;
  if (3 < param_3) {
    uVar17 = 0;
    uVar8 = (uint)param_2 & 3;
    puVar5 = puVar3;
    if (uVar8 == 0) {
      uVar8 = param_3 - 0x20;
      uVar17 = 0;
      if (0x1f < param_3) {
        uVar17 = *param_2;
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        HintPreloadData(param_2 + 0x14);
        uVar12 = param_2[4];
        uVar13 = param_2[5];
        uVar14 = param_2[6];
        uVar15 = param_2[7];
        param_2 = param_2 + 8;
        while( true ) {
          *puVar3 = uVar17;
          puVar3[1] = uVar9;
          puVar3[2] = uVar10;
          puVar3[3] = uVar11;
          bVar18 = 0x1f < uVar8;
          uVar8 = uVar8 - 0x20;
          puVar3[4] = uVar12;
          puVar3[5] = uVar13;
          puVar3[6] = uVar14;
          puVar3[7] = uVar15;
          puVar3 = puVar3 + 8;
          if (bVar18) {
            uVar17 = *param_2;
            uVar9 = param_2[1];
            uVar10 = param_2[2];
            uVar11 = param_2[3];
            param_2 = param_2 + 4;
          }
          HintPreloadData(param_2 + 0x10);
          if (!bVar18) break;
          uVar12 = *param_2;
          uVar13 = param_2[1];
          uVar14 = param_2[2];
          uVar15 = param_2[3];
          param_2 = param_2 + 4;
        }
      }
      if ((bool)((byte)(uVar8 >> 4) & 1)) {
        uVar17 = *param_2;
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        param_2 = param_2 + 4;
        *puVar3 = uVar17;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar3 = puVar3 + 4;
      }
      if ((int)(uVar8 << 0x1c) < 0) {
        uVar17 = *param_2;
        uVar9 = param_2[1];
        param_2 = param_2 + 2;
        *puVar3 = uVar17;
        puVar3[1] = uVar9;
        puVar3 = puVar3 + 2;
      }
      puVar1 = puVar3;
      puVar5 = param_2;
      if ((bool)((byte)(uVar8 >> 2) & 1)) {
        puVar5 = param_2 + 1;
        uVar17 = *param_2;
        puVar1 = puVar3 + 1;
        *puVar3 = uVar17;
      }
      uVar7 = (undefined2)uVar17;
      if ((uVar8 & 3) != 0) {
        bVar19 = (bool)((byte)(uVar8 >> 1) & 1);
        uVar8 = uVar8 << 0x1f;
        bVar18 = (int)uVar8 < 0;
        puVar3 = puVar5;
        if (bVar19) {
          puVar3 = (uint *)((int)puVar5 + 2);
          uVar7 = (undefined2)*puVar5;
        }
        puVar5 = puVar3;
        if (bVar18) {
          puVar5 = (uint *)((int)puVar3 + 1);
          uVar8 = (uint)(byte)*puVar3;
        }
        puVar3 = puVar1;
        if (bVar19) {
          puVar3 = (uint *)((int)puVar1 + 2);
          *(undefined2 *)puVar1 = uVar7;
        }
        puVar1 = puVar3;
        if (bVar18) {
          puVar1 = (uint *)((int)puVar3 + 1);
          *(byte *)puVar3 = (byte)uVar8;
        }
        return CONCAT44(puVar5,puVar1);
      }
      return CONCAT44(puVar5,puVar1);
    }
    while( true ) {
      bVar16 = (byte)uVar17;
      if (param_3 < 8) break;
      puVar3 = param_2 + 1;
      uVar8 = *param_2;
      param_2 = param_2 + 2;
      uVar17 = *puVar3;
      puVar3 = puVar5 + 1;
      *puVar5 = uVar8;
      puVar5 = puVar5 + 2;
      *puVar3 = uVar17;
      param_3 = param_3 - 8;
    }
    param_3 = param_3 - 4;
    puVar3 = puVar5;
    if (-1 < (int)param_3) {
      uVar8 = *param_2;
      puVar3 = puVar5 + 1;
      *puVar5 = uVar8;
      param_2 = param_2 + 1;
    }
    bVar6 = (byte)uVar8;
  }
  bVar19 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar18 = (int)param_3 < 0;
  if (bVar19) {
    pbVar4 = (byte *)((int)param_2 + 1);
    bVar6 = (byte)*param_2;
    param_2 = (uint *)((int)param_2 + 2);
    bVar16 = *pbVar4;
  }
  puVar5 = param_2;
  if (bVar18) {
    puVar5 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar19) {
    pbVar4 = (byte *)((int)puVar3 + 1);
    *(byte *)puVar3 = bVar6;
    puVar3 = (uint *)((int)puVar3 + 2);
    *pbVar4 = bVar16;
  }
  puVar1 = puVar3;
  if (bVar18) {
    puVar1 = (uint *)((int)puVar3 + 1);
    *(byte *)puVar3 = (byte)param_3;
  }
  return CONCAT44(puVar5,puVar1);
}
