// OoT3D decomp @ 00277cb8  name=FUN_00277cb8  size=748

void FUN_00277cb8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;

  FUN_003510b0(param_1,DAT_00277fa4);
  *(byte *)(param_1 + 0x1c2) = (byte)*(undefined2 *)(param_1 + 0x1c) & 0x3f;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) >> 8;
  FUN_0034f910(param_2,param_1 + 0x1c4);
  FUN_0034f760(param_2,param_1 + 0x1c4,param_1,DAT_00277fa8,param_1 + 0x1e4);
  FUN_003532e8(param_1,0);
  fVar7 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  iVar3 = DAT_00277fa8;
  bVar6 = *(short *)(param_1 + 0x1c) == 0;
  fVar9 = fVar8;
  if (bVar6) {
    fVar9 = DAT_00277fac;
  }
  iVar5 = 0;
  if (bVar6) {
    fVar7 = fVar7 * fVar9;
    fVar8 = fVar8 * fVar9;
  }
  do {
    iVar2 = *(int *)(iVar3 + 0xc) + iVar5 * 0x3c;
    local_44 = *(float *)(iVar2 + 0x18) * fVar8 + *(float *)(iVar2 + 0x20) * fVar7 +
               *(float *)(param_1 + 8);
    local_40 = *(float *)(param_1 + 0xc) + *(float *)(iVar2 + 0x1c);
    local_3c = (*(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x18) * fVar7) +
               *(float *)(iVar2 + 0x20) * fVar8;
    local_38 = *(float *)(iVar2 + 0x24) * fVar8 + *(float *)(iVar2 + 0x2c) * fVar7 +
               *(float *)(param_1 + 8);
    local_34 = *(float *)(param_1 + 0xc) + *(float *)(iVar2 + 0x28);
    local_30 = (*(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x24) * fVar7) +
               *(float *)(iVar2 + 0x2c) * fVar8;
    local_2c = *(float *)(iVar2 + 0x30) * fVar8 + *(float *)(iVar2 + 0x38) * fVar7 +
               *(float *)(param_1 + 8);
    local_28 = *(float *)(param_1 + 0xc) + *(float *)(iVar2 + 0x34);
    local_24 = (*(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x30) * fVar7) +
               *(float *)(iVar2 + 0x38) * fVar8;
    FUN_00362434(param_1 + 0x1c4,iVar5,&local_44,&local_38,&local_2c);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  iVar3 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c2));
  uVar4 = DAT_00277fb0;
  if (iVar3 == 0) {
    if (*(short *)(param_1 + 0x1c) == 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
      *(undefined4 *)(param_1 + 0xfc) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00277fc4;
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00277fb4;
    sVar1 = *(short *)(param_1 + 0x1c);
    if (sVar1 == 0) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - DAT_00277fb8;
      *(undefined4 *)(param_1 + 0xfc) = uVar4;
    }
    else if (sVar1 == 1) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - DAT_00277fbc;
    }
    else if (sVar1 == 2) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) - DAT_00277fc0;
    }
  }
  FUN_00372f38(param_1,param_2,param_1 + 0x29c,
               *(undefined4 *)(DAT_00277fc8 + *(short *)(param_1 + 0x1c) * 4),0);
  if (*(short *)(param_1 + 0x1c) == 0) {
    local_48 = FUN_00353fd4(param_1,param_2,0xf);
  }
  else {
    local_48 = FUN_00353fd4(param_1,param_2,0x10);
  }
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_48);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  return;
}
