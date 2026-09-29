// OoT3D decomp @ 001f1d2c  name=FUN_001f1d2c  size=432

void FUN_001f1d2c(undefined4 param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ushort uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;

  fVar3 = DAT_001f2120;
  fVar7 = DAT_001f210c;
  fVar2 = DAT_001f2104;
  fVar1 = DAT_001f20fc;
  fVar6 = DAT_001f20f8;
  uVar5 = *(ushort *)(param_3 + 0x4c) & 0x60;
  iVar4 = *DAT_001f2100;
  if (uVar5 == 0x20) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x48) =
         *(short *)(param_3 + 0x48) +
         (short)(int)(DAT_001f20fc + fVar6 * DAT_001f20f8 * DAT_001f2104);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x4a) =
         (short)(int)(fVar1 + fVar6 * fVar3 * fVar2) + *(short *)(param_3 + 0x4a);
  }
  else if (uVar5 == 0x40) {
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x48) =
         *(short *)(param_3 + 0x48) +
         (short)(int)(DAT_001f20fc + fVar7 * DAT_001f2124 * DAT_001f2104);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x4a) =
         (short)(int)(fVar1 + fVar7 * fVar6 * fVar2) + *(short *)(param_3 + 0x4a);
  }
  else if (uVar5 == 0x60) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x48) =
         *(short *)(param_3 + 0x48) +
         (short)(int)(DAT_001f20fc + fVar6 * DAT_001f2108 * DAT_001f2104);
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_3 + 0x4a) =
         (short)(int)(fVar1 + fVar6 * fVar7 * fVar2) + *(short *)(param_3 + 0x4a);
  }
  VectorSignedToFloat((int)*(short *)(param_3 + 0x4e),(byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat((int)*(short *)(param_3 + 0x50),(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x56),(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0(fVar6 * DAT_001f2110,DAT_001f2114);
}
