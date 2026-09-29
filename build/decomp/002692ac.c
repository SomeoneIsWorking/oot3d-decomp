// OoT3D decomp @ 002692ac  name=FUN_002692ac  size=1624

void FUN_002692ac(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  int unaff_r6;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;

  if (*(short *)(param_1 + 0x1b2) == 0) {
    FUN_00372224(&local_44,param_1 + 0x148);
    iVar4 = *(int *)(param_1 + 0x9b8);
    if (iVar4 != 0) {
      switch(*(undefined2 *)(param_1 + 0x1b0)) {
      case 0:
        FUN_00369178(iVar4,0x6c);
        break;
      case 1:
        FUN_00369178(iVar4,0x6d);
        break;
      case 2:
        FUN_00369178(iVar4,0x6e);
        break;
      case 3:
        FUN_00369178(iVar4,0x71);
        break;
      case 4:
        FUN_00369178(iVar4,0x70);
        break;
      case 5:
        FUN_0036932c(iVar4,0);
        FUN_0036932c(iVar4,1);
        FUN_0036932c(iVar4,2);
        FUN_0036932c(iVar4,3);
        FUN_0036932c(iVar4,4);
        FUN_0037266c(iVar4,5);
      }
      *(undefined1 *)(iVar4 + 0xac) = 1;
      FUN_003721e0(iVar4,&local_44);
      FUN_00372170(iVar4,0);
    }
  }
  if (*(short *)(param_1 + 0x1a8) == 3) {
    puVar3 = (undefined4 *)(param_1 + 0x22c);
    FUN_00372224(&local_5c,param_1 + 0x148);
    fVar2 = DAT_001e5394;
    fVar1 = DAT_001e5390;
    iVar4 = 0;
    if (0 < *(short *)(param_1 + 0x1b4)) {
      do {
        bVar5 = *(char *)((int)puVar3 + 0x12) != '\0';
        if (bVar5) {
          unaff_r6 = *(int *)(param_1 + iVar4 * 4 + 0x9bc);
        }
        if (bVar5 && unaff_r6 != 0) {
          local_50 = *puVar3;
          local_40 = puVar3[1];
          local_30 = puVar3[2];
          local_34 = (float)VectorSignedToFloat((int)*(short *)(puVar3 + 3),
                                                (byte)(in_fpscr >> 0x15) & 3);
          local_34 = local_34 * fVar1;
          local_5c = local_34 * 1.0;
          local_4c = local_34 * 0.0;
          local_3c = local_34 * 0.0;
          local_58 = local_34 * 0.0;
          local_48 = local_34 * 1.0;
          local_38 = local_34 * 0.0;
          local_54 = local_34 * 0.0;
          local_44 = local_34 * 0.0;
          local_34 = local_34 * 1.0;
          fVar11 = (float)puVar3[8];
          uVar6 = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar2) << 0x1e;
          if (!SUB41(uVar6 >> 0x1e,0)) {
            fVar7 = (float)FUN_003727f0(fVar11);
            fVar8 = (float)FUN_00372674(fVar11);
            fVar11 = local_54 * fVar7;
            local_54 = local_54 * fVar8 - local_58 * fVar7;
            fVar9 = local_44 * fVar7;
            local_44 = local_44 * fVar8 - local_48 * fVar7;
            fVar10 = local_34 * fVar7;
            local_34 = local_34 * fVar8 - local_38 * fVar7;
            local_58 = local_58 * fVar8 + fVar11;
            local_48 = local_48 * fVar8 + fVar9;
            local_38 = local_38 * fVar8 + fVar10;
          }
          fVar11 = (float)puVar3[9];
          uVar6 = uVar6 & 0xfffffff | (uint)(fVar11 == fVar2) << 0x1e;
          if (!SUB41(uVar6 >> 0x1e,0)) {
            fVar9 = (float)FUN_003727f0(fVar11);
            fVar11 = (float)FUN_00372674(fVar11);
            fVar10 = local_5c * fVar9;
            local_5c = local_5c * fVar11 - local_54 * fVar9;
            local_54 = fVar10 + local_54 * fVar11;
            fVar10 = local_4c * fVar9;
            local_4c = local_4c * fVar11 - local_44 * fVar9;
            local_44 = fVar10 + local_44 * fVar11;
            fVar10 = local_3c * fVar9;
            local_3c = local_3c * fVar11 - local_34 * fVar9;
            local_34 = fVar10 + local_34 * fVar11;
          }
          fVar11 = (float)puVar3[10];
          in_fpscr = uVar6 & 0xfffffff | (uint)(fVar11 == fVar2) << 0x1e;
          if (!SUB41(in_fpscr >> 0x1e,0)) {
            fVar7 = (float)FUN_003727f0(fVar11);
            fVar8 = (float)FUN_00372674(fVar11);
            fVar11 = local_58 * fVar7;
            local_58 = local_58 * fVar8 - local_5c * fVar7;
            fVar9 = local_48 * fVar7;
            local_48 = local_48 * fVar8 - local_4c * fVar7;
            fVar10 = local_38 * fVar7;
            local_38 = local_38 * fVar8 - local_3c * fVar7;
            local_5c = local_5c * fVar8 + fVar11;
            local_4c = local_4c * fVar8 + fVar9;
            local_3c = local_3c * fVar8 + fVar10;
          }
          switch(*(undefined2 *)(puVar3 + 4)) {
          case 0:
            FUN_0037266c(unaff_r6,0);
            FUN_0036932c(unaff_r6,1);
            FUN_0036932c(unaff_r6,2);
            FUN_0036932c(unaff_r6,3);
            FUN_0036932c(unaff_r6,4);
            FUN_0036932c(unaff_r6,5);
            break;
          case 1:
            FUN_0036932c(unaff_r6,0);
            FUN_0037266c(unaff_r6,1);
            FUN_0036932c(unaff_r6,2);
            FUN_0036932c(unaff_r6,3);
            FUN_0036932c(unaff_r6,4);
            FUN_0036932c(unaff_r6,5);
            break;
          case 2:
            FUN_0036932c(unaff_r6,0);
            FUN_0036932c(unaff_r6,1);
            FUN_0037266c(unaff_r6,2);
            FUN_0036932c(unaff_r6,3);
            FUN_0036932c(unaff_r6,4);
            FUN_0036932c(unaff_r6,5);
            break;
          case 3:
            FUN_0036932c(unaff_r6,0);
            FUN_0036932c(unaff_r6,1);
            FUN_0036932c(unaff_r6,2);
            FUN_0037266c(unaff_r6,3);
            FUN_0036932c(unaff_r6,4);
            FUN_0036932c(unaff_r6,5);
            break;
          case 4:
            FUN_0036932c(unaff_r6,0);
            FUN_0036932c(unaff_r6,1);
            FUN_0036932c(unaff_r6,2);
            FUN_0036932c(unaff_r6,3);
            FUN_0037266c(unaff_r6,4);
            FUN_0036932c(unaff_r6,5);
            break;
          case 5:
            FUN_0036932c(unaff_r6,0);
            FUN_0036932c(unaff_r6,1);
            FUN_0036932c(unaff_r6,2);
            FUN_0036932c(unaff_r6,3);
            FUN_0036932c(unaff_r6,4);
            FUN_0037266c(unaff_r6,5);
          }
          *(undefined1 *)(unaff_r6 + 0xac) = 1;
          FUN_003721e0(unaff_r6,&local_5c);
          FUN_00372170(unaff_r6,0);
        }
        puVar3 = puVar3 + 0xb;
        iVar4 = (int)(short)((short)iVar4 + 1);
      } while (iVar4 < *(short *)(param_1 + 0x1b4));
    }
    return;
  }
  return;
}
