// OoT3D decomp @ 003f3fa0  name=FUN_003f3fa0  size=476

void FUN_003f3fa0(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;

  iVar6 = DAT_003f417c;
  iVar7 = DAT_003f417c + 0xd4;
  if (*(short *)(param_1 + 0x1bc) != 0) {
    *(undefined4 *)(param_1 + 0x1c0) = DAT_003f4180;
    uVar4 = (uint)*(ushort *)(iVar6 + 0x1592);
    *(char *)(uVar4 + iVar7) = *(char *)(uVar4 + iVar7) + -1;
    FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
    FUN_00375bcc(param_1,DAT_003f4184);
    return;
  }
  iVar8 = *(int *)(param_2 + 0x20ac);
  iVar5 = FUN_0036a7a0(param_2);
  fVar3 = DAT_003f4190;
  fVar12 = DAT_003f418c;
  fVar2 = DAT_003f4188;
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_2 + 0x20ac);
    local_38 = *(undefined4 *)(iVar5 + 0x28);
    local_34 = *(float *)(iVar5 + 0x2c) + DAT_003f4188;
    local_30 = *(undefined4 *)(iVar5 + 0x30);
    FUN_0036c5d8(param_1,&local_44,&local_38);
    local_44 = ABS(local_44);
    bVar9 = local_44 < fVar12;
    bVar10 = local_44 == fVar12;
    bVar11 = NAN(local_44) || NAN(fVar12);
    if (local_44 <= fVar12) {
      local_40 = ABS(local_40);
      bVar9 = local_40 < fVar3;
      bVar10 = local_40 == fVar3;
      bVar11 = NAN(local_40) || NAN(fVar3);
    }
    if (!bVar10 && bVar9 == bVar11) {
      local_3c = DAT_003f4194;
    }
    if ((int)ABS(local_3c) < DAT_003f4198) {
      sVar1 = *(short *)(iVar8 + 0xbe) - *(short *)(param_1 + 0xbe);
      if (fVar2 < local_3c) {
        sVar1 = -0x8000 - sVar1;
      }
      if ((int)sVar1 + 0x1fffU <= DAT_003f419c) {
        fVar12 = DAT_003f41a0;
        if (fVar2 <= local_3c) {
          fVar12 = DAT_003f41a4;
        }
        iVar5 = (int)fVar12;
        goto LAB_003f4100;
      }
    }
  }
  iVar5 = 0;
LAB_003f4100:
  if (iVar5 != 0) {
    iVar8 = *(int *)(param_2 + 0x20ac);
    if (*(char *)((uint)*(ushort *)(iVar6 + 0x1592) + iVar7) < '\x01') {
      *(short *)(DAT_003f41ac + iVar8) = (short)DAT_003f41a8;
    }
    else {
      iVar6 = FUN_0036405c(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x13) >> 0x1b);
      if (iVar6 == 0) {
        *(undefined2 *)(DAT_003f41ac + iVar8) = 0xfddb;
      }
      else {
        *(undefined1 *)(iVar8 + 0x12a4) = 2;
        iVar6 = DAT_003f41b0;
        *(char *)(iVar8 + 0x12a5) = (char)iVar5;
        *(int *)(iVar8 + 0x12a8) = param_1;
        *(undefined2 *)(iVar6 + iVar8) = 0xf;
      }
    }
  }
  return;
}
