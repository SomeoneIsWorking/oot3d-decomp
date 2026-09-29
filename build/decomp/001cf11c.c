// OoT3D decomp @ 001cf11c  name=FUN_001cf11c  size=636

void FUN_001cf11c(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  uint in_fpscr;
  float fVar9;

  iVar6 = (**(code **)(param_1 + 0x1c0))();
  iVar7 = DAT_001cf39c;
  fVar4 = DAT_001cf394;
  fVar3 = DAT_001cf390;
  piVar2 = DAT_001cf38c;
  if ((iVar6 != 0) && (*(short *)(param_1 + 0x1c4) < 1)) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001cf38c + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x1c8) = (short)(int)(DAT_001cf398 / fVar9 + DAT_001cf390);
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x8b,0,0,0,
                     (int)*(short *)(iVar7 + (((uint)*(ushort *)(param_1 + 0x1c) << 0x16) >> 0x1e) *
                                             0xc + 8),1);
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0x1c4) = (short)(int)(fVar4 / fVar9 + fVar3);
    FUN_0036cf80(param_2,param_1,0);
    uVar8 = *(ushort *)(param_1 + 0x1c) & 0x3f;
    iVar7 = FUN_0036e864(param_2,uVar8);
    if (iVar7 == 0) {
      FUN_00375c10(param_2,uVar8);
    }
    else {
      FUN_0036beac();
    }
  }
  uVar8 = *(ushort *)(param_1 + 0x1c) & 0x3f;
  *(undefined2 *)(param_1 + 0x1ca) = *(undefined2 *)(DAT_001cf3a0 + param_2);
  if ((0 < *(short *)(param_1 + 0x1c8)) &&
     (sVar1 = *(short *)(param_1 + 0x1c8) + -1, *(short *)(param_1 + 0x1c8) = sVar1, sVar1 == 0)) {
    iVar7 = FUN_0036e864(param_2,uVar8);
    *(bool *)(param_1 + 0x1cc) = iVar7 != 0;
  }
  bVar5 = (byte)((ushort)*(short *)(param_1 + 0x1c) >> 8);
  if ((int)*(short *)(param_1 + 0x1c) << 0x15 < 0) {
    bVar5 = *(byte *)(param_1 + 0x1cc) ^ bVar5 >> 7;
  }
  else if (*(char *)(param_1 + 0x1cf) == '\0') {
    bVar5 = *(byte *)(param_1 + 0x1cd);
  }
  else if (*(char *)(param_1 + 0x1cf) == '\x01') {
    bVar5 = bVar5 >> 7 ^ *(byte *)(param_1 + 0x1cc);
  }
  else {
    bVar5 = bVar5 >> 7 ^ *(int *)(DAT_001cf3a4 + 4) != 0 ^ *(byte *)(param_1 + 0x1cc);
  }
  *(byte *)(param_1 + 0x1d0) = bVar5;
  iVar7 = FUN_0036e864(param_2,uVar8);
  *(bool *)(param_1 + 0x1ce) = iVar7 != 0;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar4 / fVar9 + fVar3) + -0x6e == (int)*(short *)(param_1 + 0x1c4)) {
    FUN_00372244(param_2 + 0x5fcc,0x1e,DAT_001cf3a8);
  }
  if ((*(char *)(param_1 + 0x1d0) == '\0') && (*(short *)(param_1 + 0x1c4) < 1)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00239fc8;
    return;
  }
  return;
}
