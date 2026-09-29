// OoT3D decomp @ 00284fd0  name=FUN_00284fd0  size=624

void FUN_00284fd0(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;

  fVar1 = DAT_00285240;
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    *(float *)(param_1 + 0x6c) = DAT_00285240;
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    if (*(float *)(param_1 + 0x6c) < fVar1) {
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_00285244;
    }
    *(undefined4 *)(param_1 + 0xa50) = 0;
  }
  FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,DAT_00285248,0);
  if ((*(short *)(param_1 + 0x1c) == -2) && (iVar4 = FUN_0032fbc0(param_2,param_1), iVar4 != 0)) {
    return;
  }
  uVar9 = FUN_003731e0(param_1 + 0x1a4);
  iVar4 = DAT_00285254;
  uVar2 = DAT_00285250;
  uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
  bVar8 = (int)uVar9 != 0;
  if (bVar8) {
    uVar6 = (uint)*(ushort *)(param_1 + 0x90);
  }
  if (!bVar8 || (uVar6 & 1) == 0) {
    return;
  }
  iVar7 = DAT_00285254 + -0x140000;
  if (DAT_0028524c[1] == -1) {
    sVar3 = *(short *)(param_1 + 0x82) - *(short *)(param_1 + 0xbe);
    if (sVar3 < 0) {
      sVar3 = -sVar3;
    }
    if ((((*(short *)(param_1 + 0x1c) == -2) && ((uVar6 & 8) != 0)) &&
        ((int)sVar3 + 11999U <= DAT_00285258)) && (*(int *)(param_1 + 0x98) < iVar7))
    goto LAB_002851a8;
    iVar5 = FUN_0032fdf8(param_2,param_1);
    if (iVar5 != 0) {
      return;
    }
    if (*(short *)(param_1 + 0x1c) == -2) {
      bVar8 = *(int *)(param_1 + 0x98) == iVar4;
      if (*(int *)(param_1 + 0x98) <= iVar4) {
        bVar8 = (*(uint *)(param_2 + 0x5bf4) & 3) == 0;
      }
      if ((!bVar8) || (iVar4 = FUN_00328cac(param_2,param_1), iVar4 == 0)) goto LAB_0028521c;
      goto LAB_00285208;
    }
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    iVar5 = FUN_003740fc(uVar2,param_1,param_2);
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x98) < iVar7)) goto LAB_002851a8;
    bVar8 = *(int *)(param_1 + 0x98) == iVar4;
    if (*(int *)(param_1 + 0x98) <= iVar4) {
      bVar8 = (*(uint *)(param_2 + 0x5bf4) & 3) == 0;
    }
  }
  else {
    if (*(char *)(param_1 + 0xa7c) == '\r') {
      *DAT_0028524c = *DAT_0028524c + 1;
      return;
    }
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    iVar5 = FUN_003740fc(uVar2,param_1,param_2);
    if ((iVar5 == 0) && (*(int *)(param_1 + 0x98) < iVar7)) {
LAB_002851a8:
      FUN_00328d50(param_1);
      return;
    }
    bVar8 = *(int *)(param_1 + 0x98) == iVar4;
    if (*(int *)(param_1 + 0x98) <= iVar4) {
      bVar8 = (*(uint *)(param_2 + 0x5bf4) & 3) == 0;
    }
  }
  if (!bVar8) {
LAB_0028521c:
    FUN_00328c18(param_1,param_2);
    return;
  }
LAB_00285208:
  FUN_003301b8(param_1);
  return;
}
