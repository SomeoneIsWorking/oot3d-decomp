// OoT3D decomp @ 00322c08  name=FUN_00322c08  size=568

void FUN_00322c08(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  uVar5 = DAT_00322e54;
  fVar9 = DAT_00322e48;
  piVar4 = DAT_00322e44;
  fVar8 = *(float *)(param_1 + 0x1000) + DAT_00322e40;
  *(float *)(param_1 + 0x1000) = fVar8;
  iVar6 = *piVar4;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1462),(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (fVar10 + fVar9) * DAT_00322e4c * DAT_00322e50;
  uVar1 = in_fpscr & 0xfffffff;
  uVar2 = uVar1 | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
  bVar3 = (byte)(uVar2 >> 0x18);
  bVar7 = (bool)(bVar3 >> 6 & 1);
  if ((bool)(bVar3 >> 7) == (NAN(fVar8) || NAN(fVar9))) {
    bVar7 = *(int *)(param_1 + 0x1080) == 0;
  }
  if (bVar7) {
    if ((*(short *)(DAT_00322e58 + 0x80) == 0) || (*(short *)(DAT_00322e58 + 0x52) != 0)) {
      z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                       *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,DAT_00322e5c,0,0,0,1
                       ,1);
      FUN_0037547c(DAT_00322e68,0,4,DAT_00322e64,DAT_00322e64,DAT_00322e60);
    }
    FUN_00341188(uVar5,param_1,1,2,0);
    *(undefined4 *)(param_1 + 0xf60) = 0x25;
    *(undefined4 *)(param_1 + 0x1080) = 1;
  }
  else {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1464),(byte)(uVar2 >> 0x15) & 3);
    fVar9 = (fVar9 + DAT_00322e6c) * DAT_00322e70 * DAT_00322e74;
    uVar2 = uVar1 | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
    bVar3 = (byte)(uVar2 >> 0x18);
    bVar7 = (bool)(bVar3 >> 6 & 1);
    if ((bool)(bVar3 >> 7) == (NAN(fVar8) || NAN(fVar9))) {
      bVar7 = *(int *)(param_1 + 0x1084) == 0;
    }
    if (bVar7) {
      FUN_00375c10(param_2,((uint)*(ushort *)(param_1 + 0x1c) << 0x10) >> 0x18);
      *(undefined4 *)(param_1 + 0x1084) = 1;
      return;
    }
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1466),(byte)(uVar2 >> 0x15) & 3);
    fVar9 = (fVar9 + DAT_00322e78) * DAT_00322e70 * DAT_00322e74;
    uVar1 = uVar1 | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
    bVar3 = (byte)(uVar1 >> 0x18);
    bVar7 = (bool)(bVar3 >> 6 & 1);
    if ((bool)(bVar3 >> 7) == (NAN(fVar8) || NAN(fVar9))) {
      bVar7 = *(int *)(param_1 + 0x1088) == 0;
    }
    if (bVar7) {
      FUN_00341188(uVar5,param_1,1,2);
      *(undefined4 *)(param_1 + 0xf60) = 0x26;
      *(undefined4 *)(param_1 + 0x1088) = 1;
      return;
    }
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + 0x1468),(byte)(uVar1 >> 0x15) & 3);
    if ((fVar9 + DAT_00322e7c) * DAT_00322e70 * DAT_00322e74 <= fVar8) {
      FUN_00341188(uVar5,param_1,0x33,0);
      FUN_003284f8(param_1,param_2);
      *(undefined4 *)(param_1 + 0xf60) = 0x27;
      return;
    }
  }
  return;
}
