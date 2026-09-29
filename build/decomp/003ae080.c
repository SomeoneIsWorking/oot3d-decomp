// OoT3D decomp @ 003ae080  name=FUN_003ae080  size=480

void FUN_003ae080(int param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  undefined4 uVar8;
  float fVar9;
  short local_2c [2];
  undefined4 local_28 [3];

  iVar5 = DAT_003ae27c;
  local_28[0] = *DAT_003ae278;
  local_28[1] = DAT_003ae278[1];
  local_28[2] = DAT_003ae278[2];
  if ((*(byte *)(param_1 + 0x5e9) & 2) == 0) {
    uVar3 = *(ushort *)(param_2 + 0x104);
    bVar7 = uVar3 != 0x20;
    if (bVar7) {
      uVar3 = (ushort)*(byte *)(param_1 + 0x5eb);
    }
    if ((bVar7 && (uVar3 & 1) != 0) &&
       (*(byte *)(param_1 + 0x5eb) = (byte)uVar3 & 0xfe, *(short *)(iVar5 + 0x4e) == 0)) {
      *(ushort *)(iVar5 + 0x4e) = *(ushort *)(param_1 + 0x1c) & 0x7fff;
      *(undefined4 *)(param_1 + 0x5d4) = DAT_003ae280;
    }
  }
  else {
    *(byte *)(param_1 + 0x5e9) = *(byte *)(param_1 + 0x5e9) & 0xfd;
  }
  if ((*(short *)(param_1 + 0x63c) == 0) ||
     (sVar4 = *(short *)(param_1 + 0x63c) + -1, *(short *)(param_1 + 0x63c) = sVar4,
     fVar2 = DAT_003ae28c, sVar4 == 0)) {
    lVar1 = (ulonglong)*(uint *)(param_2 + 0xf8) * (ulonglong)DAT_003ae298;
    iVar5 = *(uint *)(param_2 + 0xf8) + (uint)((ulonglong)lVar1 >> 0x21) * -3;
    *(short *)(param_1 + 0x640) = (short)local_28[iVar5];
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0x3c,(int)(short)local_28[iVar5],(int)lVar1);
  }
  uVar8 = DAT_003ae284;
  if (*(short *)(param_1 + 0x640) != 0) {
    uVar8 = DAT_003ae288;
  }
  FUN_0036e168(uVar8,DAT_003ae290,param_1 + 0x6c);
  fVar9 = (float)FUN_0035c628(param_1,*(undefined4 *)(param_1 + 0x630),
                              (int)*(short *)(param_1 + 0x636),local_2c);
  FUN_00375a18(param_1 + 0x36,(int)local_2c[0],10,1000,1);
  if (((fVar2 < fVar9) && ((int)fVar9 < DAT_003ae294)) &&
     (pbVar6 = *(byte **)(param_1 + 0x630), pbVar6 != (byte *)0x0)) {
    bVar7 = *(char *)(param_1 + 0x634) == '\0';
    if (bVar7) {
      sVar4 = 1;
    }
    else {
      sVar4 = -1;
    }
    sVar4 = sVar4 + *(short *)(param_1 + 0x636);
    *(short *)(param_1 + 0x636) = sVar4;
    if (bVar7) {
      if ((int)sVar4 <= (int)(*pbVar6 - 1)) goto LAB_003ae1f4;
      sVar4 = 0;
    }
    else {
      if (-1 < sVar4) goto LAB_003ae1f4;
      sVar4 = *pbVar6 - 1;
    }
    *(short *)(param_1 + 0x636) = sVar4;
  }
LAB_003ae1f4:
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  if (*(short *)(param_1 + 0x636) < 9) {
    uVar3 = *(ushort *)(iVar5 + 0x90) | 1;
  }
  else {
    uVar3 = *(ushort *)(iVar5 + 0x90) & 0xfffe;
  }
  *(ushort *)(iVar5 + 0x90) = uVar3;
  return;
}
