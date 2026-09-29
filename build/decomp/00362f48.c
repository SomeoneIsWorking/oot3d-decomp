// OoT3D decomp @ 00362f48  name=FUN_00362f48  size=224

void FUN_00362f48(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  uVar3 = FUN_0036ae14(param_1 + 0x1e0,1);
  fVar2 = DAT_003630dc;
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00353020(DAT_003630e0,DAT_003630dc,uVar3,DAT_003630d8,param_1 + 0x1e0,DAT_003630e4,1);
  sVar1 = *(short *)(*(int *)(DAT_003630e8 + param_2) + 0xbe) + *(short *)(param_1 + 0xce2);
  fVar4 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0x92)));
  if (fVar2 < fVar4) {
    *(undefined2 *)(param_1 + 0xce2) = 16000;
  }
  else {
    fVar4 = (float)FUN_002cfca0((int)(short)(sVar1 - *(short *)(param_1 + 0x92)));
    if (fVar2 <= fVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(undefined2 *)(param_1 + 0xce2) = 0xc180;
  }
  *(undefined4 *)(param_1 + 0x6c) = DAT_003630ec;
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x6c) * DAT_003630f0;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(float *)(param_1 + 0xcd0) = fVar2;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
