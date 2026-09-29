// OoT3D decomp @ 001d9a0c  name=FUN_001d9a0c  size=680

void FUN_001d9a0c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;

  iVar1 = DAT_001d9ce0;
  uVar2 = (uint)*(short *)(param_1 + 0x1c);
  fVar7 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(DAT_001d9ce0 + (uVar2 & 0xf) * 0xc + 7),
                            (byte)(in_fpscr >> 0x15) & 3);
  if ((*(int *)(DAT_001d9ce8 + 0x4e4) == 3) || ((uVar2 & 0x2000) != 0)) {
    if ((int)uVar2 < 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0x28;
    }
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003591e4(*(undefined4 *)(param_1 + 0x28),
                 *(float *)(param_1 + 0x2c) + fVar8 * fVar7 * DAT_001d9ce4,param_1 + 0x1b4,0xff,0xff
                 ,0xb4,0xffffffff,0);
  }
  else {
    if ((int)uVar2 < 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0x28;
    }
    fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0036f410(*(undefined4 *)(param_1 + 0x28),
                 *(float *)(param_1 + 0x2c) + fVar8 * fVar7 * DAT_001d9ce4,
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x1b4,0xff,0xff,0xb4,0xffffffff,0);
  }
  if (((*DAT_001d9cec & 1) == 0) && (iVar4 = FUN_003679b4(DAT_001d9cec), iVar4 != 0)) {
    FUN_0036788c(DAT_001d9cf0);
  }
  piVar6 = *(int **)(DAT_001d9cf0 + 0x17c);
  piVar6[2] = *(int *)(param_1 + 0x178);
  if (*(short *)(param_1 + 0x1c) < 0) {
    uVar2 = FUN_00363c10(param_2 + 0x3a58,3);
    if (((uVar2 & 0xff) < 0x13) &&
       (iVar4 = param_2 + (uVar2 & 0xff) * 0x80, *(int *)(DAT_001d9cfc + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0xf);
    uVar5 = FUN_00372f0c(iVar4 + 0x10,0);
  }
  else {
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_001d9cfc + iVar4) != 0)) {
      iVar4 = iVar4 + 0x3a5c;
    }
    else {
      iVar4 = 0;
    }
    uVar3 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0x29);
    uVar5 = FUN_00372f0c(iVar4 + 0x10,
                         *(undefined4 *)(iVar1 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 0xc + 8));
  }
  iVar4 = (**(code **)(*piVar6 + 8))(piVar6,uVar3,1);
  *(int *)(param_1 + 0x1a4) = iVar4;
  iVar4 = *(int *)(iVar4 + 0xc);
  *(int *)(param_1 + 0x1a8) = iVar4;
  *(undefined1 *)(iVar4 + 0x10) = 1;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x1a4),2);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x1a8),uVar5);
  *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0xc) = DAT_001d9d00;
  piVar6[2] = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar3 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b0) = uVar3;
  fVar7 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(iVar1 + (*(ushort *)(param_1 + 0x1c) & 0xf) * 0xc + 7),
                            (byte)(in_fpscr >> 0x15) & 3);
  FUN_0037572c(fVar7 * DAT_001d9d04,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
