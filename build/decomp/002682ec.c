// OoT3D decomp @ 002682ec  name=FUN_002682ec  size=752

void FUN_002682ec(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  puVar4 = (undefined4 *)(param_1 + 0x1e0);
  iVar3 = FUN_00363c10(param_2 + 0x3a58,0x92);
  fVar2 = DAT_002685e0;
  fVar1 = DAT_002685dc;
  if (-1 < iVar3) {
    iVar3 = 0;
    do {
      if (*(char *)(puVar4 + 4) != '\0') {
        local_58 = *puVar4;
        local_48 = puVar4[1];
        local_38 = puVar4[2];
        local_64 = 1.0;
        local_60 = 0.0;
        local_5c = 0.0;
        local_54 = 0.0;
        local_40 = 0.0;
        local_50 = 1.0;
        local_4c = 0.0;
        local_44 = 0.0;
        local_3c = 1.0;
        fVar10 = (float)puVar4[8] * fVar2;
        local_34 = local_58;
        local_30 = local_48;
        local_2c = local_38;
        if (fVar10 != fVar1) {
          fVar6 = (float)FUN_003727f0(fVar10);
          fVar7 = (float)FUN_00372674(fVar10);
          fVar10 = local_5c * fVar6;
          local_5c = local_5c * fVar7 - local_60 * fVar6;
          fVar8 = local_4c * fVar6;
          local_4c = local_4c * fVar7 - local_50 * fVar6;
          fVar9 = local_3c * fVar6;
          local_3c = local_3c * fVar7 - local_40 * fVar6;
          local_60 = local_60 * fVar7 + fVar10;
          local_50 = local_50 * fVar7 + fVar8;
          local_40 = local_40 * fVar7 + fVar9;
        }
        fVar10 = (float)puVar4[9] * fVar2;
        if (fVar10 != fVar1) {
          fVar8 = (float)FUN_003727f0(fVar10);
          fVar10 = (float)FUN_00372674(fVar10);
          fVar9 = local_64 * fVar8;
          local_64 = local_64 * fVar10 - local_5c * fVar8;
          local_5c = fVar9 + local_5c * fVar10;
          fVar9 = local_54 * fVar8;
          local_54 = local_54 * fVar10 - local_4c * fVar8;
          local_4c = fVar9 + local_4c * fVar10;
          fVar9 = local_44 * fVar8;
          local_44 = local_44 * fVar10 - local_3c * fVar8;
          local_3c = fVar9 + local_3c * fVar10;
        }
        fVar10 = (float)puVar4[10] * fVar2;
        if (fVar10 != fVar1) {
          fVar6 = (float)FUN_003727f0(fVar10);
          fVar7 = (float)FUN_00372674(fVar10);
          fVar10 = local_60 * fVar6;
          local_60 = local_60 * fVar7 - local_64 * fVar6;
          fVar8 = local_50 * fVar6;
          local_50 = local_50 * fVar7 - local_54 * fVar6;
          fVar9 = local_40 * fVar6;
          local_40 = local_40 * fVar7 - local_44 * fVar6;
          local_64 = local_64 * fVar7 + fVar10;
          local_54 = local_54 * fVar7 + fVar8;
          local_44 = local_44 * fVar7 + fVar9;
        }
        fVar10 = (float)puVar4[3];
        iVar5 = param_1 + iVar3 * 4;
        local_64 = local_64 * fVar10;
        local_54 = local_54 * fVar10;
        local_44 = local_44 * fVar10;
        local_60 = local_60 * fVar10;
        local_50 = local_50 * fVar10;
        local_40 = local_40 * fVar10;
        local_5c = local_5c * fVar10;
        local_4c = local_4c * fVar10;
        local_3c = local_3c * fVar10;
        *(undefined1 *)(*(int *)(iVar5 + 0x708) + 0xac) = 1;
        FUN_003721e0(*(undefined4 *)(iVar5 + 0x708),&local_64);
        FUN_00372170(*(undefined4 *)(iVar5 + 0x708),0);
      }
      puVar4 = puVar4 + 0xb;
      iVar3 = (int)(short)((short)iVar3 + 1);
    } while (iVar3 < 0x1e);
  }
  return;
}
