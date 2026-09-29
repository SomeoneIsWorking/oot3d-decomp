// OoT3D decomp @ 001c28b8  name=FUN_001c28b8  size=720

void FUN_001c28b8(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  iVar2 = DAT_001c2b88;
  psVar4 = (short *)(DAT_001c2b88 + *(short *)(param_1 + 0x1c) * 0x20);
  FUN_003510b0(param_1,DAT_001c2b88 + 0x140);
  uVar3 = DAT_001c2b8c;
  FUN_00372d4c(DAT_001c2b8c,DAT_001c2b8c,param_1 + 0xbc,0);
  if (9 < *(short *)(param_1 + 0x1c)) {
    FUN_00374428(param_1);
  }
  uVar5 = VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2e4) = uVar5;
  uVar5 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2e8) = uVar5;
  uVar5 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2ec) = uVar5;
  *(short *)(param_1 + 0x2fc) = psVar4[6];
  uVar5 = VectorSignedToFloat((int)psVar4[3],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2f0) = uVar5;
  uVar5 = VectorSignedToFloat((int)psVar4[4],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2f4) = uVar5;
  uVar5 = VectorSignedToFloat((int)psVar4[5],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x2f8) = uVar5;
  *(short *)(param_1 + 0x2fe) = psVar4[7];
  uVar7 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2ec),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2e8),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2e4),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar9,uVar5,uVar7,param_1 + 0x308,0xff,0xff,0xff,100,0);
  uVar9 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x308);
  uVar7 = DAT_001c2b94;
  uVar5 = DAT_001c2b90;
  *(undefined4 *)(param_1 + 0x304) = uVar9;
  *(undefined4 *)(param_1 + 0x298) = uVar5;
  *(undefined4 *)(param_1 + 0x29c) = uVar7;
  *(undefined4 *)(param_1 + 0x2a4) = DAT_001c2b98;
  *(undefined4 *)(param_1 + 0x2a8) = uVar3;
  *(undefined4 *)(param_1 + 0x2b0) = uVar5;
  uVar7 = DAT_001c2ba8;
  *(undefined4 *)(param_1 + 0x2b4) = DAT_001c2b9c;
  *(undefined4 *)(param_1 + 700) = DAT_001c2ba0;
  uVar5 = DAT_001c2ba4;
  *(undefined4 *)(param_1 + 0x2c0) = uVar3;
  *(undefined4 *)(param_1 + 0x2c8) = uVar5;
  *(undefined4 *)(param_1 + 0x2cc) = uVar7;
  *(undefined4 *)(param_1 + 0x2d4) = uVar5;
  *(undefined4 *)(param_1 + 0x2d8) = DAT_001c2bac;
  if ((*(byte *)((int)psVar4 + 0x1f) & 2) != 0) {
    FUN_00350eb8(param_2,param_1 + 0x1a4);
    FUN_00350d48(param_2,param_1 + 0x1a4,param_1,DAT_001c2bb0,param_1 + 0x1c4);
    if ((*(byte *)((int)psVar4 + 0x1f) & 4) == 0) {
      fVar10 = *(float *)(param_1 + 0x2e8);
      fVar12 = *(float *)(param_1 + 0x2ec);
      iVar2 = iVar2 + *(short *)(param_1 + 0x1c) * 0x20;
      fVar6 = *(float *)(iVar2 + 0x10);
      fVar8 = *(float *)(param_1 + 0x2f4);
      fVar11 = *(float *)(param_1 + 0x2f8);
      *(float *)(*(int *)(param_1 + 0x1c0) + 0x38) =
           (*(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 0x2e4)) * fVar6 +
           *(float *)(param_1 + 0x2e4);
      *(float *)(*(int *)(param_1 + 0x1c0) + 0x3c) =
           (fVar8 - fVar10) * fVar6 + *(float *)(param_1 + 0x2e8);
      *(float *)(*(int *)(param_1 + 0x1c0) + 0x40) =
           (fVar11 - fVar12) * fVar6 + *(float *)(param_1 + 0x2ec);
      fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar2 + 0x14),(byte)(in_fpscr >> 0x15) & 3)
      ;
      *(float *)(*(int *)(param_1 + 0x1c0) + 0x44) =
           fVar6 * *(float *)(*(int *)(param_1 + 0x1c0) + 0x48);
    }
  }
  FUN_00350a98(param_2,param_1 + 0x214);
  FUN_00350914(param_2,param_1 + 0x214,param_1,DAT_001c2bb4);
  sVar1 = *(short *)(param_1 + 0x1c);
  if ((sVar1 == 5 || sVar1 == 7) || sVar1 == 8) {
    *(undefined1 *)(param_1 + 3) = 0xff;
  }
  uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x328,0,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar3 = ObjectBankArchive_00358ef8(uVar3,0);
  *(undefined4 *)(param_1 + 0x324) = uVar3;
  return;
}
