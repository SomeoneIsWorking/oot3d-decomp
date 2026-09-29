// OoT3D decomp @ 0046421c  name=FUN_0046421c  size=568

void FUN_0046421c(int param_1,undefined4 param_2,uint param_3)

{
  float fVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;

  uVar3 = DAT_00464460;
  puVar2 = DAT_0046445c;
  fVar1 = DAT_00464458;
  bVar5 = *(char *)(DAT_00464454 + param_1) != '\0';
  iVar4 = 0;
  if (bVar5) {
    iVar4 = param_1 + 0xa00;
    param_3 = (uint)*(ushort *)(param_1 + 0xa7c);
  }
  if (bVar5 && param_3 < 800) {
    if (*(char *)(param_1 + 0x31a7) == '\0') {
      uVar6 = *(uint *)(param_1 + 0x3218);
      bVar5 = uVar6 != 0x3f800000;
      if (!bVar5) {
        uVar6 = (uint)*(byte *)(param_1 + 0x31a5);
      }
      if (bVar5 || uVar6 != 0) goto LAB_00464384;
    }
    if (*(char *)(param_1 + 0x31a7) == '\0') {
      fVar7 = DAT_00464470;
      if (*(ushort *)(param_1 + 0x3240) != 0) {
        fVar7 = (float)VectorUnsignedToFloat
                                 ((uint)*(ushort *)(param_1 + 0x3240),(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(ushort *)(iVar4 + 0x7c),(byte)(in_fpscr >> 0x15) & 3);
        fVar7 = DAT_00464464 - fVar8 / fVar7;
      }
    }
    else {
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(ushort *)(iVar4 + 0x7c),(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = (DAT_00464468 - fVar7) * DAT_0046446c;
    }
    if (0x3f800000 < (int)fVar7) {
      fVar7 = DAT_00464464;
    }
    local_28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0xa82),(byte)(in_fpscr >> 0x15) & 3);
    local_24 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0xa83),(byte)(in_fpscr >> 0x15) & 3);
    local_20 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0xa84),(byte)(in_fpscr >> 0x15) & 3);
    local_28 = local_28 * DAT_00464458;
    local_24 = local_24 * DAT_00464458;
    local_20 = local_20 * DAT_00464458;
    local_1c = fVar7 * DAT_00464474 * DAT_00464458;
    if (((*DAT_0046445c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0046445c), iVar4 != 0)) {
      FUN_0036788c(DAT_00464478);
    }
    FUN_003339e8(uVar3,0,&local_28);
  }
LAB_00464384:
  if (*(int *)(param_1 + 0x3218) == 0x3f800000) {
    *(undefined4 *)(param_1 + 0x3218) = DAT_00464484;
  }
  if (*(char *)(param_1 + 0x3269) != '\0') {
    local_28 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x326a),(byte)(in_fpscr >> 0x15) & 3);
    local_24 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x326b),(byte)(in_fpscr >> 0x15) & 3);
    local_28 = local_28 * fVar1;
    local_20 = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x326c),(byte)(in_fpscr >> 0x15) & 3);
    local_1c = (float)VectorUnsignedToFloat
                                ((uint)*(byte *)(param_1 + 0x326d),(byte)(in_fpscr >> 0x15) & 3);
    local_24 = local_24 * fVar1;
    local_20 = local_20 * fVar1;
    local_1c = local_1c * fVar1;
    if (((*puVar2 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0046445c), iVar4 != 0)) {
      FUN_0036788c(DAT_00464478);
    }
    FUN_003339e8(uVar3,0,&local_28);
  }
  return;
}
