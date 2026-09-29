// OoT3D decomp @ 0022b190  name=FUN_0022b190  size=1012

void FUN_0022b190(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;

  fVar3 = DAT_0022b56c;
  piVar7 = DAT_0022b568;
  uVar2 = DAT_0022b564;
  uVar11 = DAT_0022b560;
  uVar10 = DAT_0022b55c;
  uVar9 = DAT_0022b558;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == -1) {
    FUN_003510b0(param_1,DAT_0022b58c);
    FUN_0037572c(DAT_0022b590,param_1);
    uVar10 = DAT_0022b594;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_0037322c(uVar10,param_1);
    FUN_00353dd0(param_2,param_1 + 0x1b4);
    FUN_00353d24(param_2,param_1 + 0x1b4,param_1,DAT_0022b598);
    FUN_0037632c(param_1,param_1 + 0x1b4);
    uVar10 = DAT_0022b59c;
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    uVar11 = DAT_0022b5a0;
    *(undefined4 *)(param_1 + 0x1a4) = uVar10;
    *(undefined2 *)(param_1 + 0x1a8) = 0xff;
    *(undefined4 *)(param_1 + 0xc4) = uVar11;
  }
  else if (sVar1 == 0) {
    FUN_003510b0(param_1,DAT_0022b5a4);
    uVar4 = DAT_0022b5a8;
    *(undefined4 *)(param_1 + 0x58) = DAT_0022b5a8;
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x70) = uVar10;
    *(undefined4 *)(param_1 + 0x74) = uVar11;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0x36) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    FUN_00353dd0(param_2,param_1 + 0x1b4);
    FUN_00353d24(param_2,param_1 + 0x1b4,param_1,DAT_0022b5ac);
    FUN_0037632c(param_1,param_1 + 0x1b4);
    fVar8 = DAT_0022b5b4;
    uVar10 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x54) * DAT_0022b5b0),
                                 (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 500) = uVar10;
    fVar5 = DAT_0022b5bc;
    uVar10 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x58) * fVar8),
                                 (byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1f8) = uVar10;
    *(undefined1 *)(param_1 + 0xb6) = 0xfd;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0022b5b8;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0x1aa) = (short)(int)(fVar5 / fVar8 + fVar3);
    *(undefined2 *)(param_1 + 0x1a8) = 0xff;
  }
  else if (sVar1 == 1 || sVar1 == 2) {
    FUN_003510b0(param_1,DAT_0022b570);
    uVar4 = DAT_0022b578;
    uVar9 = DAT_0022b574;
    *(undefined4 *)(param_1 + 0x58) = DAT_0022b574;
    *(undefined4 *)(param_1 + 0x5c) = uVar9;
    *(undefined4 *)(param_1 + 0x54) = uVar9;
    *(undefined4 *)(param_1 + 0x70) = uVar10;
    *(undefined4 *)(param_1 + 0x74) = uVar11;
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar4;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar7 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0x1aa) = (short)(int)(DAT_0022b57c / fVar8 + fVar3);
    *(undefined2 *)(param_1 + 0x1a8) = 0xff;
    if (*(short *)(param_1 + 0x1c) != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(short *)(param_1 + 0x1c) != -1 && *(short *)(param_1 + 0x1c) != 0) {
    *(undefined1 *)(param_1 + 0x19a) = 1;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(DAT_0022b5c8 + param_2) != 0)) {
      param_2 = param_2 + 0x3a5c;
    }
    else {
      param_2 = 0;
    }
    if (((*DAT_0022b5cc & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0022b5cc), iVar6 != 0)) {
      FUN_0036788c(DAT_0022b5d0);
    }
    piVar7 = *(int **)(DAT_0022b5d0 + 0x17c);
    piVar7[2] = *(int *)(param_1 + 0x178);
    uVar10 = ObjectBankArchive_00358ef8(param_2 + 0x10,0x65);
    uVar10 = (**(code **)(*piVar7 + 8))(piVar7,uVar10,1);
    *(undefined4 *)(param_1 + 0x228) = uVar10;
    piVar7[2] = 0;
    **(undefined4 **)(*(int *)(param_1 + 0x228) + 0xc) =
         *(undefined4 *)(*(int *)(param_1 + 0x228) + 0x10);
    uVar10 = FUN_00372f0c(param_2 + 0x10,0x3a);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x228) + 0xc),uVar10);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0xc) = uVar9;
    return;
  }
  uVar11 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                               (byte)(in_fpscr >> 0x15) & 3);
  uVar10 = VectorSignedToFloat((short)(int)*(float *)(param_1 + 0x2c) + 10,
                               (byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar9,uVar10,uVar11,param_1 + 0x210,0x9b,0xd2,0xff,0,0);
  uVar9 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x210);
  *(undefined4 *)(param_1 + 0x20c) = uVar9;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
