// OoT3D decomp @ 0036a308  name=FUN_0036a308  size=488

void FUN_0036a308(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_40 [8];

  *(undefined1 *)(param_1 + 0x1c6) = 0;
  iVar2 = FUN_0036e864(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  if (iVar2 == 0) {
    return;
  }
  FUN_0036beac(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  iVar2 = DAT_0036a4f0;
  if (((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1d != 1) {
    return;
  }
  uVar5 = 0x1e;
  uVar1 = (ushort)*(byte *)(DAT_0036a4f0 + 0xe);
  uVar6 = 0;
  bVar7 = uVar1 != 1;
  if (!bVar7) {
    uVar1 = *(ushort *)(param_2 + 0x104);
  }
  iVar3 = param_1;
  if (bVar7 || uVar1 != 9) {
    uVar1 = *(ushort *)(param_2 + 0x104);
    if (uVar1 == 3) {
      if (*(char *)(param_1 + 3) == '\x0e') {
        uVar5 = 0xffffffff;
      }
    }
    else {
      bVar7 = uVar1 == 5;
      if (bVar7) {
        uVar1 = (ushort)*(byte *)(param_1 + 3);
      }
      if (bVar7 && uVar1 == 6) {
        iVar4 = *(int *)(DAT_0036a4f4 + param_2);
        fVar11 = *(float *)(iVar4 + 0x28) - DAT_0036a4f8;
        if (fVar11 < DAT_0036a4fc) {
          fVar11 = DAT_0036a4f8 - *(float *)(iVar4 + 0x28);
        }
        fVar9 = *(float *)(iVar4 + 0x2c) - DAT_0036a500;
        if (fVar9 < DAT_0036a4fc) {
          fVar9 = DAT_0036a500 - *(float *)(iVar4 + 0x2c);
        }
        fVar10 = *(float *)(iVar4 + 0x30) - DAT_0036a504;
        if (fVar10 < DAT_0036a4fc) {
          fVar10 = DAT_0036a504 - *(float *)(iVar4 + 0x30);
        }
        bVar7 = SBORROW4((int)fVar11,DAT_0036a508);
        iVar4 = (int)fVar11 - DAT_0036a508;
        if ((int)fVar11 < DAT_0036a508) {
          bVar7 = SBORROW4((int)fVar9,DAT_0036a508 + 0x640000);
          iVar4 = (int)fVar9 - (DAT_0036a508 + 0x640000);
        }
        bVar8 = iVar4 < 0;
        if (bVar8 != bVar7) {
          bVar7 = SBORROW4((int)fVar10,DAT_0036a50c);
          bVar8 = (int)fVar10 - DAT_0036a50c < 0;
        }
        if (bVar8 != bVar7) {
          uVar6 = DAT_0036a510;
        }
      }
    }
  }
  else {
    if (*(char *)(param_1 + 3) != '\x01') goto LAB_0036a4a0;
    uVar5 = 0x2d;
    local_40[0] = param_1;
    iVar3 = FUN_00360084(param_2 + 0x208c,0x1b4,6,local_40,8);
    if (1 < iVar3) {
      iVar3 = 2;
    }
    iVar3 = local_40[iVar3];
  }
  uVar1 = (ushort)*(byte *)(iVar2 + 0xe);
  bVar7 = uVar1 == 1;
  if (bVar7) {
    uVar1 = *(ushort *)(param_2 + 0x104);
  }
  bVar8 = bVar7 && uVar1 == 0xd;
  if (bVar7 && uVar1 == 0xd) {
    bVar8 = *(char *)(param_1 + 3) == '\n';
  }
  if (bVar8) {
    uVar5 = 0x46;
  }
LAB_0036a4a0:
  uVar6 = FUN_0036a2dc(param_2,iVar3,0,uVar6,0);
  *(undefined4 *)(param_1 + 0x5c0) = uVar6;
  if (((*(ushort *)(param_1 + 0x1c) & 0x8000) == 0) && (-1 < (int)uVar5)) {
    FUN_00372244(param_2 + 0x5fcc,uVar5 & 0xffff,DAT_0036a514);
  }
  *(undefined1 *)(param_1 + 0x1c6) = 1;
  return;
}
