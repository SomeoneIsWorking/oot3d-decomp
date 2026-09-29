// OoT3D decomp @ 001423e0  name=FUN_001423e0  size=744

void FUN_001423e0(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;

  iVar6 = FUN_0037571c(param_2);
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == 0) {
    return;
  }
  FUN_00361f00(param_1,param_2,(int)*(short *)(param_1 + 0x292),1);
  fVar3 = DAT_001426cc;
  piVar2 = DAT_001426c8;
  if (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == 3) {
    if (*(short *)(param_1 + 0x28e) == 0) {
      fVar8 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(param_1 + 0x28a),(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001426c8 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *(short *)(param_1 + 0x28e) = (short)(int)((fVar8 * DAT_001426d0) / fVar9 + DAT_001426cc);
      iVar6 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0x8b,
                               (int)(short)(*(short *)(param_1 + 0x34) + 0x4000),
                               (int)*(short *)(param_1 + 0x36),(int)*(short *)(param_1 + 0x38),7,1);
      if (iVar6 != 0) {
        FUN_0037572c(DAT_001426d4);
      }
    }
    else {
      *(short *)(param_1 + 0x28e) = *(short *)(param_1 + 0x28e) + -1;
    }
  }
  cVar1 = *(char *)(param_1 + 0x28c);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x28c) = cVar1 + '\x01', 10 < (byte)(cVar1 + 1U))) {
    *(undefined1 *)(param_1 + 0x28c) = 10;
  }
  uVar5 = DAT_001426dc;
  piVar4 = DAT_001426d8;
  if (*DAT_001426d8 == 0xa0) {
    iVar6 = DAT_001426d8[0x53a];
    if (iVar6 == 4) {
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      if ((int)(DAT_001426e4 / fVar8 + fVar3) != (uint)*(ushort *)(param_2 + 0x22b8)) {
        return;
      }
      FUN_00375bcc(param_1,DAT_001426e8);
    }
    else {
      if (iVar6 == 6) {
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_001426ec / fVar8 + fVar3) != (uint)*(ushort *)(param_2 + 0x22b8)) {
          return;
        }
      }
      else {
        if (iVar6 != 0xb) {
          return;
        }
        fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),
                                           (byte)(in_fpscr >> 0x15) & 3);
        if ((int)(DAT_001426e0 / fVar8 + fVar3) != (uint)*(ushort *)(param_2 + 0x22b8)) {
          return;
        }
      }
      *(undefined1 *)(param_1 + 0x28c) = 1;
      FUN_00375bcc(param_1,uVar5);
    }
  }
  iVar6 = *piVar4;
  bVar7 = iVar6 == 0x13d;
  if (bVar7) {
    iVar6 = piVar4[0x53a];
  }
  if (bVar7 && iVar6 == 4) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)(DAT_001426f0 / fVar8 + fVar3) == (uint)*(ushort *)(param_2 + 0x22b8)) {
      *(undefined1 *)(param_1 + 0x28c) = 1;
      FUN_00375bcc(param_1,uVar5);
    }
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    if ((int)(DAT_001426f4 / fVar8 + fVar3) == (uint)*(ushort *)(param_2 + 0x22b8)) {
      FUN_003674e4(4);
      return;
    }
  }
  return;
}
