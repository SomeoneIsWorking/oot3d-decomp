// OoT3D decomp @ 003a5b20  name=FUN_003a5b20  size=612

void FUN_003a5b20(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;

  piVar2 = DAT_003a5d84;
  iVar4 = 0;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + *(short *)(*DAT_003a5d84 + 0x1460);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(*piVar2 + 0x1462) + 1000;
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + *(short *)(*piVar2 + 0x1464) + 2000;
  iVar3 = FUN_0037571c(param_2);
  if (iVar3 != 0) {
    iVar4 = *(int *)(&DAT_000022e4 + param_2);
  }
  bVar1 = true;
  if (iVar4 != 0) {
    fVar5 = (float)FUN_00361490(*(undefined2 *)(iVar4 + 4),*(undefined2 *)(iVar4 + 2),
                                *(undefined2 *)(param_2 + 0x22b8));
    fVar7 = DAT_003a5d90;
    fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1468),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (fVar6 + DAT_003a5d88) * DAT_003a5d8c;
    fVar10 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x20),(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + (fVar8 - *(float *)(param_1 + 8)) * fVar5
    ;
    fVar8 = (float)VectorSignedToFloat((uint)*(ushort *)(iVar4 + 4) - (uint)*(ushort *)(iVar4 + 2),
                                       (byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar8 == fVar7) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) {
      fVar7 = (float)VectorSignedToFloat((uint)*(ushort *)(param_2 + 0x22b8) -
                                         (uint)*(ushort *)(iVar4 + 2),(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1466),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar7 = ((((fVar11 + fVar6) - *(float *)(param_1 + 0xc)) - (fVar9 + DAT_003a5d94) * fVar7) /
              (fVar8 * fVar8)) * fVar7 * fVar7 + (fVar9 + DAT_003a5d94) * fVar7;
    }
    *(float *)(param_1 + 0x2c) = fVar7 + *(float *)(param_1 + 0xc);
    *(float *)(param_1 + 0x30) =
         *(float *)(param_1 + 0x10) + (fVar10 - *(float *)(param_1 + 0x10)) * fVar5;
    if (0x3f7fffff < (int)fVar5) goto LAB_003a5ccc;
  }
  bVar1 = false;
LAB_003a5ccc:
  if (bVar1) {
    local_2c = *(undefined4 *)(param_1 + 0x28);
    local_24 = *(undefined4 *)(param_1 + 0x30);
    iVar3 = *piVar2;
    local_28 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x1472),
                                          (byte)(in_fpscr >> 0x15) & 3);
    local_28 = *(float *)(param_1 + 0x2c) + local_28;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x146a),(byte)(in_fpscr >> 0x15) & 3)
    ;
    FUN_0037378c(fVar6 + DAT_003a5d98,param_2,&local_2c,*(short *)(iVar3 + 0x146c) + 5,
                 (int)(short)(*(short *)(iVar3 + 0x146e) + 2000),
                 (int)(short)(*(short *)(iVar3 + 0x1470) + 800),0);
    FUN_003192f0(param_2,&local_2c,5);
    FUN_00375c44(param_2,param_1 + 0x28,0x3c,DAT_003a5d9c);
    *(undefined4 *)(param_1 + 0x1bc) = 3;
    *(undefined4 *)(param_1 + 0x1c0) = 0;
  }
  return;
}
