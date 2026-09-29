// OoT3D decomp @ 003d55dc  name=FUN_003d55dc  size=760

void FUN_003d55dc(int param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;

  uVar3 = DAT_003d5954;
  uVar2 = DAT_003d5950;
  puVar1 = DAT_003d594c;
  if (((DAT_003d594c[3] & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_003d594c + 3), puVar4 = DAT_003d5958, iVar5 != 0)) {
    *DAT_003d5958 = uVar3;
    puVar4[1] = uVar2;
    puVar4[2] = uVar3;
  }
  iVar5 = FUN_003731e0(param_1 + 0x1a4);
  fVar7 = DAT_003d5960;
  if (iVar5 != 0) {
    *(short *)(param_1 + 0x8b0) = *(short *)(param_1 + 0x8b0) + 1;
  }
  FUN_00373500(*(undefined4 *)(param_1 + 0xc),param_1 + 0x2c);
  if (*(short *)(param_1 + 0x8b0) == 8) {
    local_3c = *(undefined4 *)(param_1 + 0x28);
    local_38 = *(float *)(param_1 + 0x2c) + DAT_003d5964;
    local_34 = *(undefined4 *)(param_1 + 0x30);
    local_30 = uVar3;
    local_2c = uVar2;
    local_28 = uVar3;
    if (((*puVar1 & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_003d594c), puVar4 = DAT_003d5968, iVar5 != 0)) {
      *DAT_003d5968 = uVar3;
      puVar4[1] = uVar3;
      puVar4[2] = uVar3;
    }
    FUN_00366150(param_2,&local_3c,&local_30,DAT_003d5968,DAT_003d596c + -4,DAT_003d596c,400,
                 0xffffffec);
    FUN_00375bcc(param_1,DAT_003d5970);
  }
  iVar5 = FUN_003736fc(DAT_003d5978,DAT_003d5974,param_1 + 0x1a4);
  if (iVar5 != 0) {
    FUN_0036e670(param_2,param_1 + 8,0,0,0,DAT_003d597c);
    FUN_00375bcc(param_1,DAT_003d5980);
  }
  iVar5 = (int)*(short *)(param_1 + 0x8b0);
  if (iVar5 < 5) {
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    if (iVar5 < 1) {
      fVar7 = fVar6 * DAT_003d5984 * DAT_003d5988 - fVar7;
    }
    else {
      fVar7 = fVar7 + fVar6 * DAT_003d5984 * DAT_003d5988;
    }
    fVar7 = (float)VectorSignedToFloat((int)fVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0037572c((DAT_003d5994 + fVar7 * DAT_003d5990) * DAT_003d598c,param_1);
    return;
  }
  if (iVar5 < 9) {
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)(fVar7 + fVar6 * DAT_003d5984 * DAT_003d5988) + -2,
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_0037572c((DAT_003d599c - fVar7 * DAT_003d5998) * DAT_003d598c,param_1);
    return;
  }
  if (iVar5 < 0x11) {
    fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)(fVar7 + fVar6 * DAT_003d5984 * DAT_003d5988) + -5,
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_0037572c((DAT_003d59a4 + fVar7 * DAT_003d59a0) * DAT_003d598c,param_1);
    return;
  }
  iVar5 = FUN_003705a0(uVar3,DAT_003d59a8,param_1 + 0x54);
  if (iVar5 != 0) {
    FUN_00375c44(param_2,param_1 + 0x28,0x1e,DAT_003d59ac);
    FUN_00374444(param_2,param_1,param_1 + 0x28,0x70);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  return;
}
