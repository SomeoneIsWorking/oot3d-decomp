// OoT3D decomp @ 0024a164  name=FUN_0024a164  size=144

void FUN_0024a164(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;

  uVar2 = DAT_0024a4a8;
  fVar1 = DAT_0024a4a4;
  *(short *)(param_1 + 0x1e4) = *(short *)(param_1 + 0x1c);
  if (*(short *)(param_1 + 0x1c) != 5) {
    FUN_00372d4c(DAT_0024a4b0,fVar1,param_1 + 0xbc,DAT_0024a4ac);
    if (*(short *)(param_1 + 0x1e4) != 6) {
      fVar3 = (float)FUN_00371e50(uVar2);
      *(float *)(param_1 + 0x1a4) = fVar3 + fVar1;
      fVar3 = (float)FUN_00371e50(uVar2);
      *(float *)(param_1 + 0x1a8) = fVar3 + fVar1;
      fVar3 = (float)FUN_00371e50(uVar2);
      *(float *)(param_1 + 0x1ac) = fVar3 + fVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
